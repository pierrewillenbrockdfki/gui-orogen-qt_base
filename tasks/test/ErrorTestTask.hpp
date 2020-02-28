/* Generated from orogen/lib/orogen/templates/tasks/Task.hpp */

#ifndef QT_BASE__TEST_ERRORTESTTASK_TASK_HPP
#define QT_BASE__TEST_ERRORTESTTASK_TASK_HPP

#include "qt_base/test/ErrorTestTaskBase.hpp"

namespace qt_base {
namespace test {
    /*! \class ErrorTestTask
     * \brief this task has no documentation, write one as a commentblock before the task_context statement in the orogen file
     */
    class ErrorTestTask : public ErrorTestTaskBase
    {
        /** The base class is auto-generated by orogen to define the task's interface
         *
         * It is located in the .orogen/tasks folder
         */
        friend class ErrorTestTaskBase;

    protected:

    public:
        /** TaskContext constructor for ErrorTestTask
         * \param name Name of the task. This name needs to be unique to make
         *             it identifiable via nameservices.
         * \param initial_state The initial TaskState of the TaskContext.
         *                      This is deprecated. It should always be the
         *                      configure state.
         */
        ErrorTestTask(std::string const& name = "qt_base::test::ErrorTestTask");

        ~ErrorTestTask();

        /**
         * Hook called when the state machine transitions from PreOperational to
         * Stopped.
         *
         * If the code throws an exception, the transition will be aborted
         * and the component will end in the EXCEPTION state instead
         *
         * @return true if the transition can continue, false otherwise
         */
        bool configureHook();

        void configureUI();

        /**
         * Hook called when the state machine transition from Stopped to Running
         *
         * If the code throws an exception, the transition will be aborted
         * and the component will end in the EXCEPTION state instead
         *
         * @return true if the transition is successful, false otherwise
         */
        bool startHook();

        /**
         * Hook called on trigger in the Running state
         *
         * When this hook is exactly called depends on the chosen task's activity.
         * For instance, if the task context is declared as periodic in the orogen
         * specification, the task will be called at a fixed period.
         *
         * See Rock's documentation for a list of available triggering mechanisms
         *
         * The error(), exception() and fatal() calls, when called in this hook,
         * allow to get into the associated RunTimeError, Exception and
         * FatalError states.
         */
        void updateHook();

        /**
         * Hook called in the RuntimeError state, under the same conditions than
         * the updateHook
         *
         * Call recover() to go back in the Runtime state.
         */
        void errorHook();

        /**
         * Hook called when the component transitions out of the Running state
         *
         * This is called for any transition out of running, that is the
         * transitions to Stopped, Exception and Fatal
         */
        void stopHook();

        /**
         * Hook called on all transitions to PreOperational
         *
         * This is called for all transitions into PreOperational, that is
         * either from Stopped or Exception
         */
        void cleanupHook();
    };
}
}

#endif
