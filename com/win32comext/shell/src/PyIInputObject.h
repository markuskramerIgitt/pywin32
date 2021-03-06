// This file declares the IInputObject Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIInputObject : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyIInputObject);
    static IInputObject *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *TranslateAcceleratorIO(PyObject *self, PyObject *args);
    static PyObject *UIActivateIO(PyObject *self, PyObject *args);
    static PyObject *HasFocusIO(PyObject *self, PyObject *args);

   protected:
    PyIInputObject(IUnknown *pdisp);
    ~PyIInputObject();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGInputObject : public PyGatewayBase, public IInputObject {
   protected:
    PyGInputObject(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGInputObject, IInputObject, IID_IInputObject, PyGatewayBase)

    // IInputObject
    STDMETHOD(TranslateAcceleratorIO)(MSG *pmsg);

    STDMETHOD(UIActivateIO)(BOOL uState, MSG *pmsg);

    STDMETHOD(HasFocusIO)(void);
};
