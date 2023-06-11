EventScript_RepelWoreOff::
.if I_REPEL_LURE_MENU == TRUE
	checkitem ITEM_REPEL, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_RepelUseAnother
	checkitem ITEM_SUPER_REPEL, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_RepelUseAnother
	checkitem ITEM_MAX_REPEL, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_RepelUseAnother
.else
	checkitem VAR_LAST_REPEL_LURE_USED, 1
	goto_if_eq VAR_RESULT, TRUE, EventScript_RepelUseAnother
.endif
	lock
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	release
	end

Text_RepelWoreOff: @ 82A4B33
	.string "Repel's effect wore off…$"
