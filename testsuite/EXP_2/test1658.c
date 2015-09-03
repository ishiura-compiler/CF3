#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x41 = INT32_MIN;
int8_t x45 = 1;
static int32_t x46 = INT32_MIN;
volatile int32_t t2 = -66261;
uint8_t x104 = 0U;
int32_t t6 = 320969;
int16_t x207 = INT16_MIN;
int32_t t8 = -65526;
volatile int16_t x222 = -1;
int64_t x245 = -141535821311117LL;
uint16_t x247 = UINT16_MAX;
uint8_t x292 = 13U;
static uint8_t x314 = 0U;
static int32_t t12 = -1;
static uint8_t x324 = 4U;
int16_t x335 = INT16_MIN;
volatile uint8_t x336 = 2U;
int64_t x374 = -1LL;
static int64_t x376 = 2LL;
volatile int16_t x393 = INT16_MAX;
int64_t x394 = -1LL;
volatile int64_t x442 = INT64_MAX;
int8_t x443 = INT8_MIN;
volatile uint32_t x444 = 1U;
volatile int64_t t18 = -2003385099745408024LL;
volatile int8_t x455 = INT8_MAX;
uint16_t x456 = 31U;
uint32_t x477 = 61330190U;
int64_t x485 = -297880736515809501LL;
int32_t x497 = -1;
static uint8_t x499 = 61U;
static volatile int32_t x505 = 1;
int8_t x507 = -1;
uint32_t x513 = 68555U;
int8_t x515 = INT8_MIN;
uint32_t t24 = 74U;
int32_t x586 = -849;
int64_t x587 = INT64_MAX;
int64_t x651 = INT64_MIN;
volatile int8_t x814 = 4;
int64_t x815 = -522057LL;
int64_t x995 = -1LL;
volatile uint64_t t36 = 329750056301498526LLU;
static int16_t x1087 = INT16_MIN;
int8_t x1099 = 1;
int16_t x1113 = -2065;
uint8_t x1127 = 1U;
volatile uint64_t t41 = 185619336LLU;
int8_t x1149 = INT8_MIN;
uint32_t x1151 = 680283127U;
volatile int8_t x1189 = INT8_MAX;
int64_t x1201 = -1LL;
static int16_t x1214 = INT16_MIN;
int32_t x1215 = -1;
static int64_t t46 = -682LL;
int32_t t49 = 15828;
uint8_t x1546 = 0U;
uint8_t x1654 = 0U;
int32_t t56 = -959;
volatile uint64_t x1670 = 1323LLU;
volatile int32_t t57 = -53;
int8_t x1685 = INT8_MIN;
volatile int8_t x1688 = 1;
volatile int8_t x1720 = 2;
uint8_t x1724 = 1U;
volatile int64_t t61 = -824603360414161100LL;
int32_t x1789 = INT32_MIN;
volatile int32_t t62 = -28;
volatile int64_t t64 = -27LL;
int64_t x1886 = -39397322536LL;
uint8_t x1888 = 50U;
int8_t x1993 = INT8_MIN;
uint32_t x1997 = UINT32_MAX;
int8_t x2000 = 0;
int8_t x2083 = INT8_MIN;
int16_t x2102 = -12904;
static volatile int64_t t73 = 1LL;
uint32_t x2132 = 30U;
int8_t x2203 = -1;
uint8_t x2248 = 0U;
volatile uint16_t x2253 = UINT16_MAX;
int32_t x2254 = INT32_MAX;
static uint16_t x2256 = 0U;
static uint32_t x2260 = 1U;
static uint16_t x2364 = 31U;
static int8_t x2413 = 0;
volatile int16_t x2414 = 14201;
static uint16_t x2415 = UINT16_MAX;
uint64_t x2416 = 2LLU;
static int32_t x2417 = 1;
volatile int32_t t86 = 1637;
static int8_t x2481 = INT8_MIN;
static int16_t x2482 = 2459;
volatile int32_t t89 = 107024862;
int16_t x2569 = INT16_MAX;
int16_t x2578 = 1;
volatile int32_t x2579 = -1;
uint16_t x2580 = 39U;
uint32_t x2625 = 5394605U;
uint8_t x2664 = 1U;
volatile uint64_t t94 = 8404837211917660357LLU;
int64_t x2715 = -1LL;
static int16_t x2716 = 0;
int16_t x2756 = 26;
int32_t t97 = 5483280;
int32_t x2773 = INT32_MAX;
static int32_t x2777 = -5018526;
int32_t t99 = 779834;


void f0(void) {
	uint64_t x29 = 77852313770779614LLU;
	static int64_t x30 = INT64_MAX;
	uint64_t x31 = 662LLU;
	uint16_t x32 = 11U;
	volatile uint64_t t0 = 3276299660470628659LLU;

	t0 = ((x29&(x30<=x31))>>x32);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x42 = INT32_MAX;
	int8_t x43 = -1;
	int16_t x44 = 1;
	int32_t t1 = -6135163;

	t1 = ((x41&(x42<=x43))>>x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x47 = INT16_MAX;
	static volatile int64_t x48 = 23LL;

	t2 = ((x45&(x46<=x47))>>x48);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MIN;
	volatile uint64_t x67 = 51761805507266732LLU;
	uint8_t x68 = 1U;
	static int32_t t3 = 2;

	t3 = ((x65&(x66<=x67))>>x68);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x102 = -1;
	uint32_t x103 = 327U;
	volatile int64_t t4 = 101144LL;

	t4 = ((x101&(x102<=x103))>>x104);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x129 = -1;
	static int16_t x130 = 1;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 7U;
	static volatile int32_t t5 = -130135993;

	t5 = ((x129&(x130<=x131))>>x132);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x165 = 10001U;
	volatile int16_t x166 = -7;
	static int16_t x167 = INT16_MAX;
	uint64_t x168 = 0LLU;

	t6 = ((x165&(x166<=x167))>>x168);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x193 = 11101870053LLU;
	int16_t x194 = 145;
	static int32_t x195 = -1;
	uint8_t x196 = 16U;
	static uint64_t t7 = 8LLU;

	t7 = ((x193&(x194<=x195))>>x196);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x205 = INT32_MIN;
	uint8_t x206 = 41U;
	static uint8_t x208 = 3U;

	t8 = ((x205&(x206<=x207))>>x208);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x221 = 10089LLU;
	int64_t x223 = 223954123LL;
	uint32_t x224 = 57U;
	volatile uint64_t t9 = 290923702LLU;

	t9 = ((x221&(x222<=x223))>>x224);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x246 = -1;
	uint8_t x248 = 47U;
	int64_t t10 = -17618768LL;

	t10 = ((x245&(x246<=x247))>>x248);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x289 = -3LL;
	int16_t x290 = 220;
	volatile int16_t x291 = -10;
	volatile int64_t t11 = -3176121798769818LL;

	t11 = ((x289&(x290<=x291))>>x292);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x313 = 0;
	uint32_t x315 = 14718U;
	volatile uint16_t x316 = 2U;

	t12 = ((x313&(x314<=x315))>>x316);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	int32_t t13 = -169;

	t13 = ((x321&(x322<=x323))>>x324);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x333 = -1;
	int64_t x334 = -1095483702479089888LL;
	volatile int32_t t14 = 0;

	t14 = ((x333&(x334<=x335))>>x336);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x373 = 43860U;
	static int64_t x375 = 569449963954LL;
	volatile uint32_t t15 = 53U;

	t15 = ((x373&(x374<=x375))>>x376);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x395 = 484121248;
	int16_t x396 = 23;
	volatile int32_t t16 = -360;

	t16 = ((x393&(x394<=x395))>>x396);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x409 = -2379;
	static int8_t x410 = 0;
	int8_t x411 = -52;
	static int16_t x412 = 3;
	volatile int32_t t17 = 7676690;

	t17 = ((x409&(x410<=x411))>>x412);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x441 = INT64_MAX;

	t18 = ((x441&(x442<=x443))>>x444);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x453 = -1LL;
	uint32_t x454 = 45646U;
	static volatile int64_t t19 = -1094815978002390LL;

	t19 = ((x453&(x454<=x455))>>x456);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x478 = -1;
	int64_t x479 = -3118183140LL;
	static int8_t x480 = 1;
	volatile uint32_t t20 = 62U;

	t20 = ((x477&(x478<=x479))>>x480);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x486 = 4U;
	static uint32_t x487 = 315U;
	uint8_t x488 = 30U;
	static volatile int64_t t21 = -185238052068LL;

	t21 = ((x485&(x486<=x487))>>x488);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x498 = 290069313910LL;
	volatile int32_t x500 = 1;
	volatile int32_t t22 = 258786744;

	t22 = ((x497&(x498<=x499))>>x500);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x506 = UINT8_MAX;
	int8_t x508 = 0;
	static volatile int32_t t23 = 6557916;

	t23 = ((x505&(x506<=x507))>>x508);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x514 = INT64_MIN;
	int8_t x516 = 13;

	t24 = ((x513&(x514<=x515))>>x516);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x569 = 1;
	int8_t x570 = -1;
	int16_t x571 = INT16_MIN;
	int16_t x572 = 1;
	static int32_t t25 = -6952;

	t25 = ((x569&(x570<=x571))>>x572);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x585 = INT8_MIN;
	uint8_t x588 = 3U;
	static volatile int32_t t26 = -5990995;

	t26 = ((x585&(x586<=x587))>>x588);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x649 = INT16_MAX;
	static int32_t x650 = INT32_MIN;
	int8_t x652 = 1;
	static int32_t t27 = -464629;

	t27 = ((x649&(x650<=x651))>>x652);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x757 = 929;
	static uint32_t x758 = UINT32_MAX;
	static int16_t x759 = -1;
	static uint8_t x760 = 10U;
	int32_t t28 = -383232362;

	t28 = ((x757&(x758<=x759))>>x760);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x777 = INT32_MAX;
	uint32_t x778 = UINT32_MAX;
	int64_t x779 = -1LL;
	uint8_t x780 = 7U;
	int32_t t29 = 7;

	t29 = ((x777&(x778<=x779))>>x780);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x813 = INT32_MAX;
	volatile int32_t x816 = 7;
	int32_t t30 = -140;

	t30 = ((x813&(x814<=x815))>>x816);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x825 = -1;
	static int8_t x826 = -3;
	int32_t x827 = -1;
	uint8_t x828 = 26U;
	static int32_t t31 = -61176;

	t31 = ((x825&(x826<=x827))>>x828);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x857 = 495255348LL;
	int16_t x858 = INT16_MAX;
	static int64_t x859 = INT64_MIN;
	uint16_t x860 = 2U;
	static int64_t t32 = -350502655973677570LL;

	t32 = ((x857&(x858<=x859))>>x860);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x957 = INT64_MIN;
	static volatile int64_t x958 = INT64_MAX;
	int16_t x959 = -1;
	uint16_t x960 = 21U;
	static int64_t t33 = -6881661LL;

	t33 = ((x957&(x958<=x959))>>x960);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x985 = INT16_MAX;
	volatile uint32_t x986 = UINT32_MAX;
	volatile int32_t x987 = INT32_MIN;
	uint8_t x988 = 12U;
	int32_t t34 = 8058;

	t34 = ((x985&(x986<=x987))>>x988);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x989 = -1;
	static int32_t x990 = INT32_MIN;
	int64_t x991 = -1LL;
	uint16_t x992 = 31U;
	static int32_t t35 = 210;

	t35 = ((x989&(x990<=x991))>>x992);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x993 = 3050400837434567LLU;
	static volatile int32_t x994 = -1;
	int8_t x996 = 0;

	t36 = ((x993&(x994<=x995))>>x996);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1085 = INT32_MIN;
	uint32_t x1086 = 7788744U;
	uint8_t x1088 = 1U;
	volatile int32_t t37 = 8985;

	t37 = ((x1085&(x1086<=x1087))>>x1088);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1097 = 6U;
	volatile uint64_t x1098 = 367522029831113LLU;
	int8_t x1100 = 7;
	int32_t t38 = 6199843;

	t38 = ((x1097&(x1098<=x1099))>>x1100);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1114 = INT8_MAX;
	volatile int64_t x1115 = INT64_MAX;
	uint32_t x1116 = 0U;
	volatile int32_t t39 = -93855192;

	t39 = ((x1113&(x1114<=x1115))>>x1116);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1125 = 7383799824LL;
	static uint32_t x1126 = UINT32_MAX;
	int16_t x1128 = 49;
	volatile int64_t t40 = 281021614LL;

	t40 = ((x1125&(x1126<=x1127))>>x1128);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1145 = 3093359773LLU;
	int32_t x1146 = INT32_MIN;
	static int64_t x1147 = INT64_MIN;
	uint8_t x1148 = 0U;

	t41 = ((x1145&(x1146<=x1147))>>x1148);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1150 = INT8_MAX;
	static volatile uint8_t x1152 = 26U;
	int32_t t42 = 2;

	t42 = ((x1149&(x1150<=x1151))>>x1152);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1190 = 15;
	int8_t x1191 = INT8_MAX;
	int8_t x1192 = 12;
	volatile int32_t t43 = 15292;

	t43 = ((x1189&(x1190<=x1191))>>x1192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1193 = INT16_MAX;
	int32_t x1194 = -1;
	static uint64_t x1195 = 45876957876LLU;
	uint32_t x1196 = 20U;
	volatile int32_t t44 = 42;

	t44 = ((x1193&(x1194<=x1195))>>x1196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1202 = INT16_MIN;
	static uint8_t x1203 = 1U;
	volatile int8_t x1204 = 0;
	volatile int64_t t45 = 9136459LL;

	t45 = ((x1201&(x1202<=x1203))>>x1204);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1213 = INT64_MIN;
	uint8_t x1216 = 5U;

	t46 = ((x1213&(x1214<=x1215))>>x1216);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1269 = INT8_MIN;
	uint16_t x1270 = 139U;
	uint8_t x1271 = 1U;
	static volatile int64_t x1272 = 2LL;
	volatile int32_t t47 = -144901;

	t47 = ((x1269&(x1270<=x1271))>>x1272);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x1285 = -1LL;
	int64_t x1286 = 2943522274LL;
	int8_t x1287 = 2;
	volatile int32_t x1288 = 1;
	volatile int64_t t48 = -590315617162LL;

	t48 = ((x1285&(x1286<=x1287))>>x1288);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1289 = -1;
	int32_t x1290 = INT32_MIN;
	int32_t x1291 = -1;
	int8_t x1292 = 30;

	t49 = ((x1289&(x1290<=x1291))>>x1292);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1309 = INT16_MIN;
	volatile uint16_t x1310 = 14U;
	uint64_t x1311 = 221819963055946LLU;
	volatile uint64_t x1312 = 1LLU;
	volatile int32_t t50 = 1105081;

	t50 = ((x1309&(x1310<=x1311))>>x1312);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1385 = -29;
	int16_t x1386 = INT16_MAX;
	volatile int8_t x1387 = -2;
	static uint8_t x1388 = 3U;
	static int32_t t51 = -7125;

	t51 = ((x1385&(x1386<=x1387))>>x1388);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1401 = -1;
	uint64_t x1402 = 23249961LLU;
	int16_t x1403 = INT16_MAX;
	static volatile int8_t x1404 = 14;
	static int32_t t52 = 383544755;

	t52 = ((x1401&(x1402<=x1403))>>x1404);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1545 = -1;
	int64_t x1547 = INT64_MAX;
	uint8_t x1548 = 0U;
	volatile int32_t t53 = -1095;

	t53 = ((x1545&(x1546<=x1547))>>x1548);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x1637 = INT64_MAX;
	int8_t x1638 = INT8_MAX;
	uint32_t x1639 = UINT32_MAX;
	uint8_t x1640 = 16U;
	volatile int64_t t54 = -277198LL;

	t54 = ((x1637&(x1638<=x1639))>>x1640);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1653 = -58LL;
	volatile int8_t x1655 = INT8_MIN;
	int16_t x1656 = 36;
	int64_t t55 = 1609LL;

	t55 = ((x1653&(x1654<=x1655))>>x1656);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1661 = -2105;
	int16_t x1662 = -1;
	int16_t x1663 = INT16_MIN;
	uint8_t x1664 = 16U;

	t56 = ((x1661&(x1662<=x1663))>>x1664);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1669 = INT16_MIN;
	int16_t x1671 = INT16_MIN;
	volatile uint16_t x1672 = 0U;

	t57 = ((x1669&(x1670<=x1671))>>x1672);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1686 = INT8_MAX;
	int16_t x1687 = INT16_MIN;
	volatile int32_t t58 = -127984722;

	t58 = ((x1685&(x1686<=x1687))>>x1688);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1709 = INT8_MAX;
	uint64_t x1710 = 404613364LLU;
	int32_t x1711 = -1;
	uint8_t x1712 = 2U;
	volatile int32_t t59 = 9015656;

	t59 = ((x1709&(x1710<=x1711))>>x1712);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1717 = INT8_MIN;
	static int16_t x1718 = INT16_MIN;
	volatile uint16_t x1719 = 3165U;
	int32_t t60 = -6837;

	t60 = ((x1717&(x1718<=x1719))>>x1720);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x1721 = INT64_MIN;
	int64_t x1722 = INT64_MIN;
	volatile uint64_t x1723 = 6282988LLU;

	t61 = ((x1721&(x1722<=x1723))>>x1724);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1790 = INT8_MIN;
	int8_t x1791 = 2;
	volatile int16_t x1792 = 29;

	t62 = ((x1789&(x1790<=x1791))>>x1792);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1801 = INT8_MAX;
	volatile int32_t x1802 = INT32_MIN;
	volatile uint16_t x1803 = 229U;
	volatile uint8_t x1804 = 1U;
	int32_t t63 = -161075614;

	t63 = ((x1801&(x1802<=x1803))>>x1804);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1805 = 3024105889894375864LL;
	int32_t x1806 = INT32_MIN;
	uint16_t x1807 = 121U;
	int8_t x1808 = 0;

	t64 = ((x1805&(x1806<=x1807))>>x1808);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1821 = UINT32_MAX;
	static int64_t x1822 = -1LL;
	volatile int16_t x1823 = -1;
	static uint32_t x1824 = 14U;
	static volatile uint32_t t65 = 11U;

	t65 = ((x1821&(x1822<=x1823))>>x1824);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1885 = INT64_MIN;
	volatile int32_t x1887 = -17027;
	volatile int64_t t66 = 169008814LL;

	t66 = ((x1885&(x1886<=x1887))>>x1888);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1994 = 287U;
	int64_t x1995 = 615300962LL;
	static uint64_t x1996 = 27LLU;
	int32_t t67 = 831599;

	t67 = ((x1993&(x1994<=x1995))>>x1996);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x1998 = 179209613533194848LLU;
	int16_t x1999 = -1;
	uint32_t t68 = 415U;

	t68 = ((x1997&(x1998<=x1999))>>x2000);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x2013 = 765;
	int32_t x2014 = -1;
	uint64_t x2015 = 37452373495692LLU;
	volatile uint8_t x2016 = 0U;
	volatile int32_t t69 = 171;

	t69 = ((x2013&(x2014<=x2015))>>x2016);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2037 = -1;
	static int32_t x2038 = -1;
	int16_t x2039 = 8095;
	uint16_t x2040 = 15U;
	volatile int32_t t70 = 0;

	t70 = ((x2037&(x2038<=x2039))>>x2040);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2081 = UINT8_MAX;
	static int16_t x2082 = INT16_MAX;
	uint16_t x2084 = 4U;
	volatile int32_t t71 = -18104;

	t71 = ((x2081&(x2082<=x2083))>>x2084);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x2101 = 2U;
	int8_t x2103 = INT8_MAX;
	uint64_t x2104 = 2LLU;
	static int32_t t72 = -314;

	t72 = ((x2101&(x2102<=x2103))>>x2104);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2121 = INT64_MIN;
	int32_t x2122 = INT32_MIN;
	uint8_t x2123 = 27U;
	uint8_t x2124 = 22U;

	t73 = ((x2121&(x2122<=x2123))>>x2124);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2129 = UINT64_MAX;
	int64_t x2130 = -701145642743174883LL;
	uint8_t x2131 = 0U;
	static uint64_t t74 = 4087LLU;

	t74 = ((x2129&(x2130<=x2131))>>x2132);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2201 = INT8_MIN;
	volatile uint8_t x2202 = 0U;
	uint32_t x2204 = 6U;
	int32_t t75 = 1;

	t75 = ((x2201&(x2202<=x2203))>>x2204);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2245 = -4487033918045377587LL;
	static int8_t x2246 = INT8_MAX;
	int16_t x2247 = INT16_MIN;
	int64_t t76 = -332836LL;

	t76 = ((x2245&(x2246<=x2247))>>x2248);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2255 = 978U;
	volatile int32_t t77 = -827684;

	t77 = ((x2253&(x2254<=x2255))>>x2256);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2257 = 15754;
	volatile uint64_t x2258 = 2410820811982850881LLU;
	static uint64_t x2259 = 178218443165LLU;
	volatile int32_t t78 = 337;

	t78 = ((x2257&(x2258<=x2259))>>x2260);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2297 = INT8_MAX;
	static int32_t x2298 = -485;
	int64_t x2299 = -996LL;
	static uint8_t x2300 = 16U;
	static int32_t t79 = -11659123;

	t79 = ((x2297&(x2298<=x2299))>>x2300);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2345 = INT8_MIN;
	static int64_t x2346 = 29100074LL;
	int8_t x2347 = INT8_MAX;
	uint32_t x2348 = 5U;
	volatile int32_t t80 = -34488444;

	t80 = ((x2345&(x2346<=x2347))>>x2348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2361 = UINT32_MAX;
	uint64_t x2362 = 70636425349798094LLU;
	static int64_t x2363 = -45959531480249201LL;
	uint32_t t81 = 137810U;

	t81 = ((x2361&(x2362<=x2363))>>x2364);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2365 = -1LL;
	static uint16_t x2366 = UINT16_MAX;
	int64_t x2367 = -1LL;
	int8_t x2368 = 6;
	volatile int64_t t82 = -4251LL;

	t82 = ((x2365&(x2366<=x2367))>>x2368);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x2369 = 29134683418484LLU;
	int32_t x2370 = -1;
	uint16_t x2371 = 132U;
	uint64_t x2372 = 27LLU;
	uint64_t t83 = 14364232LLU;

	t83 = ((x2369&(x2370<=x2371))>>x2372);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2377 = 4623645LL;
	uint16_t x2378 = 0U;
	static volatile int8_t x2379 = INT8_MAX;
	uint8_t x2380 = 4U;
	int64_t t84 = 95166914285175LL;

	t84 = ((x2377&(x2378<=x2379))>>x2380);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t t85 = -26231016;

	t85 = ((x2413&(x2414<=x2415))>>x2416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2418 = INT64_MIN;
	volatile uint16_t x2419 = 29909U;
	volatile uint16_t x2420 = 2U;

	t86 = ((x2417&(x2418<=x2419))>>x2420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2483 = -71;
	uint8_t x2484 = 1U;
	static volatile int32_t t87 = -13231;

	t87 = ((x2481&(x2482<=x2483))>>x2484);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2521 = INT8_MIN;
	volatile uint64_t x2522 = UINT64_MAX;
	int8_t x2523 = INT8_MIN;
	uint16_t x2524 = 13U;
	int32_t t88 = 10437669;

	t88 = ((x2521&(x2522<=x2523))>>x2524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x2553 = 1U;
	volatile uint16_t x2554 = 15U;
	uint16_t x2555 = 30U;
	uint8_t x2556 = 0U;

	t89 = ((x2553&(x2554<=x2555))>>x2556);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2570 = 261670353U;
	int32_t x2571 = -11;
	uint8_t x2572 = 13U;
	int32_t t90 = -21;

	t90 = ((x2569&(x2570<=x2571))>>x2572);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x2577 = 643050LL;
	int64_t t91 = 3993346073LL;

	t91 = ((x2577&(x2578<=x2579))>>x2580);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2581 = INT32_MAX;
	int16_t x2582 = 1;
	uint64_t x2583 = UINT64_MAX;
	int8_t x2584 = 8;
	static int32_t t92 = 889;

	t92 = ((x2581&(x2582<=x2583))>>x2584);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2626 = -310;
	static uint16_t x2627 = 98U;
	volatile uint8_t x2628 = 1U;
	uint32_t t93 = 772264643U;

	t93 = ((x2625&(x2626<=x2627))>>x2628);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2661 = 4409437LLU;
	int16_t x2662 = INT16_MAX;
	int32_t x2663 = -2392274;

	t94 = ((x2661&(x2662<=x2663))>>x2664);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x2713 = 212763336U;
	int16_t x2714 = -1;
	uint32_t t95 = 824555204U;

	t95 = ((x2713&(x2714<=x2715))>>x2716);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2753 = INT16_MIN;
	uint64_t x2754 = 3696435316923LLU;
	int8_t x2755 = 63;
	int32_t t96 = 66087683;

	t96 = ((x2753&(x2754<=x2755))>>x2756);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2769 = UINT16_MAX;
	uint16_t x2770 = 983U;
	static uint8_t x2771 = 11U;
	int8_t x2772 = 0;

	t97 = ((x2769&(x2770<=x2771))>>x2772);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x2774 = INT64_MIN;
	int64_t x2775 = INT64_MAX;
	int8_t x2776 = 30;
	int32_t t98 = 465216554;

	t98 = ((x2773&(x2774<=x2775))>>x2776);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2778 = INT64_MAX;
	int16_t x2779 = -1;
	uint8_t x2780 = 20U;

	t99 = ((x2777&(x2778<=x2779))>>x2780);

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

