#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x28 = 5U;
int32_t t1 = -1251169;
int16_t x57 = INT16_MAX;
volatile uint16_t x59 = 3U;
int8_t x73 = INT8_MAX;
volatile int16_t x74 = -1;
uint8_t x75 = 1U;
int16_t x78 = INT16_MAX;
int32_t x148 = 1;
uint8_t x176 = 1U;
volatile int64_t t6 = -1140074LL;
volatile uint8_t x180 = 22U;
int64_t t7 = -955LL;
int8_t x189 = 0;
uint8_t x202 = 12U;
volatile int64_t x213 = INT64_MAX;
int8_t x230 = INT8_MAX;
static uint8_t x232 = 4U;
static uint64_t x261 = 7LLU;
uint16_t x312 = 27U;
int8_t x327 = -5;
int16_t x354 = INT16_MIN;
int64_t x355 = -166872816106763275LL;
uint8_t x356 = 46U;
static int8_t x384 = 4;
int64_t x388 = 1LL;
uint16_t x407 = UINT16_MAX;
uint32_t x420 = 1U;
uint8_t x521 = 1U;
static uint16_t x523 = 94U;
static uint16_t x641 = 138U;
int64_t x642 = -268348545LL;
uint8_t x643 = UINT8_MAX;
static volatile int32_t t29 = -29015;
static int32_t x666 = -1;
int8_t x667 = INT8_MIN;
int16_t x669 = 0;
uint16_t x672 = 4U;
static volatile int32_t t31 = 590190681;
uint64_t x702 = UINT64_MAX;
int32_t x735 = 740702;
uint16_t x750 = 7497U;
int64_t x751 = INT64_MIN;
volatile uint8_t x752 = 0U;
volatile uint8_t x766 = 11U;
uint8_t x806 = 0U;
int8_t x871 = INT8_MIN;
int8_t x872 = 8;
volatile uint16_t x1011 = 154U;
int8_t x1012 = 9;
uint64_t x1050 = UINT64_MAX;
uint8_t x1108 = 4U;
uint16_t x1183 = 108U;
uint32_t x1192 = 2U;
uint16_t x1335 = UINT16_MAX;
volatile int16_t x1370 = -1;
static uint64_t x1378 = 806902954255247959LLU;
static volatile int8_t x1379 = 5;
static volatile int32_t x1380 = 0;
volatile int32_t t54 = -99024445;
volatile int32_t t59 = 8;
uint32_t x1558 = 0U;
int8_t x1562 = -1;
int8_t x1653 = 13;
int16_t x1656 = 1;
volatile uint8_t x1659 = 6U;
int16_t x1725 = INT16_MIN;
int64_t x1726 = -1LL;
static int16_t x1785 = INT16_MAX;
uint16_t x1786 = 21U;
volatile int32_t t68 = 889101;
uint32_t x1869 = 9211451U;
uint64_t x1893 = 2737975LLU;
uint16_t x1894 = 20U;
int8_t x2010 = -1;
int8_t x2012 = 14;
static int8_t x2215 = INT8_MIN;
int16_t x2244 = 0;
static volatile int16_t x2303 = -1;
int64_t x2349 = INT64_MAX;
uint8_t x2351 = UINT8_MAX;
volatile int32_t t86 = -193081;
int32_t x2443 = INT32_MIN;
static int32_t t87 = 258;
uint8_t x2504 = 14U;
static int32_t x2590 = 2;
int16_t x2617 = -1;
volatile int8_t x2620 = 14;
volatile int32_t t91 = -14711;
uint32_t x2705 = 22U;
volatile uint16_t x2707 = UINT16_MAX;
uint16_t x2708 = 0U;
volatile uint32_t t92 = 24578134U;
uint8_t x2712 = 4U;
volatile int32_t t93 = 1;
int8_t x2722 = -1;
int16_t x2741 = INT16_MAX;
uint64_t t96 = 129534284LLU;
uint8_t x2888 = 2U;
int64_t t98 = -5835024LL;


void f0(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = 1294;
	volatile int64_t x27 = -1LL;
	volatile int32_t t0 = 23133;

	t0 = ((x25&(x26<=x27))<<x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x29 = 1543U;
	int8_t x30 = INT8_MAX;
	int16_t x31 = 769;
	uint32_t x32 = 23U;

	t1 = ((x29&(x30<=x31))<<x32);

	if (t1 != 8388608) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x58 = INT8_MIN;
	uint8_t x60 = 12U;
	volatile int32_t t2 = 6;

	t2 = ((x57&(x58<=x59))<<x60);

	if (t2 != 4096) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x76 = 22U;
	volatile int32_t t3 = -1065923;

	t3 = ((x73&(x74<=x75))<<x76);

	if (t3 != 4194304) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x79 = 0U;
	static volatile uint8_t x80 = 5U;
	static volatile int32_t t4 = -34192;

	t4 = ((x77&(x78<=x79))<<x80);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x145 = -1LL;
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	volatile int64_t t5 = 85242764209084808LL;

	t5 = ((x145&(x146<=x147))<<x148);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x173 = 2534570814759146LL;
	int64_t x174 = -624242984793LL;
	uint16_t x175 = 7203U;

	t6 = ((x173&(x174<=x175))<<x176);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x177 = -11326388863LL;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MAX;

	t7 = ((x177&(x178<=x179))<<x180);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 1LLU;
	int32_t t8 = -78227167;

	t8 = ((x189&(x190<=x191))<<x192);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x201 = 930539686759LL;
	int32_t x203 = 441;
	uint8_t x204 = 10U;
	int64_t t9 = -78757LL;

	t9 = ((x201&(x202<=x203))<<x204);

	if (t9 != 1024LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x214 = 8U;
	int8_t x215 = INT8_MIN;
	static uint32_t x216 = 37U;
	int64_t t10 = 245207989315LL;

	t10 = ((x213&(x214<=x215))<<x216);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x229 = 3730533424941967766LLU;
	int16_t x231 = INT16_MAX;
	uint64_t t11 = 1631515438653LLU;

	t11 = ((x229&(x230<=x231))<<x232);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x262 = 6801U;
	static uint8_t x263 = 20U;
	uint8_t x264 = 6U;
	volatile uint64_t t12 = 734729097LLU;

	t12 = ((x261&(x262<=x263))<<x264);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x309 = 2U;
	uint64_t x310 = 2594LLU;
	static uint64_t x311 = 5983690606LLU;
	int32_t t13 = -18;

	t13 = ((x309&(x310<=x311))<<x312);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x325 = 3145352;
	uint32_t x326 = UINT32_MAX;
	static int8_t x328 = 1;
	int32_t t14 = -8;

	t14 = ((x325&(x326<=x327))<<x328);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x353 = 276416129898718791LLU;
	uint64_t t15 = 88LLU;

	t15 = ((x353&(x354<=x355))<<x356);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x381 = INT64_MIN;
	static uint64_t x382 = 283879LLU;
	static uint64_t x383 = 3603LLU;
	static volatile int64_t t16 = 24244LL;

	t16 = ((x381&(x382<=x383))<<x384);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x385 = UINT16_MAX;
	static uint64_t x386 = 22947LLU;
	volatile uint16_t x387 = UINT16_MAX;
	volatile int32_t t17 = 12754;

	t17 = ((x385&(x386<=x387))<<x388);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x393 = -3972869045656970393LL;
	int32_t x394 = -641496;
	int32_t x395 = INT32_MAX;
	uint32_t x396 = 1U;
	int64_t t18 = -484775636165437LL;

	t18 = ((x393&(x394<=x395))<<x396);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x405 = -1;
	int8_t x406 = INT8_MAX;
	static volatile uint8_t x408 = 2U;
	static int32_t t19 = -6;

	t19 = ((x405&(x406<=x407))<<x408);

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int8_t x418 = -56;
	int32_t x419 = INT32_MAX;
	volatile uint64_t t20 = 3777015063LLU;

	t20 = ((x417&(x418<=x419))<<x420);

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x421 = 3274389U;
	static volatile uint8_t x422 = 0U;
	uint16_t x423 = UINT16_MAX;
	uint8_t x424 = 14U;
	uint32_t t21 = 30098955U;

	t21 = ((x421&(x422<=x423))<<x424);

	if (t21 != 16384U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x425 = -63;
	static int64_t x426 = -364809LL;
	int16_t x427 = -1;
	volatile uint32_t x428 = 1U;
	int32_t t22 = -37192319;

	t22 = ((x425&(x426<=x427))<<x428);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x493 = INT64_MAX;
	static int8_t x494 = INT8_MIN;
	uint8_t x495 = 14U;
	int8_t x496 = 0;
	int64_t t23 = 1179895938540427LL;

	t23 = ((x493&(x494<=x495))<<x496);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x509 = UINT32_MAX;
	volatile int32_t x510 = -18;
	static uint64_t x511 = 30654855987558461LLU;
	static int8_t x512 = 13;
	volatile uint32_t t24 = 102U;

	t24 = ((x509&(x510<=x511))<<x512);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x522 = INT16_MIN;
	int8_t x524 = 0;
	volatile int32_t t25 = 0;

	t25 = ((x521&(x522<=x523))<<x524);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x553 = 104255LLU;
	int8_t x554 = -53;
	uint64_t x555 = 9804LLU;
	uint8_t x556 = 60U;
	static volatile uint64_t t26 = 2971015361941974026LLU;

	t26 = ((x553&(x554<=x555))<<x556);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x577 = 61481U;
	int8_t x578 = -1;
	volatile uint16_t x579 = 0U;
	int8_t x580 = 1;
	volatile uint32_t t27 = 2432102U;

	t27 = ((x577&(x578<=x579))<<x580);

	if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x589 = 0U;
	int8_t x590 = -1;
	volatile int64_t x591 = INT64_MIN;
	uint8_t x592 = 1U;
	int32_t t28 = 230528;

	t28 = ((x589&(x590<=x591))<<x592);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x644 = 7U;

	t29 = ((x641&(x642<=x643))<<x644);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x665 = INT64_MIN;
	uint8_t x668 = 3U;
	static volatile int64_t t30 = -7267415346566594LL;

	t30 = ((x665&(x666<=x667))<<x668);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x670 = -15;
	static int32_t x671 = -1;

	t31 = ((x669&(x670<=x671))<<x672);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x685 = INT16_MIN;
	uint16_t x686 = 1930U;
	static int64_t x687 = INT64_MIN;
	static int16_t x688 = 4;
	int32_t t32 = 17499;

	t32 = ((x685&(x686<=x687))<<x688);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x701 = 3U;
	uint32_t x703 = 123881163U;
	uint8_t x704 = 13U;
	int32_t t33 = 803893243;

	t33 = ((x701&(x702<=x703))<<x704);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x733 = INT16_MAX;
	int64_t x734 = 101766LL;
	static int8_t x736 = 2;
	static volatile int32_t t34 = -1;

	t34 = ((x733&(x734<=x735))<<x736);

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x749 = -508506324;
	int32_t t35 = -6269;

	t35 = ((x749&(x750<=x751))<<x752);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x765 = INT32_MIN;
	uint32_t x767 = 11U;
	uint8_t x768 = 1U;
	static volatile int32_t t36 = -14190997;

	t36 = ((x765&(x766<=x767))<<x768);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x793 = 1;
	volatile int64_t x794 = -1LL;
	static uint64_t x795 = 3131789121551LLU;
	uint16_t x796 = 3U;
	volatile int32_t t37 = 15533799;

	t37 = ((x793&(x794<=x795))<<x796);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x797 = 1583U;
	volatile uint8_t x798 = 13U;
	int32_t x799 = -1;
	uint8_t x800 = 6U;
	int32_t t38 = 1;

	t38 = ((x797&(x798<=x799))<<x800);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x805 = 119U;
	int64_t x807 = -1LL;
	uint32_t x808 = 1U;
	static int32_t t39 = 6062;

	t39 = ((x805&(x806<=x807))<<x808);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x809 = -272;
	static uint8_t x810 = 0U;
	volatile uint8_t x811 = UINT8_MAX;
	static uint32_t x812 = 16U;
	int32_t t40 = 22849;

	t40 = ((x809&(x810<=x811))<<x812);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x853 = INT64_MIN;
	uint16_t x854 = UINT16_MAX;
	int32_t x855 = 0;
	int8_t x856 = 4;
	int64_t t41 = -23249799110615152LL;

	t41 = ((x853&(x854<=x855))<<x856);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x869 = 102183635200751LLU;
	uint32_t x870 = 243418U;
	volatile uint64_t t42 = 343985442152854LLU;

	t42 = ((x869&(x870<=x871))<<x872);

	if (t42 != 256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1009 = -1LL;
	volatile int16_t x1010 = INT16_MAX;
	int64_t t43 = -8402840606LL;

	t43 = ((x1009&(x1010<=x1011))<<x1012);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1049 = 12653789307LL;
	uint8_t x1051 = UINT8_MAX;
	int16_t x1052 = 1;
	volatile int64_t t44 = -1042051948306LL;

	t44 = ((x1049&(x1050<=x1051))<<x1052);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1065 = 854353700;
	static int16_t x1066 = INT16_MAX;
	static int64_t x1067 = 513251259LL;
	uint8_t x1068 = 4U;
	static int32_t t45 = 484588651;

	t45 = ((x1065&(x1066<=x1067))<<x1068);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1089 = INT64_MAX;
	volatile int32_t x1090 = INT32_MIN;
	uint8_t x1091 = 1U;
	static int32_t x1092 = 1;
	static volatile int64_t t46 = 7777355729902792LL;

	t46 = ((x1089&(x1090<=x1091))<<x1092);

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1105 = -20;
	volatile uint32_t x1106 = UINT32_MAX;
	volatile int32_t x1107 = -42;
	volatile int32_t t47 = 6618419;

	t47 = ((x1105&(x1106<=x1107))<<x1108);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1165 = -1;
	uint64_t x1166 = UINT64_MAX;
	volatile int64_t x1167 = INT64_MIN;
	uint32_t x1168 = 0U;
	int32_t t48 = -1;

	t48 = ((x1165&(x1166<=x1167))<<x1168);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1181 = INT64_MIN;
	int32_t x1182 = 5895;
	uint8_t x1184 = 3U;
	int64_t t49 = 257930867325075LL;

	t49 = ((x1181&(x1182<=x1183))<<x1184);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1189 = UINT16_MAX;
	volatile uint16_t x1190 = 371U;
	static int16_t x1191 = 451;
	static volatile int32_t t50 = -10;

	t50 = ((x1189&(x1190<=x1191))<<x1192);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1333 = INT16_MIN;
	static int32_t x1334 = INT32_MIN;
	uint32_t x1336 = 14U;
	volatile int32_t t51 = -847052278;

	t51 = ((x1333&(x1334<=x1335))<<x1336);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x1353 = INT16_MIN;
	static volatile int16_t x1354 = -5;
	int32_t x1355 = INT32_MAX;
	static int8_t x1356 = 10;
	int32_t t52 = -4006672;

	t52 = ((x1353&(x1354<=x1355))<<x1356);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1369 = -1LL;
	uint64_t x1371 = 2202500948146748LLU;
	int8_t x1372 = 0;
	int64_t t53 = -11061018062LL;

	t53 = ((x1369&(x1370<=x1371))<<x1372);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1377 = -1;

	t54 = ((x1377&(x1378<=x1379))<<x1380);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1385 = 3392;
	static volatile uint8_t x1386 = 0U;
	volatile int8_t x1387 = INT8_MIN;
	uint16_t x1388 = 26U;
	int32_t t55 = -1930;

	t55 = ((x1385&(x1386<=x1387))<<x1388);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1393 = INT64_MAX;
	int8_t x1394 = INT8_MAX;
	int8_t x1395 = -1;
	volatile int8_t x1396 = 0;
	static volatile int64_t t56 = 198897LL;

	t56 = ((x1393&(x1394<=x1395))<<x1396);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1473 = -1;
	uint8_t x1474 = 0U;
	volatile int8_t x1475 = 1;
	uint16_t x1476 = 4U;
	volatile int32_t t57 = -662096;

	t57 = ((x1473&(x1474<=x1475))<<x1476);

	if (t57 != 16) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x1481 = UINT16_MAX;
	int32_t x1482 = -11802827;
	int8_t x1483 = INT8_MAX;
	volatile uint8_t x1484 = 0U;
	volatile int32_t t58 = 8802679;

	t58 = ((x1481&(x1482<=x1483))<<x1484);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1517 = INT16_MIN;
	int64_t x1518 = -1LL;
	uint32_t x1519 = 51U;
	uint8_t x1520 = 15U;

	t59 = ((x1517&(x1518<=x1519))<<x1520);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1557 = -1;
	static uint8_t x1559 = 1U;
	uint16_t x1560 = 3U;
	static int32_t t60 = 220531012;

	t60 = ((x1557&(x1558<=x1559))<<x1560);

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1561 = -693818335;
	static volatile int64_t x1563 = -261LL;
	volatile int8_t x1564 = 0;
	int32_t t61 = -127;

	t61 = ((x1561&(x1562<=x1563))<<x1564);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1585 = 201982177;
	int16_t x1586 = -25;
	static uint32_t x1587 = 172U;
	static volatile uint64_t x1588 = 0LLU;
	volatile int32_t t62 = -1345;

	t62 = ((x1585&(x1586<=x1587))<<x1588);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x1613 = INT8_MIN;
	int32_t x1614 = INT32_MIN;
	int16_t x1615 = INT16_MAX;
	int16_t x1616 = 2;
	volatile int32_t t63 = 717296079;

	t63 = ((x1613&(x1614<=x1615))<<x1616);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1654 = 2134793077U;
	uint8_t x1655 = 6U;
	int32_t t64 = 11850;

	t64 = ((x1653&(x1654<=x1655))<<x1656);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1657 = 493493967510LLU;
	static uint32_t x1658 = 725166U;
	static int32_t x1660 = 0;
	static uint64_t t65 = 23312LLU;

	t65 = ((x1657&(x1658<=x1659))<<x1660);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x1661 = UINT64_MAX;
	int8_t x1662 = -51;
	volatile int64_t x1663 = INT64_MIN;
	uint16_t x1664 = 21U;
	uint64_t t66 = 1989048624957559LLU;

	t66 = ((x1661&(x1662<=x1663))<<x1664);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1727 = UINT16_MAX;
	uint8_t x1728 = 24U;
	volatile int32_t t67 = -4176608;

	t67 = ((x1725&(x1726<=x1727))<<x1728);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x1787 = INT16_MIN;
	static int8_t x1788 = 2;

	t68 = ((x1785&(x1786<=x1787))<<x1788);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x1870 = INT16_MIN;
	uint32_t x1871 = UINT32_MAX;
	volatile uint32_t x1872 = 0U;
	volatile uint32_t t69 = 7U;

	t69 = ((x1869&(x1870<=x1871))<<x1872);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x1895 = 33U;
	uint16_t x1896 = 1U;
	volatile uint64_t t70 = 1726228LLU;

	t70 = ((x1893&(x1894<=x1895))<<x1896);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1957 = 31806U;
	int32_t x1958 = INT32_MIN;
	volatile int8_t x1959 = 3;
	int8_t x1960 = 9;
	static int32_t t71 = -273178;

	t71 = ((x1957&(x1958<=x1959))<<x1960);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x1985 = 5254567U;
	int32_t x1986 = -10337;
	int8_t x1987 = INT8_MIN;
	uint8_t x1988 = 0U;
	uint32_t t72 = 707865908U;

	t72 = ((x1985&(x1986<=x1987))<<x1988);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2001 = INT64_MIN;
	static uint32_t x2002 = 98777U;
	int32_t x2003 = -1;
	uint16_t x2004 = 19U;
	int64_t t73 = 73LL;

	t73 = ((x2001&(x2002<=x2003))<<x2004);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2009 = 8156U;
	uint32_t x2011 = 476352U;
	static int32_t t74 = 0;

	t74 = ((x2009&(x2010<=x2011))<<x2012);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x2149 = 1LL;
	static volatile int16_t x2150 = INT16_MAX;
	uint8_t x2151 = 39U;
	uint8_t x2152 = 3U;
	int64_t t75 = 241181057946976LL;

	t75 = ((x2149&(x2150<=x2151))<<x2152);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x2201 = 28573091586606079LLU;
	int32_t x2202 = 510555332;
	int8_t x2203 = INT8_MIN;
	int8_t x2204 = 3;
	static volatile uint64_t t76 = 164LLU;

	t76 = ((x2201&(x2202<=x2203))<<x2204);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x2213 = 10457U;
	uint16_t x2214 = UINT16_MAX;
	static int16_t x2216 = 0;
	int32_t t77 = 89817;

	t77 = ((x2213&(x2214<=x2215))<<x2216);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2241 = 168U;
	int32_t x2242 = INT32_MAX;
	uint32_t x2243 = 83834U;
	volatile uint32_t t78 = 3U;

	t78 = ((x2241&(x2242<=x2243))<<x2244);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2269 = INT64_MIN;
	int64_t x2270 = -532047112792350LL;
	static int32_t x2271 = INT32_MIN;
	int8_t x2272 = 7;
	int64_t t79 = -29925214LL;

	t79 = ((x2269&(x2270<=x2271))<<x2272);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2289 = 12202582595LLU;
	static int16_t x2290 = -441;
	volatile int64_t x2291 = -1LL;
	uint8_t x2292 = 0U;
	uint64_t t80 = 3938406LLU;

	t80 = ((x2289&(x2290<=x2291))<<x2292);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2301 = UINT16_MAX;
	int16_t x2302 = INT16_MIN;
	volatile uint8_t x2304 = 7U;
	int32_t t81 = 1225;

	t81 = ((x2301&(x2302<=x2303))<<x2304);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2350 = INT64_MAX;
	static int32_t x2352 = 0;
	static volatile int64_t t82 = 473633105123232LL;

	t82 = ((x2349&(x2350<=x2351))<<x2352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x2357 = INT64_MIN;
	uint32_t x2358 = 11335U;
	volatile int8_t x2359 = -1;
	volatile uint8_t x2360 = 7U;
	volatile int64_t t83 = 15330874683LL;

	t83 = ((x2357&(x2358<=x2359))<<x2360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2401 = INT16_MIN;
	int8_t x2402 = -1;
	static uint8_t x2403 = 118U;
	uint8_t x2404 = 1U;
	int32_t t84 = 1;

	t84 = ((x2401&(x2402<=x2403))<<x2404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2429 = UINT32_MAX;
	uint64_t x2430 = 45481410867LLU;
	volatile uint16_t x2431 = 22433U;
	uint16_t x2432 = 3U;
	volatile uint32_t t85 = 7882956U;

	t85 = ((x2429&(x2430<=x2431))<<x2432);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2433 = INT32_MAX;
	int8_t x2434 = INT8_MIN;
	int64_t x2435 = -138508138447LL;
	uint8_t x2436 = 9U;

	t86 = ((x2433&(x2434<=x2435))<<x2436);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2441 = UINT16_MAX;
	int16_t x2442 = INT16_MIN;
	volatile uint8_t x2444 = 7U;

	t87 = ((x2441&(x2442<=x2443))<<x2444);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2501 = -42;
	int16_t x2502 = 1;
	uint64_t x2503 = 131404484LLU;
	static int32_t t88 = -25032191;

	t88 = ((x2501&(x2502<=x2503))<<x2504);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x2589 = 1718U;
	static volatile int8_t x2591 = INT8_MAX;
	uint16_t x2592 = 23U;
	int32_t t89 = 624159;

	t89 = ((x2589&(x2590<=x2591))<<x2592);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2618 = 337299999867301772LLU;
	volatile int32_t x2619 = INT32_MAX;
	int32_t t90 = -518790955;

	t90 = ((x2617&(x2618<=x2619))<<x2620);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2641 = INT32_MIN;
	uint8_t x2642 = UINT8_MAX;
	volatile int32_t x2643 = -1;
	static uint8_t x2644 = 2U;

	t91 = ((x2641&(x2642<=x2643))<<x2644);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x2706 = -1;

	t92 = ((x2705&(x2706<=x2707))<<x2708);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x2709 = -1;
	int8_t x2710 = INT8_MIN;
	volatile int32_t x2711 = INT32_MIN;

	t93 = ((x2709&(x2710<=x2711))<<x2712);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x2721 = -1;
	static int16_t x2723 = INT16_MIN;
	uint8_t x2724 = 1U;
	volatile int32_t t94 = -7164274;

	t94 = ((x2721&(x2722<=x2723))<<x2724);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x2742 = INT8_MIN;
	volatile uint64_t x2743 = UINT64_MAX;
	uint16_t x2744 = 6U;
	int32_t t95 = 140988;

	t95 = ((x2741&(x2742<=x2743))<<x2744);

	if (t95 != 64) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2769 = 68LLU;
	uint8_t x2770 = UINT8_MAX;
	volatile int32_t x2771 = -192405514;
	int16_t x2772 = 29;

	t96 = ((x2769&(x2770<=x2771))<<x2772);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2885 = INT16_MAX;
	int8_t x2886 = INT8_MIN;
	static uint32_t x2887 = 3U;
	int32_t t97 = 7762;

	t97 = ((x2885&(x2886<=x2887))<<x2888);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2889 = -497791469360LL;
	int32_t x2890 = INT32_MIN;
	int32_t x2891 = INT32_MIN;
	int16_t x2892 = 0;

	t98 = ((x2889&(x2890<=x2891))<<x2892);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x2905 = -1LL;
	uint64_t x2906 = UINT64_MAX;
	uint8_t x2907 = 24U;
	int8_t x2908 = 0;
	volatile int64_t t99 = -211032786186LL;

	t99 = ((x2905&(x2906<=x2907))<<x2908);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

