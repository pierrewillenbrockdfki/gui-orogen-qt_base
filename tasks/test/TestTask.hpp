/* Generated from orogen/lib/orogen/templates/tasks/Task.hpp */

#ifndef QT_BASE__TEST_TESTTASK_TASK_HPP
#define QT_BASE__TEST_TESTTASK_TASK_HPP

#include "qt_base/test/TestTaskBase.hpp"

namespace qt_base {
namespace test {
    /*! \class TestTask
     * \brief this task has no documentation, write one as a commentblock
     *        before the task_context statement in the orogen file
     */
    class TestTask : public TestTaskBase
    {
        /** The base class is auto-generated by orogen to define the task's interface
         *
         * It is located in the .orogen/tasks folder
         */
        friend class TestTaskBase;

    protected:

    public:
        /** TaskContext constructor for TestTask
         * \param name Name of the task. This name needs to be unique to make
         *             it identifiable via nameservices.
         * \param initial_state The initial TaskState of the TaskContext.
         *                      This is deprecated. It should always be the
         *                      configure state.
         */
        TestTask(std::string const& name = "qt_base::test::TestTask");

        ~TestTask();

        bool configureHook();
        bool startHook();
        void updateHook();
        void errorHook();
        void stopHook();
        void cleanupHook();

        void configureUI();
        void startUI();
        void updateUI();
        void errorUI();
        void stopUI();
        void cleanupUI();
    };
}
}

#endif