#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
uint16_t x3 = 7U;
int16_t x4 = INT16_MIN;
int8_t x5 = 6;
volatile int32_t x6 = 56020360;
int8_t x16 = -4;
volatile int64_t x17 = INT64_MIN;
volatile int64_t t4 = -1909604LL;
volatile int32_t x23 = 482091752;
volatile int8_t x24 = -1;
static int32_t x26 = 8116;
int32_t t6 = 6697352;
volatile int8_t x30 = 1;
int8_t x38 = 3;
int16_t x40 = INT16_MAX;
uint32_t x43 = 7U;
int32_t x47 = INT32_MIN;
volatile int32_t t12 = -2049;
volatile int64_t x58 = INT64_MIN;
static int8_t x60 = 0;
volatile int64_t t15 = 1002772017LL;
int8_t x65 = INT8_MIN;
int64_t x67 = -1LL;
int16_t x70 = 5048;
uint16_t x74 = UINT16_MAX;
static int16_t x75 = -39;
int32_t x79 = INT32_MIN;
static int64_t x83 = -1LL;
volatile int64_t t20 = 6793026981396LL;
static uint64_t x86 = 1970181866095LLU;
int16_t x90 = INT16_MIN;
static volatile int32_t t22 = 873149;
int16_t x100 = INT16_MIN;
volatile int8_t x101 = 45;
int16_t x108 = -1;
int32_t x118 = 1;
uint8_t x119 = 1U;
static int8_t x120 = INT8_MAX;
static uint64_t x123 = 19748643122222LLU;
uint16_t x125 = 1333U;
static int64_t x127 = 130825641487009689LL;
volatile int32_t t31 = 206019526;
int32_t x130 = INT32_MAX;
static uint32_t x131 = 8598305U;
volatile uint64_t t32 = 46260LLU;
int64_t x142 = -1LL;
volatile int64_t t35 = 56294739661LL;
int64_t x149 = INT64_MAX;
uint8_t x151 = 1U;
int64_t t37 = 10LL;
volatile int32_t x155 = -2;
volatile int32_t t40 = -54828528;
volatile uint64_t t41 = 7207892065199818LLU;
static int16_t x179 = INT16_MAX;
volatile uint8_t x185 = UINT8_MAX;
int16_t x191 = -1;
volatile uint64_t t47 = UINT64_MAX;
int64_t x200 = -1LL;
int8_t x203 = 37;
static int8_t x204 = 0;
uint8_t x209 = UINT8_MAX;
int64_t x213 = -1671LL;
int32_t x216 = INT32_MAX;
volatile uint64_t t55 = 8438606755437442LLU;
volatile int64_t t57 = INT64_MAX;
int32_t x233 = -1;
volatile uint32_t t58 = UINT32_MAX;
int32_t t59 = -7521719;
volatile int64_t x243 = -133LL;
uint64_t t60 = 845725205LLU;
int32_t x245 = -5494;
int16_t x247 = INT16_MIN;
int8_t x248 = INT8_MIN;
volatile int32_t t61 = -1000;
uint64_t x250 = UINT64_MAX;
int8_t x253 = INT8_MIN;
int16_t x256 = 102;
int64_t x263 = -1LL;
int32_t t66 = -276;
int8_t x269 = INT8_MIN;
volatile int32_t x270 = INT32_MIN;
int64_t x276 = INT64_MIN;
volatile int64_t t68 = -1580497511LL;
int8_t x282 = INT8_MAX;
int32_t x286 = -497683;
uint16_t x288 = 242U;
volatile uint64_t t71 = 28669LLU;
int64_t x296 = -1LL;
int64_t t73 = 1153LL;
volatile int64_t x300 = INT64_MAX;
uint32_t t75 = 63208441U;
int16_t x305 = 4;
int32_t x315 = INT32_MAX;
volatile int16_t x320 = INT16_MIN;
volatile uint64_t t80 = UINT64_MAX;
static int16_t x326 = -1;
uint16_t x338 = 384U;
int64_t x344 = INT64_MIN;
int8_t x347 = INT8_MAX;
uint32_t x351 = 37963U;
static int64_t x352 = -2144068314852LL;
int64_t x357 = INT64_MIN;
int32_t x361 = INT32_MIN;
int16_t x367 = -1;
static volatile int32_t t92 = -194559;
uint64_t x376 = UINT64_MAX;
static uint8_t x384 = 115U;
static int16_t x386 = -1;
static uint16_t x391 = 2U;
int16_t x392 = INT16_MAX;
int64_t x394 = INT64_MIN;
int32_t t99 = INT32_MAX;


void f0(void) {
	static volatile uint16_t x1 = 54U;
	volatile int32_t t0 = 48389;

	t0 = ((x1^(x2==x3))|x4);

	if (t0 != -32714) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MIN;
	uint16_t x8 = 3960U;
	int32_t t1 = -3;

	t1 = ((x5^(x6==x7))|x8);

	if (t1 != 3966) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 69324692LL;
	int64_t x10 = -1LL;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 120106939U;
	int64_t t2 = 1840732249319660LL;

	t2 = ((x9^(x10==x11))|x12);

	if (t2 != 120188863LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile int8_t x14 = INT8_MIN;
	static volatile int8_t x15 = 0;
	volatile int32_t t3 = 157;

	t3 = ((x13^(x14==x15))|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = -1;
	uint32_t x19 = 23492U;
	int32_t x20 = INT32_MIN;

	t4 = ((x17^(x18==x19))|x20);

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 4942U;
	static uint8_t x22 = UINT8_MAX;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = ((x21^(x22==x23))|x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x27 = 49707LL;
	int16_t x28 = -1019;

	t6 = ((x25^(x26==x27))|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x31 = 7344LLU;
	int16_t x32 = 4;
	volatile int32_t t7 = 6064;

	t7 = ((x29^(x30==x31))|x32);

	if (t7 != -32764) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -27;
	static volatile int64_t x34 = INT64_MAX;
	int8_t x35 = INT8_MIN;
	int16_t x36 = 451;
	int32_t t8 = -1035104654;

	t8 = ((x33^(x34==x35))|x36);

	if (t8 != -25) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	static int64_t t9 = INT64_MAX;

	t9 = ((x37^(x38==x39))|x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	volatile int16_t x42 = -14959;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = -134988;

	t10 = ((x41^(x42==x43))|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 21;
	static int8_t x46 = -1;
	int32_t x48 = -1;
	int32_t t11 = -1090612;

	t11 = ((x45^(x46==x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	int16_t x50 = -1;
	int32_t x51 = INT32_MIN;
	int16_t x52 = 62;

	t12 = ((x49^(x50==x51))|x52);

	if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = -1;
	int32_t x55 = -261455;
	static uint32_t x56 = 81896U;
	static volatile uint32_t t13 = 38079U;

	t13 = ((x53^(x54==x55))|x56);

	if (t13 != 131071U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 749;
	static int8_t x59 = INT8_MAX;
	volatile int32_t t14 = -3109791;

	t14 = ((x57^(x58==x59))|x60);

	if (t14 != 749) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 0U;
	uint32_t x62 = 3978U;
	volatile uint32_t x63 = 236U;
	int64_t x64 = -1LL;

	t15 = ((x61^(x62==x63))|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 14806;

	t16 = ((x65^(x66==x67))|x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -490LL;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -1;
	static int64_t t17 = 128101314710651LL;

	t17 = ((x69^(x70==x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 13048;

	t18 = ((x73^(x74==x75))|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	uint8_t x78 = 100U;
	int32_t x80 = -26;
	volatile int32_t t19 = -40;

	t19 = ((x77^(x78==x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	int32_t x82 = 522;
	int32_t x84 = 1;

	t20 = ((x81^(x82==x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 188;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = -67455LL;

	t21 = ((x85^(x86==x87))|x88);

	if (t21 != -9223372036854775620LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = 6295;
	static uint8_t x91 = 1U;
	static uint8_t x92 = 1U;

	t22 = ((x89^(x90==x91))|x92);

	if (t22 != 6295) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = -6;
	uint32_t x96 = 29207U;
	static volatile uint32_t t23 = UINT32_MAX;

	t23 = ((x93^(x94==x95))|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	volatile uint64_t x98 = UINT64_MAX;
	int64_t x99 = 15380322278LL;
	int32_t t24 = 15091271;

	t24 = ((x97^(x98==x99))|x100);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 0;
	int8_t x103 = 5;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -8775178;

	t25 = ((x101^(x102==x103))|x104);

	if (t25 != -2147483603) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MIN;
	uint16_t x107 = 0U;
	volatile int32_t t26 = 8357;

	t26 = ((x105^(x106==x107))|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -586;
	volatile int32_t x110 = -1;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	static uint64_t t27 = UINT64_MAX;

	t27 = ((x109^(x110==x111))|x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 1;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 9881LLU;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 6461;

	t28 = ((x113^(x114==x115))|x116);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	int64_t t29 = -13888653773907229LL;

	t29 = ((x117^(x118==x119))|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int8_t x122 = -7;
	int32_t x124 = -3207874;
	int32_t t30 = 8694;

	t30 = ((x121^(x122==x123))|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = 40;
	static int8_t x128 = -1;

	t31 = ((x125^(x126==x127))|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 6773628LLU;
	volatile int8_t x132 = -20;

	t32 = ((x129^(x130==x131))|x132);

	if (t32 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	uint32_t x136 = UINT32_MAX;
	uint32_t t33 = UINT32_MAX;

	t33 = ((x133^(x134==x135))|x136);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 44U;
	uint64_t x138 = UINT64_MAX;
	static uint16_t x139 = UINT16_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t34 = 492890;

	t34 = ((x137^(x138==x139))|x140);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int8_t x143 = -1;
	static volatile int64_t x144 = INT64_MIN;

	t35 = ((x141^(x142==x143))|x144);

	if (t35 != -127LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	uint8_t x146 = 0U;
	volatile uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -1LL;
	volatile int64_t t36 = 1132320572LL;

	t36 = ((x145^(x146==x147))|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	volatile int8_t x152 = -1;

	t37 = ((x149^(x150==x151))|x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int64_t x154 = -1LL;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t38 = UINT32_MAX;

	t38 = ((x153^(x154==x155))|x156);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	uint8_t x158 = 1U;
	uint64_t x159 = 4403429542599049497LLU;
	int32_t x160 = 20493;
	static volatile int32_t t39 = -41;

	t39 = ((x157^(x158==x159))|x160);

	if (t39 != 20735) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static volatile uint8_t x162 = 3U;
	uint16_t x163 = 14908U;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161^(x162==x163))|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 214LLU;
	volatile uint32_t x166 = UINT32_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	static int32_t x168 = 20535802;

	t41 = ((x165^(x166==x167))|x168);

	if (t41 != 20535806LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 0U;
	volatile uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 416U;
	int32_t x172 = 96741;
	static int32_t t42 = -131405403;

	t42 = ((x169^(x170==x171))|x172);

	if (t42 != 96741) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 7257088U;
	static int32_t x174 = -278493;
	int32_t x175 = INT32_MAX;
	volatile int8_t x176 = INT8_MIN;
	static volatile uint32_t t43 = 359U;

	t43 = ((x173^(x174==x175))|x176);

	if (t43 != 4294967168U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MAX;
	static uint8_t x178 = 22U;
	volatile int32_t x180 = INT32_MIN;
	int64_t t44 = 91711035323523656LL;

	t44 = ((x177^(x178==x179))|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x182 = -1;
	int16_t x183 = INT16_MAX;
	volatile int32_t x184 = -4;
	static int32_t t45 = -2683040;

	t45 = ((x181^(x182==x183))|x184);

	if (t45 != -4) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 22U;
	static uint16_t x187 = 938U;
	uint16_t x188 = 6926U;
	volatile int32_t t46 = 875450;

	t46 = ((x185^(x186==x187))|x188);

	if (t46 != 7167) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	static int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MIN;

	t47 = ((x189^(x190==x191))|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 17952U;
	int64_t x195 = -1LL;
	int32_t x196 = INT32_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193^(x194==x195))|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	volatile int8_t x198 = -1;
	volatile int8_t x199 = -1;
	volatile int64_t t49 = 1231LL;

	t49 = ((x197^(x198==x199))|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int16_t x202 = -1;
	volatile int32_t t50 = -16955;

	t50 = ((x201^(x202==x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = -1LL;
	uint8_t x207 = 109U;
	int64_t x208 = INT64_MIN;
	static int64_t t51 = -605352LL;

	t51 = ((x205^(x206==x207))|x208);

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MAX;
	uint8_t x212 = 7U;
	volatile int32_t t52 = 4;

	t52 = ((x209^(x210==x211))|x212);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 5U;
	int16_t x215 = -1;
	int64_t t53 = 5085417308156567LL;

	t53 = ((x213^(x214==x215))|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -12698;
	uint64_t x218 = 3674061354867245LLU;
	uint8_t x219 = 5U;
	uint64_t x220 = 696LLU;
	volatile uint64_t t54 = 536318942815LLU;

	t54 = ((x217^(x218==x219))|x220);

	if (t54 != 18446744073709539070LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1LLU;
	volatile int32_t x222 = INT32_MAX;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = 3;

	t55 = ((x221^(x222==x223))|x224);

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -31LL;
	uint8_t x226 = 1U;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 893LLU;
	volatile uint64_t t56 = 13778646LLU;

	t56 = ((x225^(x226==x227))|x228);

	if (t56 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static int16_t x230 = INT16_MIN;
	uint64_t x231 = 4249929817286LLU;
	static uint16_t x232 = 510U;

	t57 = ((x229^(x230==x231))|x232);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -1;
	volatile uint16_t x235 = 0U;
	static volatile uint32_t x236 = 53U;

	t58 = ((x233^(x234==x235))|x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 5654;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 1U;
	uint16_t x240 = UINT16_MAX;

	t59 = ((x237^(x238==x239))|x240);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 241380LLU;
	int32_t x242 = INT32_MAX;
	static uint64_t x244 = 422889652385467LLU;

	t60 = ((x241^(x242==x243))|x244);

	if (t60 != 422889652485887LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 37U;

	t61 = ((x245^(x246==x247))|x248);

	if (t61 != -118) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MAX;
	volatile uint32_t x251 = 114154U;
	uint32_t x252 = 369U;
	uint32_t t62 = 207355U;

	t62 = ((x249^(x250==x251))|x252);

	if (t62 != 32767U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = 1072513LL;
	volatile uint16_t x255 = 1972U;
	volatile int32_t t63 = 527259018;

	t63 = ((x253^(x254==x255))|x256);

	if (t63 != -26) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 9014246LLU;
	int16_t x258 = 1781;
	int64_t x259 = INT64_MIN;
	static int8_t x260 = INT8_MIN;
	uint64_t t64 = 1338394254622866LLU;

	t64 = ((x257^(x258==x259))|x260);

	if (t64 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = 257347LLU;
	int64_t x264 = 136791519484805382LL;
	int64_t t65 = 112603893LL;

	t65 = ((x261^(x262==x263))|x264);

	if (t65 != -2027060986LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = 48;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = -1;
	volatile int8_t x268 = INT8_MIN;

	t66 = ((x265^(x266==x267))|x268);

	if (t66 != -79) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = 40;
	int64_t x272 = INT64_MAX;
	volatile int64_t t67 = 212440238195LL;

	t67 = ((x269^(x270==x271))|x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 11U;
	static int32_t x274 = -501;
	static int32_t x275 = INT32_MIN;

	t68 = ((x273^(x274==x275))|x276);

	if (t68 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -48;
	int16_t x278 = 474;
	uint32_t x279 = 11U;
	int16_t x280 = INT16_MAX;
	volatile int32_t t69 = -3;

	t69 = ((x277^(x278==x279))|x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 693U;
	int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	uint32_t t70 = 187080U;

	t70 = ((x281^(x282==x283))|x284);

	if (t70 != 4294967221U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 45104LLU;
	uint64_t x287 = UINT64_MAX;

	t71 = ((x285^(x286==x287))|x288);

	if (t71 != 45298LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 13047U;
	static uint32_t x291 = 1340U;
	uint8_t x292 = UINT8_MAX;
	static volatile uint64_t t72 = UINT64_MAX;

	t72 = ((x289^(x290==x291))|x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1U;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;

	t73 = ((x293^(x294==x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x298 = 8U;
	int16_t x299 = INT16_MIN;
	volatile int64_t t74 = -17LL;

	t74 = ((x297^(x298==x299))|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 42U;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = -1;
	static int16_t x304 = -12;

	t75 = ((x301^(x302==x303))|x304);

	if (t75 != 4294967294U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int32_t x307 = -388893309;
	static int16_t x308 = INT16_MIN;
	int32_t t76 = -3041;

	t76 = ((x305^(x306==x307))|x308);

	if (t76 != -32764) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static volatile int16_t x310 = INT16_MIN;
	static int64_t x311 = 6LL;
	int8_t x312 = -1;
	static volatile int32_t t77 = 59;

	t77 = ((x309^(x310==x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	static int8_t x316 = INT8_MAX;
	volatile int32_t t78 = 39165;

	t78 = ((x313^(x314==x315))|x316);

	if (t78 != -2147483521) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 8U;
	int64_t x318 = INT64_MAX;
	int16_t x319 = -63;
	int32_t t79 = 4908838;

	t79 = ((x317^(x318==x319))|x320);

	if (t79 != -32760) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 142LLU;
	int8_t x322 = 44;
	int64_t x323 = INT64_MIN;
	int8_t x324 = -1;

	t80 = ((x321^(x322==x323))|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int32_t x327 = -244;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -342117196LL;

	t81 = ((x325^(x326==x327))|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -32200169588LL;
	static uint64_t x330 = 32467LLU;
	volatile int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	static volatile int64_t t82 = 0LL;

	t82 = ((x329^(x330==x331))|x332);

	if (t82 != -32200169473LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 502LLU;
	int8_t x334 = -1;
	uint32_t x335 = 218289U;
	int32_t x336 = -16355203;
	volatile uint64_t t83 = 2246536672849457540LLU;

	t83 = ((x333^(x334==x335))|x336);

	if (t83 != 18446744073693196799LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static uint32_t x339 = 2935U;
	static uint64_t x340 = 397645280182131707LLU;
	uint64_t t84 = 40250LLU;

	t84 = ((x337^(x338==x339))|x340);

	if (t84 != 18446744071694048251LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 19U;
	uint8_t x342 = 1U;
	uint64_t x343 = 1020557701996506LLU;
	int64_t t85 = -969275838171673LL;

	t85 = ((x341^(x342==x343))|x344);

	if (t85 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	volatile int8_t x346 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	int64_t t86 = 4193612557936LL;

	t86 = ((x345^(x346==x347))|x348);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MAX;
	int64_t t87 = 1324983189LL;

	t87 = ((x349^(x350==x351))|x352);

	if (t87 != -2144068314852LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -6;
	volatile int32_t t88 = 390451;

	t88 = ((x353^(x354==x355))|x356);

	if (t88 != -6) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = UINT64_MAX;
	static volatile int8_t x359 = 0;
	int64_t x360 = INT64_MAX;
	volatile int64_t t89 = 9612749LL;

	t89 = ((x357^(x358==x359))|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x362 = INT16_MIN;
	static int64_t x363 = -79586554394LL;
	int32_t x364 = -1;
	int32_t t90 = -20;

	t90 = ((x361^(x362==x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -7LL;
	int16_t x366 = -296;
	int32_t x368 = -1;
	int64_t t91 = 32LL;

	t91 = ((x365^(x366==x367))|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MAX;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 52U;
	volatile int16_t x372 = INT16_MAX;

	t92 = ((x369^(x370==x371))|x372);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = -10;
	int16_t x375 = INT16_MIN;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x373^(x374==x375))|x376);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 2092347095598LLU;
	static int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	static volatile uint64_t t94 = 12998338323446370LLU;

	t94 = ((x377^(x378==x379))|x380);

	if (t94 != 2095944040447LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 300U;
	uint8_t x382 = 7U;
	int16_t x383 = -1;
	volatile int32_t t95 = -209;

	t95 = ((x381^(x382==x383))|x384);

	if (t95 != 383) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -449;
	uint32_t x387 = UINT32_MAX;
	static int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 24659656;

	t96 = ((x385^(x386==x387))|x388);

	if (t96 != -450) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint64_t x390 = 20703604320472976LLU;
	static int32_t t97 = 13;

	t97 = ((x389^(x390==x391))|x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 578118U;
	uint8_t x395 = 8U;
	static uint16_t x396 = UINT16_MAX;
	uint32_t t98 = 143U;

	t98 = ((x393^(x394==x395))|x396);

	if (t98 != 589823U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 25U;
	int16_t x398 = -30;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MAX;

	t99 = ((x397^(x398==x399))|x400);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

