package com.scichart.sci_chart.data;

import com.scichart.core.model.DoubleValues;


public class DataManager {
    private static final DataManager INSTANCE = new DataManager();

    private DataManager() {
    }

    public static DataManager getInstance() {
        return INSTANCE;
    }





    public DoubleSeries getDampedSinewave(double amplitude, double dampingFactor, int pointCount, int freq) {
        return getDampedSinewave(0, amplitude, 0.0, dampingFactor, pointCount, freq);
    }

    public DoubleSeries getDampedSinewave(int pad, double amplitude, double phase, double dampingFactor, int pointCount, int freq) {
        final DoubleSeries doubleSeries = new DoubleSeries(pointCount);

        for (int i = 0; i < pad; i++) {
            double time = 10 * i / (double) pointCount;
            doubleSeries.add(time, 0d);
        }

        for (int i = pad, j = 0; i < pointCount; i++, j++) {
            double time = 10 * i / (double) pointCount;
            double wn = 2 * Math.PI / (pointCount / (double) freq);

            final double d = amplitude * Math.sin(j * wn + phase);
            doubleSeries.add(time, d);

            amplitude *= (1.0 - dampingFactor);
        }

        return doubleSeries;
    }

    public DoubleSeries getSinewave(double amplitude, double phase, int pointCount, int freq) {
        return getDampedSinewave(0, amplitude, phase, 0, pointCount, freq);
    }

    public DoubleSeries getSinewave(double amplitude, double phase, int pointCount) {
        return getSinewave(amplitude, phase, pointCount, 10);
    }

    private static double[] getValuesArray(DoubleValues values, int count) {
        values.clear();

        values.setSize(count);

        return values.getItemsArray();
    }

}
