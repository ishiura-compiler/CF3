#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = -1;
uint8_t x12 = 11U;
uint64_t x23 = 62109416782LLU;
static int16_t x32 = -1;
uint32_t x33 = UINT32_MAX;
uint32_t t7 = 132378255U;
int16_t x39 = INT16_MAX;
static volatile int16_t x47 = INT16_MIN;
int16_t x48 = INT16_MAX;
uint8_t x49 = UINT8_MAX;
volatile int64_t x50 = INT64_MIN;
static int32_t x57 = 1845554;
int8_t x60 = -1;
int32_t x61 = INT32_MAX;
uint64_t t15 = 5LLU;
uint32_t x72 = 95546U;
static uint64_t x79 = UINT64_MAX;
uint64_t t18 = 316581887380108LLU;
volatile uint8_t x85 = UINT8_MAX;
static int16_t x89 = 4;
volatile int16_t x90 = 1;
int16_t x95 = INT16_MIN;
static int8_t x102 = 27;
static volatile int64_t x104 = INT64_MAX;
uint16_t x108 = UINT16_MAX;
uint16_t x109 = UINT16_MAX;
int16_t x132 = INT16_MAX;
int8_t x135 = -14;
int64_t x142 = INT64_MAX;
volatile uint64_t t35 = 4863606LLU;
int64_t x149 = INT64_MIN;
static int8_t x150 = -1;
int16_t x151 = INT16_MIN;
uint64_t x153 = 8931814710881521144LLU;
static uint64_t x163 = 13961599919104024LLU;
uint64_t x171 = 4LLU;
static uint32_t x175 = UINT32_MAX;
int8_t x177 = INT8_MAX;
uint32_t x178 = 86U;
volatile int64_t t44 = -303552996641LL;
uint32_t x190 = 2U;
static int8_t x191 = 12;
volatile uint64_t t45 = 62916438LLU;
int8_t x198 = 0;
int8_t x206 = -1;
volatile uint32_t t49 = 5U;
static uint8_t x211 = 14U;
volatile int8_t x217 = INT8_MIN;
uint32_t x219 = UINT32_MAX;
static volatile uint64_t x220 = 56625182069725LLU;
int16_t x221 = INT16_MAX;
volatile int64_t x231 = INT64_MIN;
volatile int64_t t55 = 1177205777684825LL;
static uint16_t x234 = 35U;
int8_t x245 = INT8_MIN;
static uint8_t x248 = 2U;
static volatile int32_t t59 = 0;
static volatile int8_t x251 = -1;
static uint64_t x252 = UINT64_MAX;
volatile int16_t x257 = INT16_MIN;
volatile int16_t x258 = INT16_MAX;
static int32_t x267 = INT32_MAX;
static uint64_t x273 = UINT64_MAX;
int16_t x279 = INT16_MIN;
int16_t x286 = -1;
uint16_t x292 = 15427U;
int64_t x301 = INT64_MIN;
volatile uint64_t t74 = 520276LLU;
int8_t x310 = -1;
volatile uint8_t x316 = 22U;
volatile uint64_t x317 = 80904643950LLU;
volatile uint64_t t77 = 14290355269LLU;
uint8_t x328 = UINT8_MAX;
volatile int32_t t79 = 140;
int32_t x330 = -1;
volatile uint32_t x331 = UINT32_MAX;
int16_t x332 = -1;
static uint8_t x338 = UINT8_MAX;
static uint64_t x339 = UINT64_MAX;
int16_t x340 = -203;
volatile uint64_t t83 = 113441233LLU;
int8_t x352 = INT8_MAX;
uint8_t x354 = 4U;
static int64_t x355 = 1003249LL;
int32_t t89 = 40955453;
volatile uint32_t t90 = 73334088U;
volatile uint64_t x377 = UINT64_MAX;
int8_t x379 = INT8_MIN;
int16_t x381 = 1;
int16_t x386 = -1;
volatile int64_t x390 = 245LL;
int8_t x392 = INT8_MIN;
int64_t x399 = 0LL;
int16_t x403 = 0;
int32_t t98 = 11343854;
static int32_t x406 = 1;
volatile int32_t x408 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = -1LL;
	static uint16_t x3 = 49U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 101931169546LLU;

	t0 = (((x1^x2)|x3)%x4);

	if (t0 != 18446744073709486129LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 21669LLU;
	uint64_t x7 = 7206583655965LLU;
	uint32_t x8 = 2U;
	uint64_t t1 = 12367247LLU;

	t1 = (((x5^x6)|x7)%x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 62U;
	int32_t t2 = -15460;

	t2 = (((x9^x10)|x11)%x12);

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MAX;
	int32_t x19 = -250960392;
	uint64_t x20 = 2528LLU;
	uint64_t t3 = 8223817480611064LLU;

	t3 = (((x17^x18)|x19)%x20);

	if (t3 != 280LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -25;
	int16_t x22 = INT16_MAX;
	static uint64_t x24 = 152634LLU;
	uint64_t t4 = 300LLU;

	t4 = (((x21^x22)|x23)%x24);

	if (t4 != 77690LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -1LL;
	static int64_t x26 = INT64_MAX;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MAX;
	static volatile int64_t t5 = 4052772005241890208LL;

	t5 = (((x25^x26)|x27)%x28);

	if (t5 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 924855542;
	int64_t x30 = INT64_MAX;
	static uint16_t x31 = UINT16_MAX;
	int64_t t6 = 1LL;

	t6 = (((x29^x30)|x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x34 = 1332U;
	volatile int8_t x35 = INT8_MIN;
	static volatile int16_t x36 = INT16_MAX;

	t7 = (((x33^x34)|x35)%x36);

	if (t7 != 32718U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int8_t x38 = -53;
	static uint32_t x40 = 2984U;
	uint32_t t8 = 220U;

	t8 = (((x37^x38)|x39)%x40);

	if (t8 != 2927U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 713189LLU;
	uint16_t x42 = 12109U;
	static volatile uint32_t x43 = UINT32_MAX;
	int16_t x44 = -1;
	volatile uint64_t t9 = 39947246663758540LLU;

	t9 = (((x41^x42)|x43)%x44);

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 3848545896964LLU;
	volatile uint64_t x46 = UINT64_MAX;
	uint64_t t10 = 1551LLU;

	t10 = (((x45^x46)|x47)%x48);

	if (t10 != 30218LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x51 = -1;
	uint32_t x52 = 3370081U;
	volatile int64_t t11 = -889LL;

	t11 = (((x49^x50)|x51)%x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 9U;
	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = 3;
	volatile int16_t x56 = -2623;
	volatile uint32_t t12 = 0U;

	t12 = (((x53^x54)|x55)%x56);

	if (t12 != 65527U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = 693927183406436070LLU;
	uint16_t x59 = UINT16_MAX;
	volatile uint64_t t13 = 5216264LLU;

	t13 = (((x57^x58)|x59)%x60);

	if (t13 != 693927183406727167LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 837018140U;
	int16_t x64 = INT16_MAX;
	volatile uint32_t t14 = 1615345598U;

	t14 = (((x61^x62)|x63)%x64);

	if (t14 != 32541U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	volatile uint8_t x67 = 37U;
	static uint64_t x68 = UINT64_MAX;

	t15 = (((x65^x66)|x67)%x68);

	if (t15 != 9223372034707292197LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MAX;
	static int8_t x70 = INT8_MAX;
	static volatile int64_t x71 = -1192LL;
	int64_t t16 = 0LL;

	t16 = (((x69^x70)|x71)%x72);

	if (t16 != -1192LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int64_t x74 = -24144LL;
	int16_t x75 = 3416;
	volatile int32_t x76 = INT32_MAX;
	int64_t t17 = 96223LL;

	t17 = (((x73^x74)|x75)%x76);

	if (t17 != 2147462648LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = -54;
	int64_t x78 = INT64_MIN;
	int32_t x80 = INT32_MAX;

	t18 = (((x77^x78)|x79)%x80);

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -31452231LL;
	int64_t x82 = INT64_MIN;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = -1;
	int64_t t19 = -12853196LL;

	t19 = (((x81^x82)|x83)%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = -1;
	volatile uint16_t x87 = 106U;
	uint8_t x88 = UINT8_MAX;
	int32_t t20 = -6672251;

	t20 = (((x85^x86)|x87)%x88);

	if (t20 != -150) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t21 = -3LL;

	t21 = (((x89^x90)|x91)%x92);

	if (t21 != -2147483643LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	volatile int16_t x96 = INT16_MIN;
	static int32_t t22 = 3;

	t22 = (((x93^x94)|x95)%x96);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1795223112093037LL;
	static volatile int32_t x98 = -1;
	int64_t x99 = INT64_MAX;
	int64_t x100 = INT64_MIN;
	int64_t t23 = INT64_MAX;

	t23 = (((x97^x98)|x99)%x100);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int64_t x103 = 116846369732475771LL;
	int64_t t24 = -129034670800322021LL;

	t24 = (((x101^x102)|x103)%x104);

	if (t24 != 116846369732493311LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -275999;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;
	int64_t t25 = -24LL;

	t25 = (((x105^x106)|x107)%x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x110 = 40;
	uint32_t x111 = 11U;
	int16_t x112 = 6;
	uint32_t t26 = 1061153738U;

	t26 = (((x109^x110)|x111)%x112);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 51295877216742LLU;
	volatile int32_t x114 = -68374763;
	volatile int64_t x115 = INT64_MAX;
	uint32_t x116 = 2019015U;
	uint64_t t27 = 31243763504345848LLU;

	t27 = (((x113^x114)|x115)%x116);

	if (t27 != 270465LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	static uint32_t x119 = 26648838U;
	int16_t x120 = INT16_MIN;
	int64_t t28 = 1LL;

	t28 = (((x117^x118)|x119)%x120);

	if (t28 != 8454LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 104124154402LLU;
	int16_t x122 = 468;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MAX;
	volatile uint64_t t29 = 225437634317LLU;

	t29 = (((x121^x122)|x123)%x124);

	if (t29 != 125LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MAX;
	uint8_t x127 = 1U;
	uint64_t x128 = 10827295640604LLU;
	static volatile uint64_t t30 = 264605998781LLU;

	t30 = (((x125^x126)|x127)%x128);

	if (t30 != 10317858603927LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 25;
	int8_t x130 = INT8_MIN;
	static uint64_t x131 = 31017439752532LLU;
	volatile uint64_t t31 = 103LLU;

	t31 = (((x129^x130)|x131)%x132);

	if (t31 != 32748LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 3050U;
	int64_t x134 = INT64_MIN;
	int32_t x136 = INT32_MIN;
	volatile int64_t t32 = 13LL;

	t32 = (((x133^x134)|x135)%x136);

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	int16_t x138 = -753;
	int32_t x139 = INT32_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t33 = 3616U;

	t33 = (((x137^x138)|x139)%x140);

	if (t33 != 4294966768U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t34 = 0LL;

	t34 = (((x141^x142)|x143)%x144);

	if (t34 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int64_t x146 = INT64_MAX;
	static int64_t x147 = INT64_MIN;
	uint64_t x148 = 51LLU;

	t35 = (((x145^x146)|x147)%x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x152 = -1LL;
	int64_t t36 = -120301223576279575LL;

	t36 = (((x149^x150)|x151)%x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = INT16_MIN;
	static uint8_t x155 = UINT8_MAX;
	volatile int32_t x156 = INT32_MAX;
	volatile uint64_t t37 = 3577LLU;

	t37 = (((x153^x154)|x155)%x156);

	if (t37 != 1717809584LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t38 = -65433161;

	t38 = (((x157^x158)|x159)%x160);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 448235U;
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MAX;
	volatile uint64_t t39 = 32411LLU;

	t39 = (((x161^x162)|x163)%x164);

	if (t39 != 24711LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -2;
	int8_t x166 = -3;
	int8_t x167 = 3;
	static uint32_t x168 = UINT32_MAX;
	volatile uint32_t t40 = 6954429U;

	t40 = (((x165^x166)|x167)%x168);

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	static volatile int32_t x170 = -1;
	int64_t x172 = -2288LL;
	uint64_t t41 = 1525LLU;

	t41 = (((x169^x170)|x171)%x172);

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static uint16_t x174 = 2U;
	static uint16_t x176 = UINT16_MAX;
	volatile uint32_t t42 = 91766927U;

	t42 = (((x173^x174)|x175)%x176);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x179 = INT32_MAX;
	int16_t x180 = -6;
	uint32_t t43 = 1131389727U;

	t43 = (((x177^x178)|x179)%x180);

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -4;
	int64_t x182 = -553355962805LL;
	int64_t x183 = -1LL;
	uint8_t x184 = 18U;

	t44 = (((x181^x182)|x183)%x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x189 = 2LLU;
	int32_t x192 = -763492875;

	t45 = (((x189^x190)|x191)%x192);

	if (t45 != 12LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 3;
	volatile int8_t x194 = -1;
	uint8_t x195 = 43U;
	uint8_t x196 = 33U;
	int32_t t46 = -2164064;

	t46 = (((x193^x194)|x195)%x196);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = -245;
	volatile int32_t t47 = -2;

	t47 = (((x197^x198)|x199)%x200);

	if (t47 != 182) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -1;
	int8_t x202 = -1;
	int16_t x203 = INT16_MAX;
	static int16_t x204 = -1;
	int32_t t48 = -184474;

	t48 = (((x201^x202)|x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = UINT32_MAX;
	int32_t x207 = -38;
	int16_t x208 = INT16_MAX;

	t49 = (((x205^x206)|x207)%x208);

	if (t49 != 32733U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = 384925716U;
	int16_t x210 = INT16_MIN;
	int64_t x212 = 720697LL;
	int64_t t50 = 450720686LL;

	t50 = (((x209^x210)|x211)%x212);

	if (t50 != 227637LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 0U;
	int8_t x214 = -2;
	static uint16_t x215 = 21U;
	uint32_t x216 = UINT32_MAX;
	static uint32_t t51 = 84973739U;

	t51 = (((x213^x214)|x215)%x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x218 = INT8_MIN;
	uint64_t t52 = 1282LLU;

	t52 = (((x217^x218)|x219)%x220);

	if (t52 != 4294967295LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	static volatile int64_t t53 = -179518197274LL;

	t53 = (((x221^x222)|x223)%x224);

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x225 = INT16_MIN;
	static uint8_t x226 = 3U;
	uint16_t x227 = UINT16_MAX;
	volatile int32_t x228 = -1;
	static int32_t t54 = -9;

	t54 = (((x225^x226)|x227)%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -200LL;
	int16_t x230 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;

	t55 = (((x229^x230)|x231)%x232);

	if (t55 != -32569LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MIN;
	int32_t x235 = 2579717;
	int8_t x236 = INT8_MIN;
	volatile int64_t t56 = 7704LL;

	t56 = (((x233^x234)|x235)%x236);

	if (t56 != -89LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = INT32_MAX;
	uint8_t x239 = 0U;
	int64_t x240 = INT64_MAX;
	volatile uint64_t t57 = 8727837LLU;

	t57 = (((x237^x238)|x239)%x240);

	if (t57 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 10001U;
	int32_t x242 = 2254;
	uint64_t x243 = UINT64_MAX;
	static int8_t x244 = INT8_MAX;
	uint64_t t58 = 2548LLU;

	t58 = (((x241^x242)|x243)%x244);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = 1;
	int32_t x247 = INT32_MIN;

	t59 = (((x245^x246)|x247)%x248);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile uint64_t t60 = 790LLU;

	t60 = (((x249^x250)|x251)%x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x253 = 1350U;
	int8_t x254 = 60;
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MAX;
	int64_t t61 = 313855LL;

	t61 = (((x253^x254)|x255)%x256);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x259 = INT32_MIN;
	uint8_t x260 = 24U;
	static volatile int32_t t62 = -59349;

	t62 = (((x257^x258)|x259)%x260);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x261 = INT8_MIN;
	int64_t x262 = -1LL;
	volatile int64_t x263 = INT64_MAX;
	volatile int32_t x264 = INT32_MAX;
	int64_t t63 = -896861115125105303LL;

	t63 = (((x261^x262)|x263)%x264);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x265 = 2U;
	uint8_t x266 = 14U;
	int16_t x268 = INT16_MIN;
	uint32_t t64 = 150284240U;

	t64 = (((x265^x266)|x267)%x268);

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = -934;
	int16_t x270 = -153;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MIN;
	uint64_t t65 = 401LLU;

	t65 = (((x269^x270)|x271)%x272);

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MIN;
	static uint32_t x275 = 18U;
	volatile int32_t x276 = -45647260;
	static volatile uint64_t t66 = 7232749234LLU;

	t66 = (((x273^x274)|x275)%x276);

	if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = 1;
	int64_t x280 = -1LL;
	volatile int64_t t67 = -14653159600807LL;

	t67 = (((x277^x278)|x279)%x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static volatile uint32_t x282 = 1888U;
	int64_t x283 = INT64_MIN;
	int16_t x284 = -1;
	volatile int64_t t68 = -39201LL;

	t68 = (((x281^x282)|x283)%x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -1;
	int8_t x287 = -23;
	volatile int16_t x288 = 117;
	volatile int32_t t69 = 202672;

	t69 = (((x285^x286)|x287)%x288);

	if (t69 != -23) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	static int64_t t70 = 15920872LL;

	t70 = (((x289^x290)|x291)%x292);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	static int32_t x294 = 121424;
	int8_t x295 = 57;
	static int64_t x296 = INT64_MIN;
	static int64_t t71 = 782LL;

	t71 = (((x293^x294)|x295)%x296);

	if (t71 != -121351LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -25LL;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -384813368;
	int8_t x300 = -1;
	static int64_t t72 = -68361614078LL;

	t72 = (((x297^x298)|x299)%x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = INT64_MIN;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MAX;
	volatile int64_t t73 = 251321365788464182LL;

	t73 = (((x301^x302)|x303)%x304);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x305 = -1;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t x308 = 39135139107000LLU;

	t74 = (((x305^x306)|x307)%x308);

	if (t74 != 4904234031615LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x311 = 5956U;
	int16_t x312 = -1;
	volatile int64_t t75 = 2LL;

	t75 = (((x309^x310)|x311)%x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = INT16_MIN;
	uint64_t x314 = 10084990226113673LLU;
	int32_t x315 = INT32_MAX;
	uint64_t t76 = 2899245532534494098LLU;

	t76 = (((x313^x314)|x315)%x316);

	if (t76 != 9LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x318 = 7;
	static int8_t x319 = INT8_MAX;
	int8_t x320 = -1;

	t77 = (((x317^x318)|x319)%x320);

	if (t77 != 80904643967LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = 117U;
	volatile int32_t x322 = -1;
	int8_t x323 = 0;
	uint8_t x324 = 5U;
	int32_t t78 = -445258087;

	t78 = (((x321^x322)|x323)%x324);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x325 = INT16_MIN;
	uint16_t x326 = 21368U;
	uint16_t x327 = 3U;

	t79 = (((x325^x326)|x327)%x328);

	if (t79 != -177) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MAX;
	uint32_t t80 = 79U;

	t80 = (((x329^x330)|x331)%x332);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -4;
	static int8_t x334 = 1;
	int32_t x335 = 0;
	int8_t x336 = 13;
	int32_t t81 = -1436;

	t81 = (((x333^x334)|x335)%x336);

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x337 = 27U;
	uint64_t t82 = 5362690673537LLU;

	t82 = (((x337^x338)|x339)%x340);

	if (t82 != 202LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = INT16_MAX;
	int16_t x342 = -2545;
	uint64_t x343 = 679972204LLU;
	uint8_t x344 = UINT8_MAX;

	t83 = (((x341^x342)|x343)%x344);

	if (t83 != 138LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	int8_t x346 = INT8_MAX;
	volatile int8_t x347 = INT8_MIN;
	uint8_t x348 = 126U;
	int32_t t84 = -75;

	t84 = (((x345^x346)|x347)%x348);

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 15455U;
	uint16_t x350 = 2U;
	uint32_t x351 = 1966355U;
	volatile uint32_t t85 = 10037348U;

	t85 = (((x349^x350)|x351)%x352);

	if (t85 != 83U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = 846;
	int8_t x356 = INT8_MAX;
	int64_t t86 = -379244LL;

	t86 = (((x353^x354)|x355)%x356);

	if (t86 != 88LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x357 = 15384980LLU;
	int32_t x358 = INT32_MIN;
	static int16_t x359 = INT16_MIN;
	uint16_t x360 = 4187U;
	volatile uint64_t t87 = 909LLU;

	t87 = (((x357^x358)|x359)%x360);

	if (t87 != 2320LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -116;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = -414;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t88 = 384LLU;

	t88 = (((x361^x362)|x363)%x364);

	if (t88 != 32371LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x365 = 9643U;
	volatile uint16_t x366 = 221U;
	int32_t x367 = -439526;
	uint8_t x368 = 101U;

	t89 = (((x365^x366)|x367)%x368);

	if (t89 != -51) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x369 = 3U;
	uint16_t x370 = 2375U;
	int8_t x371 = INT8_MAX;
	volatile uint32_t x372 = 2U;

	t90 = (((x369^x370)|x371)%x372);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = -1;
	int32_t x375 = 2265;
	static uint32_t x376 = UINT32_MAX;
	static uint32_t t91 = 17U;

	t91 = (((x373^x374)|x375)%x376);

	if (t91 != 2303U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x378 = INT16_MIN;
	uint16_t x380 = 5482U;
	uint64_t t92 = 14943262LLU;

	t92 = (((x377^x378)|x379)%x380);

	if (t92 != 3037LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x382 = INT32_MIN;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t93 = 1742777112LL;

	t93 = (((x381^x382)|x383)%x384);

	if (t93 != -2147483393LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x385 = 60U;
	static int8_t x387 = -1;
	int32_t x388 = -1;
	volatile int32_t t94 = -915927;

	t94 = (((x385^x386)|x387)%x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x389 = 0U;
	uint16_t x391 = 2U;
	static int64_t t95 = 6LL;

	t95 = (((x389^x390)|x391)%x392);

	if (t95 != 119LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x393 = 33131;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = 7U;
	int16_t x396 = 58;
	volatile int32_t t96 = -8;

	t96 = (((x393^x394)|x395)%x396);

	if (t96 != -35) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	static int64_t t97 = 57814LL;

	t97 = (((x397^x398)|x399)%x400);

	if (t97 != -2147450881LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MAX;
	static int16_t x402 = -1;
	static int8_t x404 = INT8_MIN;

	t98 = (((x401^x402)|x403)%x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	volatile int32_t t99 = 361118;

	t99 = (((x405^x406)|x407)%x408);

	if (t99 != 255) { NG(); } else { ; }
	
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

