// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMABOX_H
        #define RECMABOX_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RBox.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaBox {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    static  QScriptValue getSetC1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetC2
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSane
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equalsFuzzy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equalsFuzzy2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        get2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArea
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMinimum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaximum
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOutside
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOutsideXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        contains
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        growToInclude
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        growToIncludeBoxes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        growToIncludeBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        growToIncludePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCorner1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCorner1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCorner2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCorner2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCorners
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCorners2d
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLines2d
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPolyline2d
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTriangles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        grow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        growXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scaleByReference
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toQRectF
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        equals
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        operator_not_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RBox* getSelf(const QString& fName, QScriptContext* context)
    ;static RBox* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    