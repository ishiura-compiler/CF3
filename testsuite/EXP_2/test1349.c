#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile int32_t t0 = 43;
int64_t x7 = 54LL;
int64_t x11 = -1LL;
int32_t t3 = 21;
int32_t x20 = 149829383;
static int16_t x22 = INT16_MAX;
int32_t t5 = -1889;
int64_t x28 = -76234LL;
static int16_t x34 = INT16_MIN;
int64_t x40 = INT64_MAX;
int64_t x41 = -1991278980LL;
int16_t x46 = INT16_MIN;
static int32_t x55 = -3003141;
volatile int8_t x59 = -12;
int8_t x60 = INT8_MIN;
int16_t x61 = INT16_MAX;
uint16_t x63 = UINT16_MAX;
int16_t x65 = INT16_MAX;
int32_t x71 = -1;
volatile int8_t x73 = -1;
uint8_t x76 = 20U;
uint64_t x81 = UINT64_MAX;
volatile int64_t x83 = -1LL;
static int8_t x84 = -25;
static volatile int32_t t20 = -1399991;
uint8_t x86 = 1U;
int32_t t22 = -911;
volatile int32_t t23 = 3113496;
static uint64_t x97 = 19LLU;
volatile uint16_t x99 = UINT16_MAX;
static int64_t x103 = INT64_MIN;
uint32_t x118 = 285709201U;
volatile uint16_t x120 = 11706U;
static volatile uint8_t x123 = 0U;
uint8_t x127 = 3U;
int64_t x137 = INT64_MIN;
static int32_t x138 = 210827373;
int8_t x139 = -13;
int32_t t34 = -9;
int32_t t35 = 51;
volatile int8_t x146 = INT8_MAX;
uint16_t x148 = 3913U;
static volatile int32_t t36 = 2;
volatile int32_t t37 = -157135749;
int8_t x155 = -1;
int16_t x167 = 15;
int32_t t41 = -27910;
static int8_t x170 = 3;
static int64_t x174 = INT64_MIN;
int64_t x175 = -1LL;
static volatile int32_t t43 = -1740302;
uint8_t x178 = UINT8_MAX;
int8_t x180 = INT8_MIN;
volatile int32_t t44 = 0;
volatile int8_t x185 = -1;
int32_t t46 = -61405;
volatile int8_t x195 = INT8_MIN;
volatile int64_t x197 = INT64_MIN;
int8_t x198 = 7;
int64_t x203 = -1LL;
int64_t x204 = INT64_MIN;
int32_t x205 = INT32_MAX;
uint8_t x210 = 29U;
volatile int8_t x216 = 23;
static int32_t t53 = -186092929;
uint64_t x219 = 194LLU;
volatile int16_t x220 = 1478;
uint16_t x228 = 75U;
int16_t x231 = INT16_MAX;
int16_t x234 = INT16_MAX;
volatile int64_t x242 = INT64_MAX;
static int32_t t60 = -58;
uint8_t x249 = 3U;
int32_t t64 = 16;
static int32_t x261 = INT32_MIN;
volatile int32_t t65 = -352525369;
int64_t x271 = -1LL;
static uint64_t x280 = UINT64_MAX;
uint32_t x286 = 17U;
volatile int32_t t71 = -1208;
volatile uint32_t x290 = 27U;
int64_t x291 = -31044LL;
int8_t x296 = 4;
static volatile int32_t x298 = INT32_MIN;
int32_t t74 = 1357845;
uint8_t x304 = UINT8_MAX;
int64_t x309 = 5093089LL;
static volatile int8_t x312 = INT8_MIN;
static int16_t x313 = -1;
static int16_t x318 = INT16_MIN;
volatile int32_t t79 = 119485;
volatile uint32_t x326 = UINT32_MAX;
int32_t x327 = -487415;
static volatile int32_t t81 = 0;
uint8_t x332 = 6U;
static int32_t t82 = 13;
static int64_t x336 = INT64_MIN;
uint16_t x347 = 0U;
static volatile int32_t t86 = 19;
int64_t x349 = INT64_MIN;
int8_t x351 = INT8_MIN;
static uint8_t x356 = 2U;
int32_t t88 = -480097;
int64_t x358 = -1LL;
static int8_t x364 = -1;
uint8_t x367 = 3U;
int64_t x369 = INT64_MIN;
static uint32_t x372 = 7971826U;
int32_t t92 = 46584;
int16_t x378 = -1;
int32_t t95 = -10;
uint16_t x385 = 10U;
int8_t x387 = INT8_MIN;
int64_t x389 = 48496440626LL;
volatile uint32_t x392 = 2312555U;
static int32_t t97 = -6746181;
int16_t x397 = INT16_MAX;
static int64_t x400 = -1LL;


void f0(void) {
	int32_t x1 = -36917303;
	volatile int8_t x2 = INT8_MAX;
	int16_t x4 = INT16_MAX;

	t0 = ((x1^(x2==x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile uint64_t x6 = 596333LLU;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 251764636;

	t1 = ((x5^(x6==x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 324768U;
	static volatile int64_t x10 = -16623LL;
	volatile uint32_t x12 = 253176U;
	static int32_t t2 = 43701649;

	t2 = ((x9^(x10==x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -6094;
	int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	int16_t x16 = 15;

	t3 = ((x13^(x14==x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint32_t x18 = UINT32_MAX;
	static uint16_t x19 = 8071U;
	volatile int32_t t4 = 7;

	t4 = ((x17^(x18==x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int32_t x23 = -681639306;
	volatile int64_t x24 = INT64_MIN;

	t5 = ((x21^(x22==x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = 162910126180LLU;
	volatile uint32_t x27 = UINT32_MAX;
	static int32_t t6 = -23;

	t6 = ((x25^(x26==x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -16665175065LL;
	static int64_t x30 = INT64_MAX;
	int32_t x31 = INT32_MIN;
	int8_t x32 = 22;
	static volatile int32_t t7 = 0;

	t7 = ((x29^(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = -1LL;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -1051437742;

	t8 = ((x33^(x34==x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	int8_t x38 = INT8_MIN;
	static volatile int64_t x39 = 5761895639LL;
	volatile int32_t t9 = 451895;

	t9 = ((x37^(x38==x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x42 = 128732079049LLU;
	uint8_t x43 = 51U;
	static volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -30;

	t10 = ((x41^(x42==x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int16_t x47 = 1970;
	static int32_t x48 = -1;
	volatile int32_t t11 = -149616;

	t11 = ((x45^(x46==x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 431U;
	uint16_t x50 = 1916U;
	volatile uint8_t x51 = 116U;
	int64_t x52 = INT64_MAX;
	int32_t t12 = -27247550;

	t12 = ((x49^(x50==x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x54 = UINT16_MAX;
	int16_t x56 = 4904;
	int32_t t13 = -202;

	t13 = ((x53^(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MIN;
	int32_t t14 = -30307556;

	t14 = ((x57^(x58==x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x62 = 71U;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -9104;

	t15 = ((x61^(x62==x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 2;
	uint32_t x67 = 30313854U;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 708529;

	t16 = ((x65^(x66==x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int32_t x70 = -94214688;
	int16_t x72 = 7;
	volatile int32_t t17 = 427600946;

	t17 = ((x69^(x70==x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 755565639599521LL;
	static int8_t x75 = 0;
	volatile int32_t t18 = -935152319;

	t18 = ((x73^(x74==x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 52;
	int32_t x78 = INT32_MIN;
	volatile uint32_t x79 = UINT32_MAX;
	int32_t x80 = -25;
	int32_t t19 = -3;

	t19 = ((x77^(x78==x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = 247;

	t20 = ((x81^(x82==x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 34564U;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -1360993;

	t21 = ((x85^(x86==x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x90 = -6;
	volatile int16_t x91 = -898;
	uint32_t x92 = UINT32_MAX;

	t22 = ((x89^(x90==x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MAX;
	volatile int8_t x96 = -1;

	t23 = ((x93^(x94==x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 186U;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -305;

	t24 = ((x97^(x98==x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 398U;
	uint64_t x102 = UINT64_MAX;
	static int32_t x104 = -649677080;
	int32_t t25 = -1283494;

	t25 = ((x101^(x102==x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	static volatile int64_t x108 = 101618865530715018LL;
	volatile int32_t t26 = -46;

	t26 = ((x105^(x106==x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 10U;
	static uint8_t x110 = 2U;
	volatile uint32_t x111 = 52327U;
	int32_t x112 = INT32_MAX;
	int32_t t27 = -55105;

	t27 = ((x109^(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -2;
	static int16_t x114 = -184;
	uint32_t x115 = 0U;
	int16_t x116 = -47;
	volatile int32_t t28 = -57921552;

	t28 = ((x113^(x114==x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x119 = 0;
	int32_t t29 = -36549;

	t29 = ((x117^(x118==x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -3;
	int16_t x122 = -1;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 3;

	t30 = ((x121^(x122==x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	static uint64_t x126 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 30;

	t31 = ((x125^(x126==x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int8_t x130 = INT8_MIN;
	static volatile int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -13596046;

	t32 = ((x129^(x130==x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 6914LL;
	volatile uint16_t x134 = 6U;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = -102749840;

	t33 = ((x133^(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x140 = INT64_MAX;

	t34 = ((x137^(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 121822;
	uint16_t x142 = 16064U;
	uint16_t x143 = 4289U;
	uint32_t x144 = 388U;

	t35 = ((x141^(x142==x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x147 = INT16_MAX;

	t36 = ((x145^(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -3853;
	int16_t x150 = INT16_MIN;
	volatile uint16_t x151 = 4U;
	uint64_t x152 = 9LLU;

	t37 = ((x149^(x150==x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	uint16_t x154 = 6167U;
	uint8_t x156 = 3U;
	volatile int32_t t38 = 105;

	t38 = ((x153^(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = 12;
	uint32_t x158 = 1U;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;
	static int32_t t39 = 0;

	t39 = ((x157^(x158==x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = 1U;
	int16_t x163 = -1;
	int16_t x164 = 403;
	static int32_t t40 = 224;

	t40 = ((x161^(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 3;
	static volatile uint64_t x166 = 1068456LLU;
	volatile int32_t x168 = INT32_MIN;

	t41 = ((x165^(x166==x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x169 = 17792U;
	static volatile int32_t x171 = -1475;
	int32_t x172 = -1;
	volatile int32_t t42 = 669526;

	t42 = ((x169^(x170==x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 136202614175LLU;
	static volatile uint64_t x176 = 75027491493822LLU;

	t43 = ((x173^(x174==x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 7U;
	int32_t x179 = INT32_MAX;

	t44 = ((x177^(x178==x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile uint16_t x182 = 180U;
	uint32_t x183 = 734U;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 18579252;

	t45 = ((x181^(x182==x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 981LLU;
	int16_t x188 = INT16_MAX;

	t46 = ((x185^(x186==x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 923377166419LL;
	int64_t x190 = 9379046LL;
	int8_t x191 = -1;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 21632178;

	t47 = ((x189^(x190==x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1;
	uint8_t x194 = 43U;
	uint32_t x196 = 2546885U;
	int32_t t48 = 2400662;

	t48 = ((x193^(x194==x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x199 = -1;
	volatile uint64_t x200 = 19LLU;
	int32_t t49 = 24456215;

	t49 = ((x197^(x198==x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MIN;
	uint8_t x202 = 10U;
	int32_t t50 = 296;

	t50 = ((x201^(x202==x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MAX;
	uint32_t x208 = UINT32_MAX;
	static int32_t t51 = 3;

	t51 = ((x205^(x206==x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 1205839;
	int32_t x211 = -1;
	int32_t x212 = -21;
	int32_t t52 = -16565441;

	t52 = ((x209^(x210==x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = 7U;
	static int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;

	t53 = ((x213^(x214==x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = -1;
	int32_t t54 = 43465;

	t54 = ((x217^(x218==x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1464833317LL;
	volatile int32_t x222 = INT32_MAX;
	int32_t x223 = 2;
	volatile int64_t x224 = -1LL;
	static volatile int32_t t55 = -6946;

	t55 = ((x221^(x222==x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -45;
	static uint8_t x226 = UINT8_MAX;
	static uint32_t x227 = 3571U;
	int32_t t56 = -22778;

	t56 = ((x225^(x226==x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 47U;
	volatile int32_t x230 = 322615581;
	int32_t x232 = -48349553;
	static volatile int32_t t57 = -14544;

	t57 = ((x229^(x230==x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	int8_t x235 = -7;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = 540809;

	t58 = ((x233^(x234==x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 74309U;
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -6474;

	t59 = ((x237^(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 224;
	uint64_t x243 = 438027741194LLU;
	int16_t x244 = INT16_MIN;

	t60 = ((x241^(x242==x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 513579U;
	volatile int32_t x246 = INT32_MAX;
	int8_t x247 = -1;
	static int64_t x248 = INT64_MIN;
	int32_t t61 = -394387055;

	t61 = ((x245^(x246==x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 3047647886LL;
	volatile int32_t x251 = INT32_MAX;
	uint32_t x252 = 450589302U;
	volatile int32_t t62 = 83;

	t62 = ((x249^(x250==x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = -1LL;
	int16_t x255 = -55;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -6004;

	t63 = ((x253^(x254==x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -118;
	static int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MAX;
	uint8_t x260 = 0U;

	t64 = ((x257^(x258==x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x262 = 12U;
	int16_t x263 = 6;
	int64_t x264 = INT64_MAX;

	t65 = ((x261^(x262==x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static volatile int64_t x267 = INT64_MIN;
	volatile int64_t x268 = -945752678528481LL;
	static int32_t t66 = -156200395;

	t66 = ((x265^(x266==x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -91;
	uint8_t x270 = UINT8_MAX;
	volatile int64_t x272 = INT64_MIN;
	static int32_t t67 = -4925788;

	t67 = ((x269^(x270==x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 8551502090814102LLU;
	volatile uint16_t x274 = 19U;
	uint64_t x275 = 2210108983203328288LLU;
	static uint64_t x276 = UINT64_MAX;
	int32_t t68 = 519930174;

	t68 = ((x273^(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = 1645977604U;
	int32_t x279 = INT32_MAX;
	static volatile int32_t t69 = 1;

	t69 = ((x277^(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = -1;
	uint32_t x283 = 96857295U;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 105;

	t70 = ((x281^(x282==x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MIN;

	t71 = ((x285^(x286==x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 754237739219092456LLU;
	volatile uint16_t x292 = 5U;
	static volatile int32_t t72 = -7262;

	t72 = ((x289^(x290==x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 4U;
	volatile uint8_t x294 = 8U;
	int16_t x295 = 13;
	volatile int32_t t73 = 3;

	t73 = ((x293^(x294==x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 98U;
	uint64_t x299 = 155943LLU;
	uint32_t x300 = UINT32_MAX;

	t74 = ((x297^(x298==x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MAX;
	static int64_t x303 = INT64_MAX;
	static int32_t t75 = -29;

	t75 = ((x301^(x302==x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	static uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = 611025688U;
	static int32_t t76 = -34601;

	t76 = ((x305^(x306==x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 93U;
	volatile int32_t x311 = INT32_MIN;
	int32_t t77 = -1;

	t77 = ((x309^(x310==x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	static int64_t x315 = -1LL;
	int64_t x316 = INT64_MAX;
	static int32_t t78 = -1;

	t78 = ((x313^(x314==x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 507210493621LLU;
	uint8_t x319 = 116U;
	uint8_t x320 = UINT8_MAX;

	t79 = ((x317^(x318==x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static int8_t x322 = -48;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = -1;
	int32_t t80 = -32608680;

	t80 = ((x321^(x322==x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	volatile int16_t x328 = INT16_MIN;

	t81 = ((x325^(x326==x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	static volatile int8_t x330 = -6;
	uint16_t x331 = UINT16_MAX;

	t82 = ((x329^(x330==x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -1;
	int32_t x334 = -1;
	uint8_t x335 = 3U;
	volatile int32_t t83 = 49;

	t83 = ((x333^(x334==x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = -1LL;
	static int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	static int32_t t84 = -65327;

	t84 = ((x337^(x338==x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static uint16_t x342 = 45U;
	int8_t x343 = -1;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 81848;

	t85 = ((x341^(x342==x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -103167433;
	int16_t x346 = -1;
	uint32_t x348 = 104U;

	t86 = ((x345^(x346==x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -30;
	int32_t x352 = -1;
	static volatile int32_t t87 = -19071;

	t87 = ((x349^(x350==x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	volatile int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;

	t88 = ((x353^(x354==x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	static volatile int16_t x359 = INT16_MIN;
	static int64_t x360 = -1LL;
	int32_t t89 = 77946;

	t89 = ((x357^(x358==x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = 31876U;
	volatile int32_t t90 = -946784;

	t90 = ((x361^(x362==x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -1008261;

	t91 = ((x365^(x366==x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = INT32_MIN;

	t92 = ((x369^(x370==x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	volatile int8_t x375 = INT8_MIN;
	static int64_t x376 = INT64_MIN;
	int32_t t93 = -767943;

	t93 = ((x373^(x374==x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x379 = -251098958424009741LL;
	int64_t x380 = 227857LL;
	int32_t t94 = 21575;

	t94 = ((x377^(x378==x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static int8_t x382 = -1;
	int64_t x383 = INT64_MIN;
	int32_t x384 = -1;

	t95 = ((x381^(x382==x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 5U;
	static volatile uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = 19691196;

	t96 = ((x385^(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MAX;
	int64_t x391 = INT64_MIN;

	t97 = ((x389^(x390==x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static uint16_t x394 = 25346U;
	int8_t x395 = -1;
	uint32_t x396 = 24210U;
	volatile int32_t t98 = -1;

	t98 = ((x393^(x394==x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	int32_t x399 = INT32_MAX;
	int32_t t99 = 373371;

	t99 = ((x397^(x398==x399))<=x400);

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

