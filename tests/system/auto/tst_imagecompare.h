/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Graphical Effects module.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef TST_IMAGECOMPARE_H
#define TST_IMAGECOMPARE_H

#include <QtTest/QtTest>

class tst_imagecompare : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void initTestCase();
    void blend_varMode();
    void brightnessContrast_varBrightness();
    void brightnessContrast_varContrast();
    void colorize_varHue();
    void colorize_varSaturation();
    void colorize_varLightness();
    void colorOverlay_varColor();
    void conicalGradient_varAngle();
    void conicalGradient_varHorizontalOffset();
    void conicalGradient_varVerticalOffset();
    void conicalGradient_varGradient();
    void conicalGradient_varMaskSource();
    void desaturate_varDesaturation();
    void displace_varDisplacement();
    void dropShadow_varRadius();
    void dropShadow_varColor();
    void dropShadow_varHorizontalOffset();
    void dropShadow_varVerticalOffset();
    void dropShadow_varSpread();
    void fastDropShadow_varColor();
    void fastDropShadow_varHorizontalOffset();
    void fastDropShadow_varVerticalOffset();
    void fastDropShadow_varSpread();
    void glow_varRadius();
    void glow_varColor();
    void glow_varSpread();
    void fastGlow_varBlur();
    void fastGlow_varColor();
    void fastGlow_varSpread();
    void fastBlur_varBlur();
    void fastBlur_varTransparentBorder();
    void gammaAdjust_varGamma();
    void gaussianBlur_varRadius();
    void gaussianBlur_varDeviation();
    void gaussianBlur_varTransparentBorder();
    void hueSaturation_varHue();
    void hueSaturation_varSaturation();
    void hueSaturation_varLightness();
    void linearGradient_varGradient();
    void linearGradient_varStart();
    void linearGradient_varEnd();
    void linearGradient_varMaskSource();
    void opacityMask_varMaskSource();
    void radialGradient_varHorizontalOffset();
    void radialGradient_varVerticalOffset();
    void radialGradient_varHorizontalRadius();
    void radialGradient_varVerticalRadius();
    void radialGradient_varGradient();
    void radialGradient_varAngle();
    void radialGradient_varMaskSource();
    void rectangularGlow_varGlowRadius();
    void rectangularGlow_varSpread();
    void rectangularGlow_varColor();
    void rectangularGlow_varCornerRadius();
    void recursiveBlur_varLoops();
    void recursiveBlur_varRadius();
    void recursiveBlur_varTransparentBorder();
    void thresholdMask_varSpread();
    void thresholdMask_varThreshold();
};

#endif // TST_IMAGECOMPARE_H
