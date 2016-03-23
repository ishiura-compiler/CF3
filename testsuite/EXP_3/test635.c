
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int16_t x15 = 1;
int16_t x16 = -1;
uint8_t x30 = 3U;
uint64_t x31 = UINT64_MAX;
int8_t x36 = INT8_MIN;
uint64_t x41 = UINT64_MAX;
int8_t x43 = 6;
uint64_t t4 = 148LLU;
int32_t x48 = -1;
static uint16_t x55 = 225U;
static int64_t x56 = -1LL;
uint8_t x70 = 31U;
uint8_t x80 = UINT8_MAX;
volatile int32_t x85 = INT32_MIN;
uint8_t x92 = 20U;
int16_t x105 = -4;
volatile int16_t x137 = INT16_MIN;
static int16_t x142 = INT16_MIN;
uint32_t x143 = UINT32_MAX;
uint16_t x144 = 4U;
uint32_t t17 = 5704U;
int64_t x145 = INT64_MIN;
static int64_t x146 = INT64_MAX;
int16_t x148 = INT16_MIN;
uint16_t x165 = 3U;
uint8_t x170 = UINT8_MAX;
volatile int8_t x171 = INT8_MAX;
uint32_t x188 = 5U;
uint8_t x197 = UINT8_MAX;
static int64_t x230 = INT64_MAX;
uint32_t x231 = UINT32_MAX;
volatile uint16_t x237 = 7374U;
static uint32_t x245 = UINT32_MAX;
volatile int16_t x251 = INT16_MIN;
int64_t t28 = 380026617026905328LL;
volatile int8_t x263 = INT8_MAX;
int8_t x264 = -1;
static uint16_t x269 = UINT16_MAX;
uint64_t t30 = 17726700743LLU;
volatile int32_t t31 = 0;
int16_t x295 = 229;
int32_t t33 = -8139;
static int64_t x311 = 2LL;
static volatile int64_t t35 = -633592410LL;
uint16_t x324 = 5U;
static volatile int64_t t36 = -124LL;
int32_t x334 = INT32_MAX;
static int64_t x343 = INT64_MIN;
uint32_t x360 = 134U;
static int64_t x382 = INT64_MIN;
volatile int32_t x383 = -27038;
int64_t t42 = -177378929LL;
int16_t x390 = INT16_MIN;
int32_t x408 = INT32_MIN;
volatile int8_t x455 = INT8_MIN;
static volatile uint64_t t46 = 426974LLU;
uint32_t x505 = UINT32_MAX;
int32_t x527 = -1;
int32_t x546 = INT32_MIN;
volatile uint64_t x547 = 224512006629718960LLU;
uint16_t x554 = UINT16_MAX;
static uint64_t t55 = 696751LLU;
int64_t x566 = 204350199661LL;
int16_t x567 = INT16_MIN;
int32_t x583 = INT32_MIN;
int32_t x584 = INT32_MIN;
uint64_t t59 = 2LLU;
uint64_t x586 = UINT64_MAX;
uint8_t x602 = 5U;
int32_t x621 = -781;
int16_t x623 = INT16_MIN;
uint16_t x625 = 24191U;
volatile int32_t x630 = INT32_MAX;
uint16_t x637 = 3020U;
uint8_t x645 = 1U;
volatile int8_t x646 = -1;
int64_t x658 = INT64_MIN;
volatile int64_t t70 = 1061097529711LL;
volatile int64_t t71 = 570LL;
int16_t x671 = INT16_MAX;
static int64_t x676 = -1LL;
static int64_t t73 = 11796LL;
volatile int8_t x678 = 11;
int8_t x685 = -3;
int32_t t77 = -1;
volatile uint16_t x737 = UINT16_MAX;
int64_t x743 = 2762122533698463LL;
int16_t x752 = INT16_MAX;
static uint64_t x781 = UINT64_MAX;
volatile uint16_t x782 = 4U;
int64_t x788 = 485296792507333LL;
uint64_t t89 = 812416LLU;
uint32_t x792 = UINT32_MAX;
int64_t x819 = INT64_MAX;
volatile int16_t x837 = 3;
int8_t x838 = INT8_MIN;
static int32_t x843 = INT32_MIN;
int8_t x853 = INT8_MIN;
int32_t x857 = INT32_MIN;
int16_t x860 = -1;
int8_t x899 = INT8_MIN;
volatile int64_t x914 = 21266LL;
volatile uint64_t t105 = 14322795097366021LLU;
volatile int16_t x971 = INT16_MIN;
static volatile int8_t x975 = INT8_MIN;
uint64_t t107 = 273564267263LLU;
int64_t x991 = INT64_MAX;
int32_t x994 = INT32_MIN;
int64_t x995 = -147993327577349851LL;
volatile int64_t t109 = -42054015784388377LL;
int64_t x1018 = 2442639645094718813LL;
int64_t t111 = -4934339LL;
volatile int8_t x1034 = 1;
int8_t x1050 = INT8_MIN;
volatile int16_t x1051 = INT16_MIN;
static volatile int16_t x1061 = -1;
int32_t t117 = 66713;
volatile int64_t t118 = 17058897859381316LL;
uint32_t t119 = 50356U;
uint16_t x1087 = UINT16_MAX;
static int32_t x1101 = INT32_MIN;
volatile uint16_t x1113 = 1U;
int32_t x1121 = INT32_MAX;
uint32_t x1123 = UINT32_MAX;
int64_t t127 = 67469899860079257LL;
int8_t x1152 = INT8_MIN;
static volatile int8_t x1157 = -16;
volatile int8_t x1158 = INT8_MAX;
int16_t x1166 = INT16_MIN;
volatile uint64_t t131 = 419375640677LLU;
int64_t x1171 = -1LL;
static uint64_t t132 = 5419222565LLU;
static int64_t x1179 = INT64_MAX;
volatile int64_t t133 = 1573LL;
int8_t x1181 = INT8_MAX;
int8_t x1183 = -11;
static volatile uint64_t t135 = 215223LLU;
int64_t x1201 = INT64_MIN;
int16_t x1204 = INT16_MAX;
static uint16_t x1210 = UINT16_MAX;
uint64_t x1211 = UINT64_MAX;
int8_t x1212 = INT8_MIN;
static uint8_t x1216 = 2U;
static int8_t x1229 = INT8_MIN;
uint64_t x1238 = UINT64_MAX;
static int32_t x1241 = INT32_MIN;
int32_t x1246 = 1;
volatile int32_t x1248 = INT32_MIN;
uint64_t x1250 = 3LLU;
int64_t x1255 = -49611291077LL;
uint32_t x1257 = 3889U;
uint16_t x1258 = UINT16_MAX;
volatile int32_t x1261 = INT32_MIN;
volatile int32_t t146 = -315409;
int8_t x1265 = -1;
volatile int32_t t148 = -420482;
int64_t x1289 = INT64_MIN;
uint8_t x1320 = UINT8_MAX;
int8_t x1341 = 37;
volatile int64_t t153 = 0LL;
int32_t t156 = -651;
int32_t x1410 = -1;
static volatile int64_t x1423 = 1804LL;
static int32_t x1427 = INT32_MAX;
uint8_t x1428 = 48U;
int64_t x1429 = -1LL;
uint8_t x1445 = 3U;
volatile int8_t x1503 = INT8_MIN;
int8_t x1505 = -1;
int8_t x1517 = INT8_MAX;
int16_t x1541 = 4;
static volatile int64_t x1543 = 12818LL;
static uint32_t x1553 = UINT32_MAX;
int32_t x1556 = 13;
int64_t x1571 = INT64_MIN;
static int32_t x1588 = 5051;
volatile int64_t x1597 = INT64_MAX;
uint32_t x1621 = UINT32_MAX;
int64_t x1637 = -1LL;
uint64_t x1639 = 52352LLU;
volatile int8_t x1645 = 1;
volatile int64_t x1648 = -1LL;
volatile int8_t x1649 = INT8_MIN;
static uint8_t x1650 = UINT8_MAX;
int32_t x1663 = INT32_MIN;
int32_t t185 = 205424906;
uint16_t x1684 = 16U;
int64_t t187 = -122287LL;
int64_t x1691 = -443133508380689394LL;
uint16_t x1697 = 19926U;
uint16_t x1709 = 256U;
int32_t x1712 = -1;
uint8_t x1715 = 17U;
uint16_t x1716 = 5U;
volatile int64_t t194 = -1286LL;
int16_t x1750 = -3;
static int16_t x1752 = -1;
int8_t x1756 = -1;
int32_t t196 = -53689;
int32_t x1774 = 2554355;
volatile int32_t x1775 = INT32_MIN;
volatile int8_t x1776 = INT8_MAX;
int64_t x1783 = INT64_MIN;


void f0(void) {
    	static volatile uint32_t x1 = 53126915U;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 23866241U;
	int64_t t0 = 787843LL;

    t0 = ((x1/x2)%(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MAX;
	int32_t t1 = -7;

    t1 = ((x13/x14)%(x15/x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x29 = 1651455U;
	int32_t x32 = -1;
	uint64_t t2 = 14520837483171091LLU;

    t2 = ((x29/x30)%(x31/x32));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x33 = 189U;
	volatile uint8_t x34 = UINT8_MAX;
	uint32_t x35 = UINT32_MAX;
	volatile uint32_t t3 = 6121471U;

    t3 = ((x33/x34)%(x35/x36));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x42 = 1U;
	int32_t x44 = -1;

    t4 = ((x41/x42)%(x43/x44));

    if (t4 != 5LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x45 = UINT8_MAX;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	static uint64_t t5 = 3667LLU;

    t5 = ((x45/x46)%(x47/x48));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x49 = 3LLU;
	int32_t x50 = -1;
	int64_t x51 = -56557963203LL;
	int8_t x52 = -1;
	uint64_t t6 = 1174200767285306LLU;

    t6 = ((x49/x50)%(x51/x52));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x53 = 6U;
	int16_t x54 = INT16_MIN;
	volatile int64_t t7 = -110631376271LL;

    t7 = ((x53/x54)%(x55/x56));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 44U;
	uint32_t t8 = 2U;

    t8 = ((x57/x58)%(x59/x60));

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x65 = INT32_MAX;
	int32_t x66 = INT32_MIN;
	int16_t x67 = -9;
	uint32_t x68 = 744647936U;
	volatile uint32_t t9 = 76257U;

    t9 = ((x65/x66)%(x67/x68));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x69 = 0;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t10 = 7165387LLU;

    t10 = ((x69/x70)%(x71/x72));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x77 = 942;
	static int8_t x78 = INT8_MIN;
	int64_t x79 = 1579892LL;
	volatile int64_t t11 = 81849148570789LL;

    t11 = ((x77/x78)%(x79/x80));

    if (t11 != -7LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x86 = 104U;
	volatile int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t12 = -2;

    t12 = ((x85/x86)%(x87/x88));

    if (t12 != -5041) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x89 = INT64_MIN;
	static int8_t x90 = INT8_MAX;
	uint8_t x91 = UINT8_MAX;
	int64_t t13 = 213092210LL;

    t13 = ((x89/x90)%(x91/x92));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MAX;
	uint16_t x108 = 8U;
	volatile int32_t t14 = -117370668;

    t14 = ((x105/x106)%(x107/x108));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MAX;
	uint16_t x111 = 10668U;
	volatile int64_t x112 = -1LL;
	int64_t t15 = -4353719375802294150LL;

    t15 = ((x109/x110)%(x111/x112));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x138 = 1U;
	uint16_t x139 = 122U;
	int16_t x140 = -1;
	volatile int32_t t16 = -15397217;

    t16 = ((x137/x138)%(x139/x140));

    if (t16 != -72) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x141 = INT32_MIN;

    t17 = ((x141/x142)%(x143/x144));

    if (t17 != 65536U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x147 = INT32_MIN;
	static int64_t t18 = 148466097578755LL;

    t18 = ((x145/x146)%(x147/x148));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x166 = -1;
	int16_t x167 = -1;
	uint64_t x168 = 4639772828786LLU;
	volatile uint64_t t19 = 13737103LLU;

    t19 = ((x165/x166)%(x167/x168));

    if (t19 != 509305LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x169 = 723U;
	int16_t x172 = -1;
	volatile int32_t t20 = 200782942;

    t20 = ((x169/x170)%(x171/x172));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x185 = -1;
	uint8_t x186 = 8U;
	int32_t x187 = 63;
	volatile uint32_t t21 = 32U;

    t21 = ((x185/x186)%(x187/x188));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x198 = INT32_MAX;
	static int64_t x199 = 831062LL;
	volatile int8_t x200 = -1;
	static volatile int64_t t22 = -1089847867253122418LL;

    t22 = ((x197/x198)%(x199/x200));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x205 = INT16_MAX;
	uint64_t x206 = UINT64_MAX;
	static uint64_t x207 = UINT64_MAX;
	volatile uint16_t x208 = 923U;
	static volatile uint64_t t23 = 109066368978332054LLU;

    t23 = ((x205/x206)%(x207/x208));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x229 = 0;
	volatile uint8_t x232 = 21U;
	volatile int64_t t24 = 647887515134220LL;

    t24 = ((x229/x230)%(x231/x232));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x238 = 20;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 250722LLU;
	volatile uint64_t t25 = 982LLU;

    t25 = ((x237/x238)%(x239/x240));

    if (t25 != 368LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x246 = 7887U;
	static int32_t x247 = INT32_MAX;
	uint8_t x248 = 70U;
	volatile uint32_t t26 = 61U;

    t26 = ((x245/x246)%(x247/x248));

    if (t26 != 544562U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	int8_t x252 = -1;
	static volatile int64_t t27 = -18663713LL;

    t27 = ((x249/x250)%(x251/x252));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x257 = -1;
	int64_t x258 = -2622233262294687599LL;
	static int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MAX;

    t28 = ((x257/x258)%(x259/x260));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	volatile uint64_t t29 = 43490623053LLU;

    t29 = ((x261/x262)%(x263/x264));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x270 = INT32_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	static volatile int16_t x272 = INT16_MIN;

    t30 = ((x269/x270)%(x271/x272));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x273 = -1;
	static uint8_t x274 = 3U;
	int16_t x275 = INT16_MAX;
	int8_t x276 = 3;

    t31 = ((x273/x274)%(x275/x276));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int32_t x296 = -1;
	volatile int32_t t32 = 59040;

    t32 = ((x293/x294)%(x295/x296));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x301 = -17;
	uint16_t x302 = 91U;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;

    t33 = ((x301/x302)%(x303/x304));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x309 = 1585924480583003LLU;
	uint8_t x310 = 3U;
	int16_t x312 = -1;
	uint64_t t34 = 161928972937494960LLU;

    t34 = ((x309/x310)%(x311/x312));

    if (t34 != 528641493527667LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x313 = UINT8_MAX;
	int32_t x314 = -1;
	int64_t x315 = 4323146077173603552LL;
	int64_t x316 = 2748580183936587570LL;

    t35 = ((x313/x314)%(x315/x316));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x321 = 984U;
	int32_t x322 = INT32_MAX;
	static int64_t x323 = INT64_MIN;

    t36 = ((x321/x322)%(x323/x324));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;
	int64_t t37 = -39596969772491LL;

    t37 = ((x333/x334)%(x335/x336));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x341 = 1764661LLU;
	static int32_t x342 = INT32_MIN;
	volatile uint8_t x344 = 1U;
	uint64_t t38 = 50610LLU;

    t38 = ((x341/x342)%(x343/x344));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x345 = 206U;
	uint64_t x346 = 22346LLU;
	uint64_t x347 = UINT64_MAX;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t39 = 415432278023715246LLU;

    t39 = ((x345/x346)%(x347/x348));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x357 = -3019857LL;
	int16_t x358 = INT16_MAX;
	uint8_t x359 = UINT8_MAX;
	int64_t t40 = -1794260051LL;

    t40 = ((x357/x358)%(x359/x360));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x361 = -1894;
	static int32_t x362 = INT32_MIN;
	static int16_t x363 = INT16_MIN;
	static uint16_t x364 = 1U;
	volatile int32_t t41 = -8852;

    t41 = ((x361/x362)%(x363/x364));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x381 = INT16_MIN;
	uint8_t x384 = 49U;

    t42 = ((x381/x382)%(x383/x384));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x391 = -332103;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t43 = 57;

    t43 = ((x389/x390)%(x391/x392));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x405 = UINT64_MAX;
	int32_t x406 = INT32_MIN;
	int64_t x407 = 703198267186032818LL;
	uint64_t t44 = 820943145141150LLU;

    t44 = ((x405/x406)%(x407/x408));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x409 = INT8_MIN;
	uint8_t x410 = 9U;
	volatile int8_t x411 = 3;
	static int8_t x412 = 1;
	volatile int32_t t45 = 7;

    t45 = ((x409/x410)%(x411/x412));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x453 = INT32_MIN;
	static uint32_t x454 = UINT32_MAX;
	uint64_t x456 = 1LLU;

    t46 = ((x453/x454)%(x455/x456));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x457 = 7396699095770LLU;
	static int8_t x458 = INT8_MIN;
	uint16_t x459 = UINT16_MAX;
	int8_t x460 = -1;
	static uint64_t t47 = 120854682LLU;

    t47 = ((x457/x458)%(x459/x460));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x473 = -1LL;
	static int64_t x474 = INT64_MIN;
	int16_t x475 = -1;
	int8_t x476 = 1;
	static volatile int64_t t48 = -121567832LL;

    t48 = ((x473/x474)%(x475/x476));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x477 = -1;
	static int32_t x478 = INT32_MIN;
	static volatile int16_t x479 = -13;
	int64_t x480 = -1LL;
	volatile int64_t t49 = -13454014879LL;

    t49 = ((x477/x478)%(x479/x480));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x506 = 1935042699U;
	int16_t x507 = INT16_MIN;
	uint32_t x508 = 46542U;
	uint32_t t50 = 115598U;

    t50 = ((x505/x506)%(x507/x508));

    if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x525 = -1537;
	volatile int32_t x526 = INT32_MAX;
	static volatile uint64_t x528 = 334615LLU;
	volatile uint64_t t51 = 2399LLU;

    t51 = ((x525/x526)%(x527/x528));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x533 = -35;
	int32_t x534 = INT32_MAX;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 3275329285422799LLU;
	uint64_t t52 = 2207LLU;

    t52 = ((x533/x534)%(x535/x536));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x545 = INT8_MIN;
	int8_t x548 = INT8_MAX;
	uint64_t t53 = 197130188637381LLU;

    t53 = ((x545/x546)%(x547/x548));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x553 = UINT64_MAX;
	static volatile int64_t x555 = -6773211091537LL;
	static int8_t x556 = -1;
	static uint64_t t54 = 180570831304955900LLU;

    t54 = ((x553/x554)%(x555/x556));

    if (t54 != 3777616990472LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x557 = -6;
	static volatile int8_t x558 = 52;
	uint64_t x559 = 10813370216225LLU;
	int8_t x560 = INT8_MAX;

    t55 = ((x557/x558)%(x559/x560));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x561 = UINT16_MAX;
	uint64_t x562 = 21381539449338LLU;
	int64_t x563 = -28994321486507LL;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t56 = 123413748070096503LLU;

    t56 = ((x561/x562)%(x563/x564));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x565 = 68618545164LL;
	static int64_t x568 = -1LL;
	volatile int64_t t57 = 754282LL;

    t57 = ((x565/x566)%(x567/x568));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x573 = INT64_MIN;
	int8_t x574 = INT8_MIN;
	int8_t x575 = INT8_MIN;
	int32_t x576 = -1;
	volatile int64_t t58 = -74751992781874LL;

    t58 = ((x573/x574)%(x575/x576));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	int16_t x582 = 798;

    t59 = ((x581/x582)%(x583/x584));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x585 = 50U;
	int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MAX;
	volatile uint64_t t60 = 55299438411266429LLU;

    t60 = ((x585/x586)%(x587/x588));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x601 = UINT32_MAX;
	static int16_t x603 = INT16_MAX;
	int32_t x604 = -501;
	static volatile uint32_t t61 = 37231U;

    t61 = ((x601/x602)%(x603/x604));

    if (t61 != 858993459U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x622 = INT16_MIN;
	uint16_t x624 = 1U;
	static volatile int32_t t62 = -3858091;

    t62 = ((x621/x622)%(x623/x624));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x626 = INT8_MAX;
	volatile uint8_t x627 = UINT8_MAX;
	int8_t x628 = 52;
	volatile int32_t t63 = 2342639;

    t63 = ((x625/x626)%(x627/x628));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x629 = 0LLU;
	uint32_t x631 = UINT32_MAX;
	static volatile int32_t x632 = -1;
	volatile uint64_t t64 = 20410728LLU;

    t64 = ((x629/x630)%(x631/x632));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x633 = 1088U;
	volatile int32_t x634 = -3660;
	int8_t x635 = INT8_MIN;
	uint32_t x636 = 5577611U;
	uint32_t t65 = 26U;

    t65 = ((x633/x634)%(x635/x636));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x638 = 20257649U;
	int32_t x639 = -5360944;
	uint8_t x640 = 1U;
	uint32_t t66 = 1079535U;

    t66 = ((x637/x638)%(x639/x640));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x641 = -3;
	static volatile int32_t x642 = INT32_MIN;
	int32_t x643 = INT32_MIN;
	static int32_t x644 = 2406;
	volatile int32_t t67 = 7696;

    t67 = ((x641/x642)%(x643/x644));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x647 = 165U;
	int8_t x648 = -28;
	volatile int32_t t68 = 64943297;

    t68 = ((x645/x646)%(x647/x648));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x649 = 30634839695111LL;
	int16_t x650 = INT16_MIN;
	uint64_t x651 = UINT64_MAX;
	int64_t x652 = INT64_MIN;
	volatile uint64_t t69 = 280807298332580052LLU;

    t69 = ((x649/x650)%(x651/x652));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x657 = 3;
	int32_t x659 = -109812006;
	int8_t x660 = INT8_MIN;

    t70 = ((x657/x658)%(x659/x660));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x661 = INT64_MIN;
	volatile int64_t x662 = INT64_MIN;
	int16_t x663 = INT16_MIN;
	int16_t x664 = 3;

    t71 = ((x661/x662)%(x663/x664));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x669 = 188U;
	int64_t x670 = 74LL;
	uint8_t x672 = 49U;
	volatile int64_t t72 = 110LL;

    t72 = ((x669/x670)%(x671/x672));

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = INT16_MAX;
	static int32_t x675 = -1;

    t73 = ((x673/x674)%(x675/x676));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x677 = INT32_MIN;
	volatile uint32_t x679 = 25U;
	uint8_t x680 = 3U;
	static uint32_t t74 = 416U;

    t74 = ((x677/x678)%(x679/x680));

    if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x681 = 3U;
	volatile int64_t x682 = -1LL;
	int32_t x683 = INT32_MAX;
	static int8_t x684 = INT8_MIN;
	volatile int64_t t75 = -1437841848LL;

    t75 = ((x681/x682)%(x683/x684));

    if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x686 = INT16_MAX;
	int32_t x687 = -13277;
	uint8_t x688 = UINT8_MAX;
	static volatile int32_t t76 = 5;

    t76 = ((x685/x686)%(x687/x688));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x693 = INT16_MIN;
	int32_t x694 = -1;
	uint16_t x695 = UINT16_MAX;
	int8_t x696 = INT8_MIN;

    t77 = ((x693/x694)%(x695/x696));

    if (t77 != 64) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x697 = INT16_MAX;
	int8_t x698 = -9;
	int64_t x699 = INT64_MIN;
	int8_t x700 = INT8_MIN;
	volatile int64_t t78 = -89994720549LL;

    t78 = ((x697/x698)%(x699/x700));

    if (t78 != -3640LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x705 = -1;
	int32_t x706 = INT32_MIN;
	static int8_t x707 = -1;
	uint64_t x708 = 48LLU;
	static volatile uint64_t t79 = 25LLU;

    t79 = ((x705/x706)%(x707/x708));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	int32_t x714 = INT32_MIN;
	int16_t x715 = INT16_MIN;
	uint64_t x716 = 665LLU;
	volatile uint64_t t80 = 1655237849426LLU;

    t80 = ((x713/x714)%(x715/x716));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x717 = INT64_MIN;
	int64_t x718 = INT64_MIN;
	static uint32_t x719 = UINT32_MAX;
	int8_t x720 = INT8_MIN;
	static volatile int64_t t81 = -216208532589LL;

    t81 = ((x717/x718)%(x719/x720));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x738 = 15U;
	int16_t x739 = INT16_MIN;
	static uint16_t x740 = 28087U;
	volatile int32_t t82 = -2;

    t82 = ((x737/x738)%(x739/x740));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x741 = INT8_MIN;
	static int32_t x742 = INT32_MIN;
	static volatile int8_t x744 = INT8_MAX;
	int64_t t83 = 324LL;

    t83 = ((x741/x742)%(x743/x744));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x749 = -1;
	uint8_t x750 = UINT8_MAX;
	int16_t x751 = INT16_MAX;
	static volatile int32_t t84 = 535409758;

    t84 = ((x749/x750)%(x751/x752));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	static uint8_t x762 = 30U;
	uint64_t x763 = UINT64_MAX;
	int32_t x764 = INT32_MIN;
	uint64_t t85 = 7LLU;

    t85 = ((x761/x762)%(x763/x764));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x765 = 0U;
	static volatile uint16_t x766 = 169U;
	volatile int32_t x767 = INT32_MIN;
	int16_t x768 = -2706;
	static volatile int32_t t86 = 571;

    t86 = ((x765/x766)%(x767/x768));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x777 = UINT16_MAX;
	static int8_t x778 = 13;
	int64_t x779 = INT64_MIN;
	volatile int64_t x780 = INT64_MAX;
	volatile int64_t t87 = -2736927725LL;

    t87 = ((x777/x778)%(x779/x780));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x783 = -351814777566444LL;
	uint64_t x784 = 17628965972969504LLU;
	volatile uint64_t t88 = 9927LLU;

    t88 = ((x781/x782)%(x783/x784));

    if (t88 != 165LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x785 = 364130984205756LLU;
	int32_t x786 = -420;
	uint64_t x787 = 120308279678959375LLU;

    t89 = ((x785/x786)%(x787/x788));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x789 = INT32_MAX;
	volatile int8_t x790 = INT8_MAX;
	int16_t x791 = -1;
	volatile uint32_t t90 = 1608U;

    t90 = ((x789/x790)%(x791/x792));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x813 = -1618;
	uint16_t x814 = UINT16_MAX;
	static int32_t x815 = -1;
	uint64_t x816 = UINT64_MAX;
	static uint64_t t91 = 62966953381LLU;

    t91 = ((x813/x814)%(x815/x816));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x817 = UINT32_MAX;
	volatile uint64_t x818 = UINT64_MAX;
	int64_t x820 = INT64_MAX;
	uint64_t t92 = 416260LLU;

    t92 = ((x817/x818)%(x819/x820));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x839 = INT16_MIN;
	int8_t x840 = 33;
	int32_t t93 = -104694;

    t93 = ((x837/x838)%(x839/x840));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x841 = UINT64_MAX;
	static int8_t x842 = INT8_MIN;
	int8_t x844 = INT8_MIN;
	uint64_t t94 = 4919LLU;

    t94 = ((x841/x842)%(x843/x844));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x845 = 268U;
	volatile int16_t x846 = INT16_MAX;
	int16_t x847 = INT16_MIN;
	static volatile uint64_t x848 = 104484066411LLU;
	volatile uint64_t t95 = 0LLU;

    t95 = ((x845/x846)%(x847/x848));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x849 = 515U;
	volatile uint64_t x850 = UINT64_MAX;
	uint32_t x851 = UINT32_MAX;
	int64_t x852 = 17268LL;
	volatile uint64_t t96 = 7925479LLU;

    t96 = ((x849/x850)%(x851/x852));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x854 = 27;
	int32_t x855 = INT32_MAX;
	uint32_t x856 = 202302U;
	static uint32_t t97 = 1U;

    t97 = ((x853/x854)%(x855/x856));

    if (t97 != 297U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x858 = 140550787012030005LLU;
	static int64_t x859 = 3255022569402991088LL;
	uint64_t t98 = 5737542908657987LLU;

    t98 = ((x857/x858)%(x859/x860));

    if (t98 != 131LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x861 = UINT16_MAX;
	uint64_t x862 = 214586108485374LLU;
	int32_t x863 = INT32_MIN;
	int16_t x864 = INT16_MIN;
	uint64_t t99 = 768209866304723LLU;

    t99 = ((x861/x862)%(x863/x864));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x885 = INT32_MAX;
	uint8_t x886 = 14U;
	static uint16_t x887 = 3934U;
	int64_t x888 = -1LL;
	int64_t t100 = 3LL;

    t100 = ((x885/x886)%(x887/x888));

    if (t100 != 1095LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x893 = UINT8_MAX;
	uint64_t x894 = 252199LLU;
	volatile uint8_t x895 = UINT8_MAX;
	int8_t x896 = INT8_MIN;
	volatile uint64_t t101 = 7093115LLU;

    t101 = ((x893/x894)%(x895/x896));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x897 = INT32_MIN;
	int8_t x898 = INT8_MIN;
	static volatile int8_t x900 = -5;
	static int32_t t102 = 1175000;

    t102 = ((x897/x898)%(x899/x900));

    if (t102 != 16) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x905 = INT32_MIN;
	int64_t x906 = -21264612276203LL;
	int32_t x907 = -10;
	uint64_t x908 = 150256728LLU;
	uint64_t t103 = 2867152805683271436LLU;

    t103 = ((x905/x906)%(x907/x908));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x913 = 303LLU;
	static int32_t x915 = INT32_MAX;
	int64_t x916 = -1LL;
	uint64_t t104 = 101187LLU;

    t104 = ((x913/x914)%(x915/x916));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x925 = INT8_MIN;
	int64_t x926 = 1894498591135251LL;
	uint64_t x927 = 270221001931019234LLU;
	uint8_t x928 = UINT8_MAX;

    t105 = ((x925/x926)%(x927/x928));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x969 = -40;
	int8_t x970 = -1;
	volatile uint32_t x972 = 7002U;
	volatile uint32_t t106 = 1563U;

    t106 = ((x969/x970)%(x971/x972));

    if (t106 != 40U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x973 = 3734384414612LLU;
	int64_t x974 = INT64_MAX;
	volatile int8_t x976 = INT8_MAX;

    t107 = ((x973/x974)%(x975/x976));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x989 = INT16_MIN;
	int8_t x990 = INT8_MIN;
	int16_t x992 = 1;
	int64_t t108 = -1837156832LL;

    t108 = ((x989/x990)%(x991/x992));

    if (t108 != 256LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x993 = INT16_MIN;
	static volatile int32_t x996 = INT32_MAX;

    t109 = ((x993/x994)%(x995/x996));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x1005 = 12633768U;
	volatile uint64_t x1006 = 1251403457231LLU;
	int32_t x1007 = -1;
	int32_t x1008 = -1;
	volatile uint64_t t110 = 698194503954LLU;

    t110 = ((x1005/x1006)%(x1007/x1008));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x1017 = 24362219U;
	int16_t x1019 = INT16_MIN;
	uint32_t x1020 = 413U;

    t111 = ((x1017/x1018)%(x1019/x1020));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x1029 = 24924U;
	int8_t x1030 = INT8_MIN;
	int8_t x1031 = INT8_MIN;
	volatile int16_t x1032 = 1;
	int32_t t112 = -21;

    t112 = ((x1029/x1030)%(x1031/x1032));

    if (t112 != -66) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x1033 = INT8_MIN;
	uint64_t x1035 = 271492592693LLU;
	volatile int8_t x1036 = 16;
	static volatile uint64_t t113 = 252413322LLU;

    t113 = ((x1033/x1034)%(x1035/x1036));

    if (t113 != 16649022731LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x1037 = 44U;
	static uint8_t x1038 = 12U;
	uint32_t x1039 = 2305014U;
	volatile uint16_t x1040 = UINT16_MAX;
	static uint32_t t114 = 217688U;

    t114 = ((x1037/x1038)%(x1039/x1040));

    if (t114 != 3U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x1041 = UINT8_MAX;
	int16_t x1042 = 30;
	int32_t x1043 = INT32_MAX;
	static int16_t x1044 = INT16_MIN;
	int32_t t115 = 21;

    t115 = ((x1041/x1042)%(x1043/x1044));

    if (t115 != 8) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x1049 = UINT16_MAX;
	static int8_t x1052 = INT8_MIN;
	static int32_t t116 = 22009341;

    t116 = ((x1049/x1050)%(x1051/x1052));

    if (t116 != -255) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x1062 = -18;
	static int16_t x1063 = INT16_MIN;
	int16_t x1064 = INT16_MIN;

    t117 = ((x1061/x1062)%(x1063/x1064));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x1069 = 10U;
	volatile int64_t x1070 = INT64_MIN;
	uint32_t x1071 = 202U;
	int64_t x1072 = -1LL;

    t118 = ((x1069/x1070)%(x1071/x1072));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x1077 = 53U;
	int16_t x1078 = -1;
	uint32_t x1079 = 562036176U;
	int32_t x1080 = 1;

    t119 = ((x1077/x1078)%(x1079/x1080));

    if (t119 != 360714011U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1081 = -1;
	int32_t x1082 = INT32_MIN;
	int8_t x1083 = -1;
	int64_t x1084 = -1LL;
	static volatile int64_t t120 = 115328LL;

    t120 = ((x1081/x1082)%(x1083/x1084));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x1085 = UINT16_MAX;
	int8_t x1086 = INT8_MAX;
	uint8_t x1088 = 81U;
	volatile int32_t t121 = 56186659;

    t121 = ((x1085/x1086)%(x1087/x1088));

    if (t121 != 516) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x1102 = INT8_MIN;
	int32_t x1103 = -4677;
	static volatile uint64_t x1104 = 1420226060183LLU;
	static uint64_t t122 = 7613272875179125280LLU;

    t122 = ((x1101/x1102)%(x1103/x1104));

    if (t122 != 3788619LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x1114 = -1;
	int8_t x1115 = INT8_MIN;
	int32_t x1116 = -1;
	int32_t t123 = 3;

    t123 = ((x1113/x1114)%(x1115/x1116));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x1122 = UINT16_MAX;
	static int16_t x1124 = -1808;
	static uint32_t t124 = 1717U;

    t124 = ((x1121/x1122)%(x1123/x1124));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x1125 = 5768U;
	volatile uint16_t x1126 = UINT16_MAX;
	int8_t x1127 = -1;
	uint64_t x1128 = 13168846309990LLU;
	uint64_t t125 = 4613LLU;

    t125 = ((x1125/x1126)%(x1127/x1128));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1129 = 3686132276619039957LLU;
	volatile int64_t x1130 = 6272LL;
	static int32_t x1131 = INT32_MIN;
	int64_t x1132 = 28618048LL;
	uint64_t t126 = 138348975671LLU;

    t126 = ((x1129/x1130)%(x1131/x1132));

    if (t126 != 587712416552780LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x1137 = -477LL;
	uint16_t x1138 = UINT16_MAX;
	int32_t x1139 = -562399;
	int16_t x1140 = -5;

    t127 = ((x1137/x1138)%(x1139/x1140));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1141 = UINT64_MAX;
	int8_t x1142 = -17;
	int32_t x1143 = INT32_MIN;
	static int32_t x1144 = INT32_MIN;
	uint64_t t128 = 89158992190LLU;

    t128 = ((x1141/x1142)%(x1143/x1144));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1149 = INT64_MIN;
	volatile uint8_t x1150 = 2U;
	uint16_t x1151 = 2683U;
	int64_t t129 = 77827644LL;

    t129 = ((x1149/x1150)%(x1151/x1152));

    if (t129 != -4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1159 = -19;
	int32_t x1160 = -1;
	int32_t t130 = 402304;

    t130 = ((x1157/x1158)%(x1159/x1160));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x1165 = UINT64_MAX;
	volatile int32_t x1167 = INT32_MIN;
	volatile int16_t x1168 = INT16_MIN;

    t131 = ((x1165/x1166)%(x1167/x1168));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1169 = INT16_MIN;
	int16_t x1170 = -1;
	uint64_t x1172 = 1141354277614423003LLU;

    t132 = ((x1169/x1170)%(x1171/x1172));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x1177 = INT16_MIN;
	uint16_t x1178 = UINT16_MAX;
	int64_t x1180 = -18105847130LL;

    t133 = ((x1177/x1178)%(x1179/x1180));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1182 = 1742058838495852LLU;
	int64_t x1184 = -1LL;
	volatile uint64_t t134 = 554872LLU;

    t134 = ((x1181/x1182)%(x1183/x1184));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x1193 = 4540;
	static uint64_t x1194 = 159288236LLU;
	int32_t x1195 = -1;
	static int16_t x1196 = -1;

    t135 = ((x1193/x1194)%(x1195/x1196));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1202 = UINT16_MAX;
	uint32_t x1203 = UINT32_MAX;
	static volatile int64_t t136 = 2962491719617271LL;

    t136 = ((x1201/x1202)%(x1203/x1204));

    if (t136 != -98304LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1209 = -1LL;
	uint64_t t137 = 912563073335595LLU;

    t137 = ((x1209/x1210)%(x1211/x1212));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1213 = 21;
	int32_t x1214 = INT32_MIN;
	int32_t x1215 = INT32_MIN;
	int32_t t138 = 24869743;

    t138 = ((x1213/x1214)%(x1215/x1216));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x1230 = INT64_MAX;
	uint16_t x1231 = 20280U;
	int8_t x1232 = -1;
	volatile int64_t t139 = 8912855LL;

    t139 = ((x1229/x1230)%(x1231/x1232));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1237 = UINT8_MAX;
	int16_t x1239 = INT16_MIN;
	int16_t x1240 = INT16_MIN;
	volatile uint64_t t140 = 67499LLU;

    t140 = ((x1237/x1238)%(x1239/x1240));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1242 = 1U;
	int32_t x1243 = INT32_MAX;
	int8_t x1244 = INT8_MAX;
	int32_t t141 = 13128;

    t141 = ((x1241/x1242)%(x1243/x1244));

    if (t141 != -8) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x1245 = 1083892U;
	int32_t x1247 = INT32_MIN;
	uint32_t t142 = 1337U;

    t142 = ((x1245/x1246)%(x1247/x1248));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1249 = INT16_MIN;
	int16_t x1251 = -1;
	int64_t x1252 = -1LL;
	uint64_t t143 = 4837196512375615LLU;

    t143 = ((x1249/x1250)%(x1251/x1252));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x1253 = 11U;
	int64_t x1254 = INT64_MIN;
	static int32_t x1256 = 3830;
	volatile int64_t t144 = -257200858144LL;

    t144 = ((x1253/x1254)%(x1255/x1256));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1259 = INT64_MAX;
	uint16_t x1260 = 9U;
	int64_t t145 = 497652731986164876LL;

    t145 = ((x1257/x1258)%(x1259/x1260));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1262 = INT8_MIN;
	int8_t x1263 = INT8_MAX;
	static int8_t x1264 = 37;

    t146 = ((x1261/x1262)%(x1263/x1264));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x1266 = INT64_MIN;
	int32_t x1267 = INT32_MAX;
	volatile uint8_t x1268 = 68U;
	int64_t t147 = -32678LL;

    t147 = ((x1265/x1266)%(x1267/x1268));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x1285 = -31453982;
	int8_t x1286 = 2;
	volatile uint16_t x1287 = UINT16_MAX;
	volatile uint16_t x1288 = UINT16_MAX;

    t148 = ((x1285/x1286)%(x1287/x1288));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1290 = INT8_MIN;
	uint64_t x1291 = UINT64_MAX;
	uint8_t x1292 = 60U;
	static uint64_t t149 = 62LLU;

    t149 = ((x1289/x1290)%(x1291/x1292));

    if (t149 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1293 = 1U;
	uint8_t x1294 = UINT8_MAX;
	volatile int16_t x1295 = INT16_MAX;
	volatile int64_t x1296 = -1LL;
	static volatile int64_t t150 = -10860782244953500LL;

    t150 = ((x1293/x1294)%(x1295/x1296));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1317 = UINT32_MAX;
	int64_t x1318 = 46288291LL;
	int32_t x1319 = INT32_MIN;
	int64_t t151 = 616735325945813859LL;

    t151 = ((x1317/x1318)%(x1319/x1320));

    if (t151 != 92LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x1337 = 699634260U;
	static int16_t x1338 = INT16_MIN;
	volatile int64_t x1339 = INT64_MAX;
	int8_t x1340 = INT8_MIN;
	int64_t t152 = 35389LL;

    t152 = ((x1337/x1338)%(x1339/x1340));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1342 = -4123726555847190LL;
	volatile uint16_t x1343 = 326U;
	uint8_t x1344 = UINT8_MAX;

    t153 = ((x1341/x1342)%(x1343/x1344));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1357 = -1;
	uint16_t x1358 = UINT16_MAX;
	static int16_t x1359 = INT16_MIN;
	int8_t x1360 = INT8_MAX;
	volatile int32_t t154 = -41;

    t154 = ((x1357/x1358)%(x1359/x1360));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1365 = -1;
	volatile uint16_t x1366 = UINT16_MAX;
	int64_t x1367 = INT64_MAX;
	uint32_t x1368 = UINT32_MAX;
	volatile int64_t t155 = -6343109060524LL;

    t155 = ((x1365/x1366)%(x1367/x1368));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1369 = 5U;
	int32_t x1370 = INT32_MIN;
	volatile int32_t x1371 = -25300;
	int8_t x1372 = -1;

    t156 = ((x1369/x1370)%(x1371/x1372));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1377 = 119;
	int32_t x1378 = INT32_MAX;
	uint64_t x1379 = 6057061LLU;
	static volatile uint16_t x1380 = 1U;
	volatile uint64_t t157 = 7893288534849LLU;

    t157 = ((x1377/x1378)%(x1379/x1380));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x1381 = 3U;
	int32_t x1382 = INT32_MAX;
	int16_t x1383 = 1534;
	uint16_t x1384 = 476U;
	int32_t t158 = -226744;

    t158 = ((x1381/x1382)%(x1383/x1384));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x1405 = 24U;
	static int32_t x1406 = INT32_MIN;
	static uint16_t x1407 = UINT16_MAX;
	uint16_t x1408 = UINT16_MAX;
	int32_t t159 = -1104;

    t159 = ((x1405/x1406)%(x1407/x1408));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x1409 = 56U;
	int32_t x1411 = INT32_MIN;
	volatile uint32_t x1412 = 164U;
	volatile uint32_t t160 = 115412690U;

    t160 = ((x1409/x1410)%(x1411/x1412));

    if (t160 != 104U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1413 = INT32_MAX;
	volatile int32_t x1414 = INT32_MIN;
	volatile int32_t x1415 = INT32_MIN;
	uint16_t x1416 = 4U;
	static volatile int32_t t161 = 5622734;

    t161 = ((x1413/x1414)%(x1415/x1416));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1421 = INT8_MAX;
	uint8_t x1422 = 7U;
	uint16_t x1424 = 7U;
	volatile int64_t t162 = -157780LL;

    t162 = ((x1421/x1422)%(x1423/x1424));

    if (t162 != 18LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1425 = 240;
	uint8_t x1426 = UINT8_MAX;
	int32_t t163 = -46;

    t163 = ((x1425/x1426)%(x1427/x1428));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1430 = -116635226;
	int8_t x1431 = -15;
	volatile int8_t x1432 = -1;
	static int64_t t164 = -3508752590245LL;

    t164 = ((x1429/x1430)%(x1431/x1432));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1446 = 197;
	int8_t x1447 = INT8_MIN;
	volatile int8_t x1448 = -1;
	volatile int32_t t165 = -12509812;

    t165 = ((x1445/x1446)%(x1447/x1448));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1469 = 223868751U;
	int8_t x1470 = -1;
	static int64_t x1471 = INT64_MIN;
	int32_t x1472 = INT32_MAX;
	int64_t t166 = 112055339923200LL;

    t166 = ((x1469/x1470)%(x1471/x1472));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1497 = UINT64_MAX;
	static volatile int32_t x1498 = 1865188;
	int32_t x1499 = -3512;
	volatile int32_t x1500 = -1;
	volatile uint64_t t167 = 2131704249LLU;

    t167 = ((x1497/x1498)%(x1499/x1500));

    if (t167 != 3458LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1501 = 2849520LL;
	static int16_t x1502 = 6436;
	static uint64_t x1504 = 7738578837862256LLU;
	static volatile uint64_t t168 = 12154655153595LLU;

    t168 = ((x1501/x1502)%(x1503/x1504));

    if (t168 != 442LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1506 = -5;
	uint64_t x1507 = 643095678236231789LLU;
	int32_t x1508 = 37361;
	volatile uint64_t t169 = 2209LLU;

    t169 = ((x1505/x1506)%(x1507/x1508));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1518 = UINT16_MAX;
	uint32_t x1519 = UINT32_MAX;
	int32_t x1520 = -1;
	uint32_t t170 = 709727U;

    t170 = ((x1517/x1518)%(x1519/x1520));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x1525 = UINT64_MAX;
	static volatile int64_t x1526 = INT64_MAX;
	int8_t x1527 = -1;
	uint64_t x1528 = 444749542565LLU;
	static volatile uint64_t t171 = 70316LLU;

    t171 = ((x1525/x1526)%(x1527/x1528));

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1542 = 116U;
	int8_t x1544 = INT8_MAX;
	volatile int64_t t172 = -228064442434994311LL;

    t172 = ((x1541/x1542)%(x1543/x1544));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1545 = INT8_MIN;
	int16_t x1546 = INT16_MIN;
	int64_t x1547 = INT64_MIN;
	int16_t x1548 = INT16_MAX;
	volatile int64_t t173 = -6131618LL;

    t173 = ((x1545/x1546)%(x1547/x1548));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1549 = INT32_MIN;
	static uint32_t x1550 = UINT32_MAX;
	uint32_t x1551 = UINT32_MAX;
	int8_t x1552 = 59;
	uint32_t t174 = 475U;

    t174 = ((x1549/x1550)%(x1551/x1552));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1554 = -1;
	static int32_t x1555 = -33;
	volatile uint32_t t175 = 18U;

    t175 = ((x1553/x1554)%(x1555/x1556));

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1569 = INT32_MIN;
	static uint64_t x1570 = UINT64_MAX;
	static uint64_t x1572 = 356706255712673568LLU;
	uint64_t t176 = 443766161431285LLU;

    t176 = ((x1569/x1570)%(x1571/x1572));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x1585 = INT64_MAX;
	uint32_t x1586 = UINT32_MAX;
	int32_t x1587 = INT32_MIN;
	static volatile int64_t t177 = 46LL;

    t177 = ((x1585/x1586)%(x1587/x1588));

    if (t177 != 488LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1598 = INT32_MIN;
	uint32_t x1599 = UINT32_MAX;
	uint16_t x1600 = 111U;
	static volatile int64_t t178 = -1LL;

    t178 = ((x1597/x1598)%(x1599/x1600));

    if (t178 != -6LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1622 = -1LL;
	static int32_t x1623 = INT32_MIN;
	int16_t x1624 = INT16_MIN;
	volatile int64_t t179 = -33906417683LL;

    t179 = ((x1621/x1622)%(x1623/x1624));

    if (t179 != -65535LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1629 = -1;
	uint64_t x1630 = UINT64_MAX;
	static int32_t x1631 = 21;
	int64_t x1632 = -1LL;
	volatile uint64_t t180 = 347690LLU;

    t180 = ((x1629/x1630)%(x1631/x1632));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1638 = 1U;
	volatile uint64_t x1640 = 1LLU;
	volatile uint64_t t181 = 38858470LLU;

    t181 = ((x1637/x1638)%(x1639/x1640));

    if (t181 != 19711LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1646 = -1;
	int32_t x1647 = INT32_MIN;
	int64_t t182 = 32228232626700174LL;

    t182 = ((x1645/x1646)%(x1647/x1648));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1651 = -4935619144732392LL;
	int32_t x1652 = 409934;
	volatile int64_t t183 = -794592219760015LL;

    t183 = ((x1649/x1650)%(x1651/x1652));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1661 = 274U;
	static int32_t x1662 = INT32_MAX;
	int32_t x1664 = INT32_MIN;
	static volatile uint32_t t184 = 1979U;

    t184 = ((x1661/x1662)%(x1663/x1664));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1673 = INT32_MAX;
	int16_t x1674 = -1;
	int8_t x1675 = INT8_MIN;
	int8_t x1676 = INT8_MIN;

    t185 = ((x1673/x1674)%(x1675/x1676));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1677 = INT8_MIN;
	uint8_t x1678 = 94U;
	volatile int16_t x1679 = INT16_MAX;
	int8_t x1680 = 4;
	volatile int32_t t186 = -2;

    t186 = ((x1677/x1678)%(x1679/x1680));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1681 = INT64_MIN;
	uint8_t x1682 = 88U;
	int16_t x1683 = INT16_MAX;

    t187 = ((x1681/x1682)%(x1683/x1684));

    if (t187 != -375LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1689 = 0;
	static int32_t x1690 = -1;
	int8_t x1692 = -1;
	int64_t t188 = 5681233627210LL;

    t188 = ((x1689/x1690)%(x1691/x1692));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1693 = 0U;
	volatile uint32_t x1694 = UINT32_MAX;
	volatile int32_t x1695 = INT32_MIN;
	int8_t x1696 = INT8_MAX;
	static volatile uint32_t t189 = 992U;

    t189 = ((x1693/x1694)%(x1695/x1696));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1698 = 5886LLU;
	static uint16_t x1699 = UINT16_MAX;
	static volatile uint8_t x1700 = 60U;
	uint64_t t190 = 2205582727545388LLU;

    t190 = ((x1697/x1698)%(x1699/x1700));

    if (t190 != 3LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1710 = -1;
	volatile uint32_t x1711 = UINT32_MAX;
	static uint32_t t191 = 1U;

    t191 = ((x1709/x1710)%(x1711/x1712));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1713 = INT32_MIN;
	int64_t x1714 = INT64_MIN;
	static volatile int64_t t192 = -843LL;

    t192 = ((x1713/x1714)%(x1715/x1716));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1721 = 1;
	int8_t x1722 = INT8_MIN;
	int8_t x1723 = INT8_MAX;
	int64_t x1724 = -1LL;
	int64_t t193 = -18145LL;

    t193 = ((x1721/x1722)%(x1723/x1724));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1745 = -52129350255764019LL;
	static int16_t x1746 = -1965;
	int64_t x1747 = -81749791104LL;
	static int64_t x1748 = -1LL;

    t194 = ((x1745/x1746)%(x1747/x1748));

    if (t194 != 41999110173LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1749 = 144645LLU;
	uint32_t x1751 = UINT32_MAX;
	static volatile uint64_t t195 = 181797LLU;

    t195 = ((x1749/x1750)%(x1751/x1752));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1753 = INT16_MIN;
	int8_t x1754 = INT8_MAX;
	static uint8_t x1755 = UINT8_MAX;

    t196 = ((x1753/x1754)%(x1755/x1756));

    if (t196 != -3) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1773 = 13478;
	volatile int32_t t197 = -380796211;

    t197 = ((x1773/x1774)%(x1775/x1776));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1781 = -20;
	int8_t x1782 = -1;
	static volatile int64_t x1784 = 49846513585452007LL;
	int64_t t198 = -1092117448LL;

    t198 = ((x1781/x1782)%(x1783/x1784));

    if (t198 != 20LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1785 = INT16_MIN;
	int16_t x1786 = -1;
	int64_t x1787 = INT64_MIN;
	volatile int16_t x1788 = INT16_MAX;
	static volatile int64_t t199 = 379018199LL;

    t199 = ((x1785/x1786)%(x1787/x1788));

    if (t199 != 32768LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

