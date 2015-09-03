#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x6 = 582989491377LLU;
int8_t x7 = 0;
int32_t x9 = INT32_MAX;
int64_t x28 = INT64_MAX;
volatile int64_t x75 = INT64_MIN;
uint8_t x76 = 3U;
volatile uint16_t x153 = 777U;
volatile int16_t x154 = INT16_MAX;
int8_t x160 = -4;
int32_t t8 = -21;
uint32_t x205 = 3U;
uint32_t x206 = UINT32_MAX;
static uint64_t x269 = 12LLU;
int8_t x278 = INT8_MIN;
uint16_t x285 = UINT16_MAX;
int16_t x286 = -1;
static int64_t x304 = 1411892572353302665LL;
volatile int32_t t13 = 613131;
uint8_t x381 = 1U;
int8_t x412 = INT8_MAX;
volatile int32_t x416 = -2;
volatile uint16_t x521 = 399U;
int16_t x588 = -1;
int8_t x611 = 1;
uint32_t x639 = 16U;
uint32_t t30 = UINT32_MAX;
volatile uint16_t x653 = UINT16_MAX;
static int8_t x656 = 0;
int64_t x669 = INT64_MAX;
int32_t x671 = INT32_MIN;
int8_t x768 = -1;
volatile int64_t x858 = INT64_MIN;
uint16_t x859 = 86U;
static int16_t x882 = -10067;
int16_t x937 = 1;
int64_t x940 = INT64_MIN;
volatile int32_t t41 = INT32_MAX;
int32_t x1053 = 755;
static uint16_t x1055 = 9289U;
int16_t x1152 = 1250;
int32_t x1214 = -191204163;
uint32_t x1215 = UINT32_MAX;
static volatile int32_t t49 = -248377;
volatile uint8_t x1258 = 98U;
int8_t x1260 = 1;
volatile uint64_t t52 = 10071868040929419LLU;
uint8_t x1286 = 6U;
volatile int32_t x1288 = INT32_MIN;
uint8_t x1291 = 85U;
static int8_t x1319 = 0;
int8_t x1320 = INT8_MAX;
uint32_t t57 = 26929U;
static int64_t x1354 = INT64_MIN;
volatile int32_t t59 = 199845368;
static uint8_t x1393 = UINT8_MAX;
static int8_t x1403 = 39;
volatile int16_t x1456 = INT16_MIN;
int64_t t64 = 1468070851LL;
uint32_t x1510 = 6590039U;
static volatile uint32_t x1513 = 56483361U;
int64_t x1516 = INT64_MIN;
volatile uint32_t t66 = 90655914U;
static int8_t x1523 = INT8_MIN;
volatile uint8_t x1530 = 0U;
int8_t x1532 = 2;
uint32_t t74 = UINT32_MAX;
static int8_t x1707 = INT8_MIN;
static volatile int16_t x1720 = -12599;
int16_t x1798 = INT16_MAX;
int32_t x1862 = INT32_MIN;
static volatile int32_t x1864 = INT32_MIN;
static uint64_t x1885 = 2688034LLU;
static int8_t x1957 = INT8_MAX;
int64_t x1958 = INT64_MIN;
volatile int32_t t85 = 1;
int32_t x1996 = INT32_MIN;
uint8_t x1998 = 65U;
static int8_t x1999 = INT8_MIN;
int8_t x2002 = 13;
int64_t x2003 = INT64_MIN;
volatile int16_t x2004 = -1;
int8_t x2042 = 2;
int32_t t90 = -92252;
volatile uint64_t t91 = 200319104660LLU;
int16_t x2082 = 10;
static int32_t x2084 = 83743310;
static int32_t x2094 = INT32_MIN;
int64_t x2096 = INT64_MIN;
int32_t x2111 = INT32_MIN;
uint32_t t95 = 47U;
int32_t t97 = -8598;
uint64_t x2141 = 2595069750773964LLU;
static int32_t x2144 = 789115;


void f0(void) {
	uint8_t x5 = 46U;
	int8_t x8 = INT8_MIN;
	static int32_t t0 = 580;

	t0 = (x5>>((x6&x7)*x8));

	if (t0 != 46) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 227U;
	int8_t x12 = -4;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x9>>((x10&x11)*x12));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = 0;
	int64_t x26 = INT64_MIN;
	volatile int32_t x27 = INT32_MAX;
	static int32_t t2 = 2467473;

	t2 = (x25>>((x26&x27)*x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x41 = 380LLU;
	int8_t x42 = -1;
	static int8_t x43 = 0;
	static uint32_t x44 = 57158961U;
	uint64_t t3 = 670270856189147472LLU;

	t3 = (x41>>((x42&x43)*x44));

	if (t3 != 380LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x73 = 13U;
	uint32_t x74 = 4043U;
	volatile int32_t t4 = -2972744;

	t4 = (x73>>((x74&x75)*x76));

	if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x81 = UINT8_MAX;
	static volatile int64_t x82 = INT64_MIN;
	static volatile int16_t x83 = INT16_MAX;
	int32_t x84 = -519888;
	static volatile int32_t t5 = -192174;

	t5 = (x81>>((x82&x83)*x84));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x155 = 1U;
	volatile int8_t x156 = 6;
	int32_t t6 = -2607;

	t6 = (x153>>((x154&x155)*x156));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x157 = 602U;
	static uint8_t x158 = 0U;
	static int16_t x159 = INT16_MIN;
	uint32_t t7 = 10U;

	t7 = (x157>>((x158&x159)*x160));

	if (t7 != 602U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x173 = INT8_MAX;
	int64_t x174 = INT64_MIN;
	int32_t x175 = 238199031;
	uint8_t x176 = 1U;

	t8 = (x173>>((x174&x175)*x176));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x207 = INT32_MIN;
	volatile int16_t x208 = 4;
	uint32_t t9 = 1587971U;

	t9 = (x205>>((x206&x207)*x208));

	if (t9 != 3U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x270 = 17U;
	uint16_t x271 = 3078U;
	uint16_t x272 = 0U;
	uint64_t t10 = 0LLU;

	t10 = (x269>>((x270&x271)*x272));

	if (t10 != 12LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x277 = 182U;
	uint64_t x279 = 8LLU;
	int64_t x280 = -1LL;
	int32_t t11 = -639866157;

	t11 = (x277>>((x278&x279)*x280));

	if (t11 != 182) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x287 = 0U;
	int64_t x288 = -1LL;
	int32_t t12 = -46237;

	t12 = (x285>>((x286&x287)*x288));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x301 = 315;
	int8_t x302 = INT8_MAX;
	int16_t x303 = INT16_MIN;

	t13 = (x301>>((x302&x303)*x304));

	if (t13 != 315) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x325 = 10948631;
	static volatile uint8_t x326 = 33U;
	int32_t x327 = 2;
	static int16_t x328 = -122;
	volatile int32_t t14 = -218715;

	t14 = (x325>>((x326&x327)*x328));

	if (t14 != 10948631) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x333 = 1;
	int16_t x334 = 0;
	uint64_t x335 = 534382290809LLU;
	int8_t x336 = INT8_MIN;
	int32_t t15 = -56;

	t15 = (x333>>((x334&x335)*x336));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x357 = UINT32_MAX;
	static int64_t x358 = INT64_MIN;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x357>>((x358&x359)*x360));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x377 = 124U;
	int16_t x378 = 1;
	volatile uint8_t x379 = 2U;
	int32_t x380 = 1069;
	volatile int32_t t17 = -206634753;

	t17 = (x377>>((x378&x379)*x380));

	if (t17 != 124) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = 0;
	int16_t x384 = INT16_MIN;
	static int32_t t18 = -30440156;

	t18 = (x381>>((x382&x383)*x384));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x409 = 1U;
	volatile uint16_t x410 = UINT16_MAX;
	static int64_t x411 = INT64_MIN;
	volatile int32_t t19 = 618910567;

	t19 = (x409>>((x410&x411)*x412));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = 8LL;
	int8_t x415 = -10;
	uint64_t t20 = UINT64_MAX;

	t20 = (x413>>((x414&x415)*x416));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x469 = INT8_MAX;
	static volatile int16_t x470 = 0;
	uint16_t x471 = 0U;
	int8_t x472 = -35;
	int32_t t21 = -734;

	t21 = (x469>>((x470&x471)*x472));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x517 = 26U;
	int32_t x518 = INT32_MIN;
	uint32_t x519 = 26010377U;
	int32_t x520 = -14773200;
	volatile int32_t t22 = 1073314864;

	t22 = (x517>>((x518&x519)*x520));

	if (t22 != 26) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x522 = INT64_MIN;
	uint32_t x523 = 775602661U;
	int64_t x524 = 937LL;
	static int32_t t23 = 968011038;

	t23 = (x521>>((x522&x523)*x524));

	if (t23 != 399) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x533 = INT64_MAX;
	volatile int64_t x534 = INT64_MIN;
	static volatile uint32_t x535 = 185912U;
	int64_t x536 = -3LL;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x533>>((x534&x535)*x536));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x537 = INT32_MAX;
	int8_t x538 = INT8_MAX;
	volatile int32_t x539 = INT32_MIN;
	int16_t x540 = INT16_MIN;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x537>>((x538&x539)*x540));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x585 = UINT16_MAX;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = INT64_MIN;
	volatile int32_t t26 = 80839;

	t26 = (x585>>((x586&x587)*x588));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x609 = INT32_MAX;
	int64_t x610 = INT64_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x609>>((x610&x611)*x612));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x625 = 13;
	int16_t x626 = INT16_MIN;
	uint8_t x627 = 4U;
	volatile int64_t x628 = -1LL;
	volatile int32_t t28 = -563432;

	t28 = (x625>>((x626&x627)*x628));

	if (t28 != 13) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x637 = UINT8_MAX;
	static uint8_t x638 = 3U;
	int16_t x640 = -1;
	int32_t t29 = 3;

	t29 = (x637>>((x638&x639)*x640));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x645 = UINT32_MAX;
	int8_t x646 = INT8_MIN;
	volatile int8_t x647 = 1;
	volatile uint32_t x648 = 7U;

	t30 = (x645>>((x646&x647)*x648));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x654 = INT32_MIN;
	volatile uint8_t x655 = 17U;
	static int32_t t31 = 218;

	t31 = (x653>>((x654&x655)*x656));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x670 = INT16_MAX;
	int8_t x672 = INT8_MIN;
	int64_t t32 = INT64_MAX;

	t32 = (x669>>((x670&x671)*x672));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x685 = 12051U;
	uint8_t x686 = UINT8_MAX;
	static int64_t x687 = INT64_MIN;
	volatile uint8_t x688 = 85U;
	volatile int32_t t33 = -13334206;

	t33 = (x685>>((x686&x687)*x688));

	if (t33 != 12051) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x721 = 6;
	int8_t x722 = 2;
	volatile uint8_t x723 = UINT8_MAX;
	uint8_t x724 = 2U;
	int32_t t34 = -199;

	t34 = (x721>>((x722&x723)*x724));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x765 = 1304564131189834154LLU;
	uint8_t x766 = 5U;
	int32_t x767 = 172082;
	uint64_t t35 = 6080LLU;

	t35 = (x765>>((x766&x767)*x768));

	if (t35 != 1304564131189834154LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x825 = INT32_MAX;
	static int64_t x826 = INT64_MIN;
	uint32_t x827 = UINT32_MAX;
	int16_t x828 = 0;
	static volatile int32_t t36 = INT32_MAX;

	t36 = (x825>>((x826&x827)*x828));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x853 = UINT32_MAX;
	static volatile int16_t x854 = 7617;
	uint32_t x855 = 1023380U;
	static int32_t x856 = INT32_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x853>>((x854&x855)*x856));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x857 = UINT64_MAX;
	static uint16_t x860 = 0U;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x857>>((x858&x859)*x860));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x881 = UINT32_MAX;
	uint8_t x883 = 0U;
	static uint64_t x884 = UINT64_MAX;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x881>>((x882&x883)*x884));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x938 = 12U;
	int8_t x939 = 1;
	volatile int32_t t40 = 0;

	t40 = (x937>>((x938&x939)*x940));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1025 = INT32_MAX;
	volatile uint16_t x1026 = 22U;
	static int32_t x1027 = INT32_MIN;
	volatile int16_t x1028 = INT16_MAX;

	t41 = (x1025>>((x1026&x1027)*x1028));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1037 = 7U;
	uint32_t x1038 = 56U;
	uint8_t x1039 = 1U;
	uint8_t x1040 = 3U;
	volatile int32_t t42 = -237063;

	t42 = (x1037>>((x1038&x1039)*x1040));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1054 = INT64_MIN;
	volatile int16_t x1056 = -868;
	int32_t t43 = 50848;

	t43 = (x1053>>((x1054&x1055)*x1056));

	if (t43 != 755) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1097 = 17;
	volatile int16_t x1098 = INT16_MIN;
	uint8_t x1099 = 50U;
	uint64_t x1100 = UINT64_MAX;
	static int32_t t44 = -1;

	t44 = (x1097>>((x1098&x1099)*x1100));

	if (t44 != 17) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1105 = 98720U;
	int32_t x1106 = INT32_MIN;
	uint32_t x1107 = 457172U;
	uint32_t x1108 = 1340669232U;
	volatile uint32_t t45 = 1019U;

	t45 = (x1105>>((x1106&x1107)*x1108));

	if (t45 != 98720U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1149 = 43;
	volatile int8_t x1150 = 0;
	uint32_t x1151 = 12551431U;
	int32_t t46 = -37092;

	t46 = (x1149>>((x1150&x1151)*x1152));

	if (t46 != 43) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1201 = 93;
	uint32_t x1202 = 2U;
	uint8_t x1203 = 89U;
	static int32_t x1204 = INT32_MAX;
	static volatile int32_t t47 = -8;

	t47 = (x1201>>((x1202&x1203)*x1204));

	if (t47 != 93) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1209 = 12144115007171187LLU;
	int8_t x1210 = INT8_MAX;
	int8_t x1211 = INT8_MIN;
	uint16_t x1212 = UINT16_MAX;
	volatile uint64_t t48 = 143425496851716797LLU;

	t48 = (x1209>>((x1210&x1211)*x1212));

	if (t48 != 12144115007171187LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x1213 = 61U;
	volatile uint8_t x1216 = 0U;

	t49 = (x1213>>((x1214&x1215)*x1216));

	if (t49 != 61) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1217 = UINT32_MAX;
	volatile uint8_t x1218 = UINT8_MAX;
	static int32_t x1219 = INT32_MIN;
	static uint8_t x1220 = 7U;
	static uint32_t t50 = UINT32_MAX;

	t50 = (x1217>>((x1218&x1219)*x1220));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1257 = UINT32_MAX;
	static int16_t x1259 = 0;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x1257>>((x1258&x1259)*x1260));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1265 = 8214061228392951976LLU;
	int64_t x1266 = INT64_MIN;
	uint16_t x1267 = UINT16_MAX;
	static int32_t x1268 = INT32_MAX;

	t52 = (x1265>>((x1266&x1267)*x1268));

	if (t52 != 8214061228392951976LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1285 = INT64_MAX;
	static int16_t x1287 = INT16_MIN;
	int64_t t53 = INT64_MAX;

	t53 = (x1285>>((x1286&x1287)*x1288));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x1289 = UINT16_MAX;
	int8_t x1290 = 0;
	volatile int64_t x1292 = INT64_MIN;
	volatile int32_t t54 = 14534336;

	t54 = (x1289>>((x1290&x1291)*x1292));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1317 = INT8_MAX;
	int64_t x1318 = -1LL;
	int32_t t55 = -122;

	t55 = (x1317>>((x1318&x1319)*x1320));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1333 = 3235740339641878LLU;
	int8_t x1334 = 0;
	uint32_t x1335 = 35595U;
	uint64_t x1336 = 1149949270LLU;
	volatile uint64_t t56 = 59066LLU;

	t56 = (x1333>>((x1334&x1335)*x1336));

	if (t56 != 3235740339641878LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1337 = 930946723U;
	uint32_t x1338 = 1U;
	static int8_t x1339 = INT8_MIN;
	int64_t x1340 = -1LL;

	t57 = (x1337>>((x1338&x1339)*x1340));

	if (t57 != 930946723U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1341 = INT32_MAX;
	int16_t x1342 = 4;
	static int32_t x1343 = INT32_MIN;
	static int32_t x1344 = -4851;
	static int32_t t58 = INT32_MAX;

	t58 = (x1341>>((x1342&x1343)*x1344));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1353 = 0U;
	uint8_t x1355 = 12U;
	static int8_t x1356 = INT8_MIN;

	t59 = (x1353>>((x1354&x1355)*x1356));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1385 = 14185U;
	int64_t x1386 = INT64_MIN;
	uint8_t x1387 = 33U;
	uint64_t x1388 = UINT64_MAX;
	int32_t t60 = 597593193;

	t60 = (x1385>>((x1386&x1387)*x1388));

	if (t60 != 14185) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x1394 = 1287670337508805603LLU;
	int64_t x1395 = INT64_MIN;
	uint8_t x1396 = UINT8_MAX;
	volatile int32_t t61 = -31964;

	t61 = (x1393>>((x1394&x1395)*x1396));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1401 = INT32_MAX;
	static uint8_t x1402 = 0U;
	int16_t x1404 = INT16_MIN;
	static int32_t t62 = INT32_MAX;

	t62 = (x1401>>((x1402&x1403)*x1404));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x1421 = UINT8_MAX;
	int8_t x1422 = -1;
	static int16_t x1423 = -432;
	static volatile int16_t x1424 = 0;
	volatile int32_t t63 = 478854;

	t63 = (x1421>>((x1422&x1423)*x1424));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x1453 = 4034750681LL;
	int16_t x1454 = 1;
	static int16_t x1455 = INT16_MIN;

	t64 = (x1453>>((x1454&x1455)*x1456));

	if (t64 != 4034750681LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1509 = 28U;
	int32_t x1511 = INT32_MIN;
	int32_t x1512 = -1;
	volatile int32_t t65 = -1870472;

	t65 = (x1509>>((x1510&x1511)*x1512));

	if (t65 != 28) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1514 = INT32_MIN;
	uint32_t x1515 = 18171U;

	t66 = (x1513>>((x1514&x1515)*x1516));

	if (t66 != 56483361U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1521 = 410642552868LLU;
	static uint64_t x1522 = 0LLU;
	int64_t x1524 = -75197051037058143LL;
	uint64_t t67 = 1052393LLU;

	t67 = (x1521>>((x1522&x1523)*x1524));

	if (t67 != 410642552868LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1525 = 115;
	volatile int32_t x1526 = INT32_MIN;
	volatile int32_t x1527 = -1;
	uint32_t x1528 = 40U;
	int32_t t68 = -153;

	t68 = (x1525>>((x1526&x1527)*x1528));

	if (t68 != 115) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1529 = INT64_MAX;
	static int8_t x1531 = INT8_MIN;
	int64_t t69 = INT64_MAX;

	t69 = (x1529>>((x1530&x1531)*x1532));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1569 = 10601359228635LL;
	uint64_t x1570 = UINT64_MAX;
	static int8_t x1571 = -1;
	int32_t x1572 = -1;
	volatile int64_t t70 = 27720873780743137LL;

	t70 = (x1569>>((x1570&x1571)*x1572));

	if (t70 != 5300679614317LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1613 = 5796209U;
	volatile int64_t x1614 = INT64_MIN;
	uint32_t x1615 = 15U;
	volatile uint16_t x1616 = UINT16_MAX;
	uint32_t t71 = 2870212U;

	t71 = (x1613>>((x1614&x1615)*x1616));

	if (t71 != 5796209U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x1649 = 36048U;
	static volatile uint32_t x1650 = 3339U;
	uint32_t x1651 = 3115751U;
	static uint8_t x1652 = 0U;
	uint32_t t72 = 113U;

	t72 = (x1649>>((x1650&x1651)*x1652));

	if (t72 != 36048U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x1653 = 3075099032787753LLU;
	uint16_t x1654 = 85U;
	static int32_t x1655 = INT32_MIN;
	uint8_t x1656 = 59U;
	volatile uint64_t t73 = 516843226609150LLU;

	t73 = (x1653>>((x1654&x1655)*x1656));

	if (t73 != 3075099032787753LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x1677 = UINT32_MAX;
	static int8_t x1678 = INT8_MIN;
	uint8_t x1679 = 44U;
	volatile uint32_t x1680 = 35492U;

	t74 = (x1677>>((x1678&x1679)*x1680));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x1705 = 12;
	int64_t x1706 = 3LL;
	static int64_t x1708 = -271295576732272LL;
	volatile int32_t t75 = 14412;

	t75 = (x1705>>((x1706&x1707)*x1708));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1717 = 230380688LLU;
	volatile uint8_t x1718 = UINT8_MAX;
	int64_t x1719 = INT64_MIN;
	volatile uint64_t t76 = 1111384094530LLU;

	t76 = (x1717>>((x1718&x1719)*x1720));

	if (t76 != 230380688LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1725 = 4;
	int32_t x1726 = INT32_MIN;
	int16_t x1727 = INT16_MAX;
	int8_t x1728 = 3;
	int32_t t77 = -125570283;

	t77 = (x1725>>((x1726&x1727)*x1728));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x1793 = 157;
	static int64_t x1794 = INT64_MIN;
	uint8_t x1795 = 18U;
	volatile int8_t x1796 = INT8_MIN;
	int32_t t78 = 2498147;

	t78 = (x1793>>((x1794&x1795)*x1796));

	if (t78 != 157) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x1797 = 15U;
	int32_t x1799 = INT32_MIN;
	int64_t x1800 = -1LL;
	static volatile int32_t t79 = -619347;

	t79 = (x1797>>((x1798&x1799)*x1800));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1849 = 1191;
	int32_t x1850 = 978;
	uint64_t x1851 = 3060964063217LLU;
	static int16_t x1852 = 0;
	volatile int32_t t80 = -123681;

	t80 = (x1849>>((x1850&x1851)*x1852));

	if (t80 != 1191) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1861 = 7;
	int32_t x1863 = INT32_MAX;
	int32_t t81 = -1;

	t81 = (x1861>>((x1862&x1863)*x1864));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1869 = INT32_MAX;
	int64_t x1870 = -1LL;
	static int64_t x1871 = -5899311344813LL;
	volatile uint64_t x1872 = 0LLU;
	volatile int32_t t82 = INT32_MAX;

	t82 = (x1869>>((x1870&x1871)*x1872));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1886 = 0U;
	uint32_t x1887 = 239628547U;
	uint16_t x1888 = 0U;
	static volatile uint64_t t83 = 5279180117316716LLU;

	t83 = (x1885>>((x1886&x1887)*x1888));

	if (t83 != 2688034LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x1921 = 132;
	int16_t x1922 = INT16_MIN;
	int16_t x1923 = INT16_MAX;
	int64_t x1924 = INT64_MIN;
	volatile int32_t t84 = -14;

	t84 = (x1921>>((x1922&x1923)*x1924));

	if (t84 != 132) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x1959 = UINT64_MAX;
	int32_t x1960 = -687770;

	t85 = (x1957>>((x1958&x1959)*x1960));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1993 = 26U;
	int64_t x1994 = -3530785460557435LL;
	uint16_t x1995 = 0U;
	int32_t t86 = -23429;

	t86 = (x1993>>((x1994&x1995)*x1996));

	if (t86 != 26) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1997 = 59LLU;
	uint32_t x2000 = 1U;
	static uint64_t t87 = 466275489844860LLU;

	t87 = (x1997>>((x1998&x1999)*x2000));

	if (t87 != 59LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2001 = INT32_MAX;
	static volatile int32_t t88 = INT32_MAX;

	t88 = (x2001>>((x2002&x2003)*x2004));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2041 = INT64_MAX;
	static uint32_t x2043 = 63U;
	static uint32_t x2044 = 0U;
	int64_t t89 = INT64_MAX;

	t89 = (x2041>>((x2042&x2043)*x2044));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x2045 = UINT16_MAX;
	uint8_t x2046 = 101U;
	uint8_t x2047 = 8U;
	static int16_t x2048 = INT16_MIN;

	t90 = (x2045>>((x2046&x2047)*x2048));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x2057 = 7368201323475373LLU;
	uint8_t x2058 = 0U;
	int16_t x2059 = INT16_MIN;
	static int32_t x2060 = -9;

	t91 = (x2057>>((x2058&x2059)*x2060));

	if (t91 != 7368201323475373LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x2081 = 12U;
	int64_t x2083 = INT64_MIN;
	volatile int32_t t92 = 0;

	t92 = (x2081>>((x2082&x2083)*x2084));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2085 = 10635LLU;
	int8_t x2086 = 1;
	volatile int8_t x2087 = INT8_MIN;
	int16_t x2088 = 7388;
	static uint64_t t93 = 383LLU;

	t93 = (x2085>>((x2086&x2087)*x2088));

	if (t93 != 10635LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2093 = 34U;
	volatile int8_t x2095 = INT8_MAX;
	volatile int32_t t94 = 21553755;

	t94 = (x2093>>((x2094&x2095)*x2096));

	if (t94 != 34) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2109 = 0U;
	static uint8_t x2110 = 23U;
	int32_t x2112 = -5;

	t95 = (x2109>>((x2110&x2111)*x2112));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2125 = 3870U;
	int32_t x2126 = INT32_MIN;
	volatile int32_t x2127 = 307253963;
	int32_t x2128 = INT32_MAX;
	int32_t t96 = 134;

	t96 = (x2125>>((x2126&x2127)*x2128));

	if (t96 != 3870) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x2129 = 6U;
	int16_t x2130 = 2;
	int64_t x2131 = INT64_MIN;
	volatile int16_t x2132 = 0;

	t97 = (x2129>>((x2130&x2131)*x2132));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2133 = 1U;
	static volatile int64_t x2134 = INT64_MIN;
	uint8_t x2135 = 59U;
	int64_t x2136 = 548524380512886454LL;
	volatile int32_t t98 = -8047;

	t98 = (x2133>>((x2134&x2135)*x2136));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2142 = 1;
	volatile int16_t x2143 = INT16_MIN;
	static uint64_t t99 = 372778347828LLU;

	t99 = (x2141>>((x2142&x2143)*x2144));

	if (t99 != 2595069750773964LLU) { NG(); } else { ; }
	
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

