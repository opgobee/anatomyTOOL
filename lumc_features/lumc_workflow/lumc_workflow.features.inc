<?php
/**
 * @file
 * lumc_workflow.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function lumc_workflow_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'content_workflow'
  $workflows['content_workflow'] = entity_import('Workflow', '{
    "name" : "content_workflow",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"Student-generated content","status":"1","name":"student_generated_content"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"To be reviewed","status":"1","name":"to_be_reviewed"},
      "4" : {"sid":"4","wid":"1","weight":"-18","sysid":"0","state":"Reviewed","status":"1","name":"reviewed"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1,"3":3,"9":9},"wid":"1","name":"1_2","label":""},
      "2" : {"tid":"2","sid":"1","target_sid":"3","roles":{"3":3,"9":9},"wid":"1","name":"1_3","label":""},
      "3" : {"tid":"3","sid":"2","target_sid":"2","roles":{"-1":-1,"2":2,"3":3,"8":8,"9":9},"wid":"1","name":"2_2","label":""},
      "4" : {"tid":"4","sid":"2","target_sid":"3","roles":{"3":3,"9":9},"wid":"1","name":"2_3","label":""},
      "7" : {"tid":"7","sid":"2","target_sid":"4","roles":{"2":2,"3":3,"8":8,"9":9},"wid":"1","name":"2_4","label":""},
      "5" : {"tid":"5","sid":"3","target_sid":"2","roles":{"3":3,"9":9},"wid":"1","name":"3_2","label":""},
      "6" : {"tid":"6","sid":"3","target_sid":"3","roles":{"-1":-1,"2":2,"3":3,"8":8,"9":9},"wid":"1","name":"3_3","label":""},
      "8" : {"tid":"8","sid":"3","target_sid":"4","roles":{"2":2,"3":3,"8":8,"9":9},"wid":"1","name":"3_4","label":""},
      "9" : {"tid":"9","sid":"4","target_sid":"3","roles":{"3":3,"8":8,"9":9},"wid":"1","name":"4_3","label":""},
      "10" : {"tid":"10","sid":"4","target_sid":"4","roles":{"-1":-1,"2":2,"3":3,"8":8,"9":9},"wid":"1","name":"4_4","label":""}
    },
    "label" : "Content workflow",
    "typeMap" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "administrator",
      "5" : "student manager",
      "4" : "forum administrator",
      "7" : "publisher",
      "8" : "student",
      "9" : "teacher"
    }
  }');

  return $workflows;
}
