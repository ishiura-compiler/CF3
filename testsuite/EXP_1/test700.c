#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 16U;
int32_t x4 = 13;
uint32_t x7 = 63904U;
uint32_t x14 = 203U;
uint32_t t3 = 251358059U;
int8_t x19 = -6;
int64_t x20 = INT64_MIN;
static int16_t x31 = 10;
volatile int32_t x32 = -1;
int16_t x34 = 1525;
static volatile uint32_t t8 = 18260U;
static volatile int64_t x43 = INT64_MIN;
uint8_t x50 = UINT8_MAX;
uint64_t x61 = UINT64_MAX;
volatile uint64_t t15 = 3LLU;
uint64_t x67 = UINT64_MAX;
volatile uint16_t x72 = 456U;
static int8_t x88 = -1;
static int32_t t21 = -306307;
volatile uint16_t x95 = 0U;
uint16_t x97 = UINT16_MAX;
int32_t x115 = -1;
int64_t t28 = -2102908429382349434LL;
int32_t x121 = -9727;
int64_t x127 = -1LL;
int64_t x128 = INT64_MAX;
volatile uint64_t t30 = 1947684769276LLU;
int64_t t31 = INT64_MIN;
volatile int64_t t32 = -58193758LL;
int16_t x138 = 13917;
volatile int64_t t34 = 475806796322LL;
uint64_t t36 = 660LLU;
int64_t x153 = INT64_MAX;
int8_t x160 = -1;
int64_t x162 = INT64_MIN;
int64_t x177 = 13101LL;
volatile uint8_t x188 = 82U;
volatile int32_t t44 = 94432;
uint64_t x189 = 103582897103LLU;
volatile uint64_t t45 = 7339806469LLU;
uint32_t x197 = UINT32_MAX;
uint32_t x201 = 145132U;
int8_t x209 = INT8_MAX;
volatile int64_t x212 = -1022911LL;
uint32_t x220 = UINT32_MAX;
int8_t x225 = INT8_MIN;
int8_t x230 = -61;
static volatile int8_t x234 = -9;
int32_t t56 = -33830;
static int8_t x238 = -1;
int16_t x241 = INT16_MIN;
int32_t x250 = INT32_MIN;
volatile int64_t t61 = INT64_MIN;
static uint32_t x257 = 30290985U;
int8_t x262 = INT8_MIN;
static uint8_t x263 = UINT8_MAX;
volatile int32_t t63 = 15;
static int64_t x265 = INT64_MIN;
int32_t x269 = -1;
int64_t x270 = -1LL;
int16_t x275 = 61;
uint16_t x277 = 31887U;
volatile uint64_t x279 = 622LLU;
volatile int64_t x281 = INT64_MIN;
uint64_t x283 = 24808LLU;
uint64_t t68 = 31884840944761LLU;
static int64_t x289 = -81LL;
int32_t x291 = 7;
int32_t x292 = -1;
uint16_t x294 = UINT16_MAX;
int64_t x304 = INT64_MAX;
int8_t x318 = 20;
int64_t x322 = INT64_MAX;
static int32_t x323 = -1420896;
static int64_t t78 = -1727LL;
uint8_t x329 = 0U;
volatile int32_t x342 = INT32_MAX;
int8_t x348 = -63;
static volatile uint64_t t84 = 31674820LLU;
uint64_t x357 = 343026651LLU;
int8_t x358 = INT8_MIN;
volatile uint64_t t86 = 733816149775334LLU;
volatile int16_t x365 = INT16_MIN;
int8_t x380 = -1;
uint64_t x381 = UINT64_MAX;
uint64_t x388 = 4416734903330074LLU;
int64_t x394 = INT64_MAX;
int16_t x395 = -1;
volatile int64_t t94 = 100039369072383556LL;
static int32_t x400 = 189;
int32_t t95 = -667428;
uint64_t x401 = UINT64_MAX;
uint32_t x404 = 12131213U;
static int32_t x406 = 2;
uint64_t t97 = 199715351215380LLU;
uint32_t t98 = 1U;


void f0(void) {
	static volatile int16_t x1 = 508;
	int64_t x3 = INT64_MAX;
	int64_t t0 = 0LL;

	t0 = (((x1%x2)-x3)&x4);

	if (t0 != 13LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -82;
	uint32_t x6 = 43266582U;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 120074LLU;

	t1 = (((x5%x6)-x7)&x8);

	if (t1 != 11511692LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int64_t x10 = INT64_MAX;
	int16_t x11 = 10052;
	uint32_t x12 = 0U;
	volatile int64_t t2 = 4757833113125466LL;

	t2 = (((x9%x10)-x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	static volatile int32_t x16 = INT32_MIN;

	t3 = (((x13%x14)-x15)&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 11;
	int8_t x18 = 13;
	int64_t t4 = 91484LL;

	t4 = (((x17%x18)-x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static volatile int32_t x22 = 25;
	int64_t x23 = -165914LL;
	uint64_t x24 = 6LLU;
	volatile uint64_t t5 = 743LLU;

	t5 = (((x21%x22)-x23)&x24);

	if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int64_t x26 = INT64_MAX;
	int32_t x27 = 41068125;
	int16_t x28 = INT16_MAX;
	int64_t t6 = 423943376155989LL;

	t6 = (((x25%x26)-x27)&x28);

	if (t6 != 22946LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	uint16_t x30 = 27U;
	volatile int64_t t7 = -396LL;

	t7 = (((x29%x30)-x31)&x32);

	if (t7 != -11LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -840560120;
	uint32_t x35 = 189836528U;
	volatile int16_t x36 = -1;

	t8 = (((x33%x34)-x35)&x36);

	if (t8 != 4105129298U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 8113277U;
	volatile uint64_t x38 = 90676190000802731LLU;
	int16_t x39 = -1;
	volatile int8_t x40 = 10;
	volatile uint64_t t9 = 7261746412417LLU;

	t9 = (((x37%x38)-x39)&x40);

	if (t9 != 10LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 0LLU;

	t10 = (((x41%x42)-x43)&x44);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 148099631248009491LLU;
	static int16_t x46 = INT16_MIN;
	int8_t x47 = -39;
	int32_t x48 = INT32_MIN;
	uint64_t t11 = 19852381870445995LLU;

	t11 = (((x45%x46)-x47)&x48);

	if (t11 != 148099629236355072LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static volatile int64_t x51 = -1LL;
	int64_t x52 = INT64_MAX;
	int64_t t12 = -3934LL;

	t12 = (((x49%x50)-x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 46756U;
	uint8_t x54 = 47U;
	uint8_t x55 = 3U;
	uint16_t x56 = 6137U;
	volatile uint32_t t13 = 119537313U;

	t13 = (((x53%x54)-x55)&x56);

	if (t13 != 33U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 22U;
	static volatile uint8_t x58 = 6U;
	uint16_t x59 = 2244U;
	volatile int16_t x60 = -1;
	static int32_t t14 = -3;

	t14 = (((x57%x58)-x59)&x60);

	if (t14 != -2240) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 321U;
	uint64_t x63 = 7775550LLU;
	volatile int16_t x64 = -297;

	t15 = (((x61%x62)-x63)&x64);

	if (t15 != 18446744073701776000LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1;
	static uint32_t x66 = 1004539178U;
	static uint8_t x68 = 9U;
	uint64_t t16 = 26846557517496634LLU;

	t16 = (((x65%x66)-x67)&x68);

	if (t16 != 8LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = 11;
	volatile int32_t x70 = INT32_MIN;
	int32_t x71 = -1;
	static int32_t t17 = -12084;

	t17 = (((x69%x70)-x71)&x72);

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = UINT32_MAX;
	volatile uint8_t x75 = 87U;
	static uint64_t x76 = 1778231169725981LLU;
	uint64_t t18 = 15170345748236LLU;

	t18 = (((x73%x74)-x75)&x76);

	if (t18 != 1778229022242313LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 351474489235232LL;
	int8_t x78 = INT8_MIN;
	volatile int8_t x79 = INT8_MIN;
	volatile int16_t x80 = 111;
	volatile int64_t t19 = -5LL;

	t19 = (((x77%x78)-x79)&x80);

	if (t19 != 32LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = -13;
	int64_t x83 = 2803023241144083LL;
	uint8_t x84 = UINT8_MAX;
	int64_t t20 = 4264365151740LL;

	t20 = (((x81%x82)-x83)&x84);

	if (t20 != 226LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	uint16_t x87 = 51U;

	t21 = (((x85%x86)-x87)&x88);

	if (t21 != 204) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	int32_t x91 = 111;
	int32_t x92 = -52934;
	static int64_t t22 = 3LL;

	t22 = (((x89%x90)-x91)&x92);

	if (t22 != 4294914320LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MIN;
	volatile int8_t x96 = INT8_MIN;
	int32_t t23 = -2029968;

	t23 = (((x93%x94)-x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int8_t x99 = 0;
	int16_t x100 = 1728;
	int32_t t24 = 17;

	t24 = (((x97%x98)-x99)&x100);

	if (t24 != 1728) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = -2;
	int8_t x106 = INT8_MIN;
	volatile uint64_t x107 = 60883004549514080LLU;
	static uint32_t x108 = 3U;
	static volatile uint64_t t25 = 811749LLU;

	t25 = (((x105%x106)-x107)&x108);

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 1;
	uint64_t x110 = 80645LLU;
	static volatile uint32_t x111 = UINT32_MAX;
	uint64_t x112 = 1LLU;
	volatile uint64_t t26 = 12944778620857LLU;

	t26 = (((x109%x110)-x111)&x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = -8;
	uint16_t x114 = 5509U;
	int64_t x116 = 1457312327LL;
	static volatile int64_t t27 = 624118LL;

	t27 = (((x113%x114)-x115)&x116);

	if (t27 != 1457312321LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = -574081709773683400LL;
	int32_t x119 = INT32_MIN;
	int16_t x120 = -549;

	t28 = (((x117%x118)-x119)&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = -407201;
	int32_t x123 = -90166;
	int16_t x124 = -1;
	volatile int32_t t29 = 24057;

	t29 = (((x121%x122)-x123)&x124);

	if (t29 != 80439) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	uint64_t x126 = UINT64_MAX;

	t30 = (((x125%x126)-x127)&x128);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	int32_t x130 = -178688;
	int32_t x131 = 209839440;
	volatile int64_t x132 = INT64_MIN;

	t31 = (((x129%x130)-x131)&x132);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 0U;
	int32_t x134 = -1;
	volatile int32_t x135 = INT32_MAX;
	int64_t x136 = -1LL;

	t32 = (((x133%x134)-x135)&x136);

	if (t32 != -2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	static volatile int64_t x140 = -2430305004301LL;
	static int64_t t33 = 562100LL;

	t33 = (((x137%x138)-x139)&x140);

	if (t33 != 1138LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int64_t x142 = INT64_MIN;
	static int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;

	t34 = (((x141%x142)-x143)&x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 276U;
	uint64_t x146 = UINT64_MAX;
	static uint32_t x147 = UINT32_MAX;
	static int64_t x148 = INT64_MAX;
	uint64_t t35 = 3084352124612216232LLU;

	t35 = (((x145%x146)-x147)&x148);

	if (t35 != 9223372032559808789LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 5U;
	volatile uint64_t x150 = UINT64_MAX;
	static volatile int16_t x151 = -33;
	int64_t x152 = INT64_MIN;

	t36 = (((x149%x150)-x151)&x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = -143779;
	int64_t x155 = -1LL;
	static uint32_t x156 = 560151U;
	volatile int64_t t37 = -1281055731350LL;

	t37 = (((x153%x154)-x155)&x156);

	if (t37 != 2071LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = 6716141LLU;
	volatile int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -1;
	uint64_t t38 = 7216751384686152LLU;

	t38 = (((x157%x158)-x159)&x160);

	if (t38 != 6716142LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x161 = 29210U;
	int64_t x163 = -1LL;
	int64_t x164 = INT64_MAX;
	volatile int64_t t39 = -245407069306559LL;

	t39 = (((x161%x162)-x163)&x164);

	if (t39 != 29211LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MAX;
	volatile int64_t x167 = 7731493620445LL;
	uint64_t x168 = 0LLU;
	uint64_t t40 = 16503409LLU;

	t40 = (((x165%x166)-x167)&x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -1;
	int8_t x172 = -1;
	volatile uint64_t t41 = 39199519791725756LLU;

	t41 = (((x169%x170)-x171)&x172);

	if (t41 != 2147483648LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 8;
	int8_t x174 = -1;
	static volatile int8_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t42 = 349U;

	t42 = (((x173%x174)-x175)&x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x178 = 2590U;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = -902;
	volatile uint64_t t43 = 924993743LLU;

	t43 = (((x177%x178)-x179)&x180);

	if (t43 != 24LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MIN;

	t44 = (((x185%x186)-x187)&x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	volatile int32_t x192 = -1;

	t45 = (((x189%x190)-x191)&x192);

	if (t45 != 105730380751LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	volatile int64_t x194 = INT64_MIN;
	static int64_t x195 = 39288545LL;
	int32_t x196 = -1;
	int64_t t46 = 5557LL;

	t46 = (((x193%x194)-x195)&x196);

	if (t46 != -39255778LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x198 = 125;
	int32_t x199 = -1;
	int16_t x200 = -254;
	uint32_t t47 = 20880U;

	t47 = (((x197%x198)-x199)&x200);

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MAX;
	static volatile uint16_t x204 = 1U;
	volatile uint32_t t48 = 9527U;

	t48 = (((x201%x202)-x203)&x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MIN;
	uint16_t x206 = UINT16_MAX;
	uint64_t x207 = 957529248612247LLU;
	volatile uint64_t x208 = 1158453990936556515LLU;
	static volatile uint64_t t49 = 38654547LLU;

	t49 = (((x205%x206)-x207)&x208);

	if (t49 != 1157566942714789985LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x210 = -1LL;
	volatile int32_t x211 = INT32_MIN;
	volatile int64_t t50 = 232048099973LL;

	t50 = (((x209%x210)-x211)&x212);

	if (t50 != 2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 1U;
	volatile uint16_t x214 = UINT16_MAX;
	int32_t x215 = 123315;
	int8_t x216 = -24;
	static int32_t t51 = -6702;

	t51 = (((x213%x214)-x215)&x216);

	if (t51 != -123320) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 7797297689055856357LLU;
	volatile uint64_t x218 = 107256LLU;
	static volatile int64_t x219 = -1LL;
	uint64_t t52 = 6845213697LLU;

	t52 = (((x217%x218)-x219)&x220);

	if (t52 != 106622LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = INT64_MIN;
	volatile int32_t x224 = INT32_MIN;
	volatile uint64_t t53 = 95608381LLU;

	t53 = (((x221%x222)-x223)&x224);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x226 = 25U;
	volatile int8_t x227 = INT8_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	int32_t t54 = 118;

	t54 = (((x225%x226)-x227)&x228);

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = 0;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 6U;
	volatile int32_t t55 = -169;

	t55 = (((x229%x230)-x231)&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	static uint16_t x235 = 16557U;
	int8_t x236 = 5;

	t56 = (((x233%x234)-x235)&x236);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x237 = UINT16_MAX;
	volatile int8_t x239 = -1;
	int32_t x240 = INT32_MIN;
	volatile int32_t t57 = -204857;

	t57 = (((x237%x238)-x239)&x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x242 = -22;
	int16_t x243 = -8798;
	int16_t x244 = 195;
	volatile int32_t t58 = 483;

	t58 = (((x241%x242)-x243)&x244);

	if (t58 != 64) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = -14;
	int8_t x246 = INT8_MIN;
	uint32_t x247 = 256350845U;
	uint8_t x248 = UINT8_MAX;
	volatile uint32_t t59 = 2036449U;

	t59 = (((x245%x246)-x247)&x248);

	if (t59 != 117U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -15021;
	int8_t x251 = INT8_MIN;
	int64_t x252 = 2115060203LL;
	int64_t t60 = -141127742305230224LL;

	t60 = (((x249%x250)-x251)&x252);

	if (t60 != 2115060163LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 0U;
	static volatile int8_t x254 = INT8_MAX;
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MIN;

	t61 = (((x253%x254)-x255)&x256);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = 27U;
	int64_t x259 = -111700042201LL;
	int64_t x260 = INT64_MIN;
	volatile int64_t t62 = 1LL;

	t62 = (((x257%x258)-x259)&x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x261 = INT8_MIN;
	volatile int32_t x264 = -231615390;

	t63 = (((x261%x262)-x263)&x264);

	if (t63 != -231615488) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x266 = -9;
	uint8_t x267 = 13U;
	uint8_t x268 = UINT8_MAX;
	int64_t t64 = 6LL;

	t64 = (((x265%x266)-x267)&x268);

	if (t64 != 235LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 207743349U;
	volatile int64_t t65 = -4324253043447280343LL;

	t65 = (((x269%x270)-x271)&x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x273 = 4365U;
	uint64_t x274 = 465358930LLU;
	int64_t x276 = 3672519723701LL;
	static volatile uint64_t t66 = 50106LLU;

	t66 = (((x273%x274)-x275)&x276);

	if (t66 != 144LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x278 = INT8_MIN;
	volatile int8_t x280 = -1;
	volatile uint64_t t67 = 11564221LLU;

	t67 = (((x277%x278)-x279)&x280);

	if (t67 != 18446744073709551009LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x282 = INT16_MIN;
	static volatile int32_t x284 = INT32_MAX;

	t68 = (((x281%x282)-x283)&x284);

	if (t68 != 2147458840LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 283389709LLU;
	uint32_t x287 = 397U;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t69 = 31620LLU;

	t69 = (((x285%x286)-x287)&x288);

	if (t69 != 43162LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x290 = 11914967U;
	int64_t t70 = -1798LL;

	t70 = (((x289%x290)-x291)&x292);

	if (t70 != -88LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 1U;
	int16_t x295 = -1;
	int16_t x296 = 0;
	volatile int32_t t71 = 7667206;

	t71 = (((x293%x294)-x295)&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x297 = -96;
	uint8_t x298 = 97U;
	static uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MIN;
	static uint64_t t72 = 17425435LLU;

	t72 = (((x297%x298)-x299)&x300);

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 4U;
	uint64_t x302 = 2249348LLU;
	int8_t x303 = INT8_MIN;
	uint64_t t73 = 658497814LLU;

	t73 = (((x301%x302)-x303)&x304);

	if (t73 != 132LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 1;
	int16_t x306 = 25;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 85U;
	volatile int32_t t74 = -217699;

	t74 = (((x305%x306)-x307)&x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = 57;
	int64_t x310 = -1LL;
	volatile int8_t x311 = INT8_MIN;
	volatile uint16_t x312 = 520U;
	volatile int64_t t75 = 28LL;

	t75 = (((x309%x310)-x311)&x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 480632863LLU;
	static uint64_t t76 = 85LLU;

	t76 = (((x313%x314)-x315)&x316);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = INT64_MIN;
	uint16_t x319 = 0U;
	volatile int32_t x320 = -1;
	static int64_t t77 = 10LL;

	t77 = (((x317%x318)-x319)&x320);

	if (t77 != -8LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = 7607729759LL;
	static int32_t x324 = -1;

	t78 = (((x321%x322)-x323)&x324);

	if (t78 != 7609150655LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x325 = -1;
	volatile int64_t x326 = INT64_MAX;
	int16_t x327 = -806;
	static int8_t x328 = INT8_MAX;
	static int64_t t79 = -1556594414334983LL;

	t79 = (((x325%x326)-x327)&x328);

	if (t79 != 37LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	static volatile uint64_t x332 = 1LLU;
	volatile uint64_t t80 = 311956116LLU;

	t80 = (((x329%x330)-x331)&x332);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	static int8_t x339 = INT8_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t81 = 1;

	t81 = (((x337%x338)-x339)&x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = 6233LL;
	int8_t x343 = -1;
	int8_t x344 = -6;
	volatile int64_t t82 = 184LL;

	t82 = (((x341%x342)-x343)&x344);

	if (t82 != 6234LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	static uint32_t x346 = 9U;
	uint64_t x347 = 7877268466112LLU;
	uint64_t t83 = 40705721906859LLU;

	t83 = (((x345%x346)-x347)&x348);

	if (t83 != 18446736196441085504LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 63356234792408424LLU;
	static uint32_t x350 = 1029551868U;
	static volatile uint8_t x351 = 15U;
	volatile uint64_t x352 = 4131167024LLU;

	t84 = (((x349%x350)-x351)&x352);

	if (t84 != 336887824LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	int16_t x354 = -1;
	int16_t x355 = INT16_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	volatile int64_t t85 = -206786673LL;

	t85 = (((x353%x354)-x355)&x356);

	if (t85 != 32769LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;

	t86 = (((x357%x358)-x359)&x360);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = -907;
	int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -57835;
	static volatile int32_t t87 = -1808;

	t87 = (((x361%x362)-x363)&x364);

	if (t87 != -57855) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1105;
	uint32_t x368 = 173U;
	uint32_t t88 = 13473U;

	t88 = (((x365%x366)-x367)&x368);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 53050078LL;
	int32_t x370 = -6996;
	static int32_t x371 = INT32_MIN;
	int32_t x372 = -38857980;
	volatile int64_t t89 = -14LL;

	t89 = (((x369%x370)-x371)&x372);

	if (t89 != 2147488004LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x377 = 1U;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = 0;
	volatile int32_t t90 = -629154;

	t90 = (((x377%x378)-x379)&x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 40LLU;
	volatile int32_t x384 = -64155;
	uint64_t t91 = 8043103426081LLU;

	t91 = (((x381%x382)-x383)&x384);

	if (t91 != 69LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = -1695263LL;
	static int8_t x386 = -1;
	uint16_t x387 = 59U;
	uint64_t t92 = 39167442LLU;

	t92 = (((x385%x386)-x387)&x388);

	if (t92 != 4416734903330048LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	static uint64_t x391 = 4635799228058911LLU;
	uint32_t x392 = 41U;
	volatile uint64_t t93 = 467964942477LLU;

	t93 = (((x389%x390)-x391)&x392);

	if (t93 != 33LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	int8_t x396 = INT8_MIN;

	t94 = (((x393%x394)-x395)&x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x397 = -32247;
	static int8_t x398 = INT8_MIN;
	int8_t x399 = -1;

	t95 = (((x397%x398)-x399)&x400);

	if (t95 != 136) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MAX;
	volatile uint64_t t96 = 241LLU;

	t96 = (((x401%x402)-x403)&x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 16851LLU;
	uint16_t x407 = 1U;
	int32_t x408 = -120934812;

	t97 = (((x405%x406)-x407)&x408);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = INT8_MAX;
	uint8_t x410 = UINT8_MAX;
	uint32_t x411 = 53108U;
	int16_t x412 = -1;

	t98 = (((x409%x410)-x411)&x412);

	if (t98 != 4294914315U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	int32_t x414 = -119;
	volatile uint64_t x415 = 6160LLU;
	volatile int8_t x416 = INT8_MAX;
	static uint64_t t99 = 0LLU;

	t99 = (((x413%x414)-x415)&x416);

	if (t99 != 103LLU) { NG(); } else { ; }
	
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

