#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 646;
uint8_t x7 = 11U;
int64_t x8 = INT64_MIN;
static uint32_t x12 = 3U;
volatile int64_t x15 = 692LL;
int32_t t3 = 1047;
int8_t x38 = -1;
int8_t x45 = -5;
volatile int32_t x49 = INT32_MAX;
uint16_t x50 = 1U;
int8_t x51 = -1;
int16_t x54 = INT16_MAX;
int32_t x58 = -1;
static volatile int32_t t14 = -42916;
uint32_t x76 = 0U;
int32_t x81 = 939;
uint64_t x84 = UINT64_MAX;
int32_t x96 = -1;
static uint8_t x99 = 57U;
volatile int64_t x105 = INT64_MIN;
int32_t t24 = 43241;
static int64_t x127 = INT64_MIN;
volatile uint64_t x129 = UINT64_MAX;
int32_t x133 = 425259242;
volatile int16_t x139 = INT16_MAX;
static volatile uint32_t x141 = 59647U;
uint32_t x144 = 20469515U;
int32_t x147 = 19567;
volatile int64_t x152 = -1LL;
int8_t x155 = INT8_MAX;
int32_t x157 = INT32_MAX;
volatile int32_t t36 = -102254;
uint8_t x165 = UINT8_MAX;
volatile int16_t x168 = -19;
volatile int32_t x169 = INT32_MAX;
volatile uint64_t x171 = 290498661928004LLU;
int8_t x174 = INT8_MIN;
volatile int8_t x175 = INT8_MIN;
volatile uint64_t x179 = UINT64_MAX;
int32_t x180 = INT32_MIN;
int32_t x182 = -7755016;
int32_t t41 = 0;
int32_t x185 = -24;
int16_t x186 = INT16_MIN;
uint8_t x188 = UINT8_MAX;
int8_t x193 = -1;
static uint64_t x199 = 150324365LLU;
uint8_t x201 = UINT8_MAX;
uint16_t x202 = 4796U;
int8_t x203 = INT8_MIN;
volatile uint64_t x212 = 125352153735705016LLU;
int32_t t47 = 62719556;
static volatile uint32_t x219 = 12U;
int32_t t48 = 29914;
int8_t x226 = 18;
int32_t t53 = -7;
int64_t x247 = INT64_MIN;
int64_t x249 = INT64_MIN;
static int64_t x256 = -1LL;
volatile int32_t t57 = -214426;
static volatile int32_t t59 = -905056;
int32_t t60 = 3449462;
volatile uint8_t x283 = UINT8_MAX;
int64_t x291 = INT64_MIN;
static int16_t x295 = INT16_MIN;
static volatile int32_t x297 = -1395942;
int16_t x300 = INT16_MIN;
int32_t t65 = 304414;
static volatile int8_t x303 = INT8_MIN;
static volatile uint32_t x310 = 3840766U;
int64_t x312 = INT64_MIN;
uint32_t x314 = 22411670U;
int16_t x317 = INT16_MIN;
int8_t x321 = INT8_MIN;
static int8_t x328 = INT8_MIN;
static int32_t t72 = -3322;
int32_t x330 = -7348;
int16_t x336 = INT16_MAX;
volatile int32_t x340 = -829624285;
uint64_t x343 = UINT64_MAX;
static int64_t x349 = -1LL;
int32_t x352 = INT32_MIN;
int32_t t78 = -3263390;
volatile uint8_t x353 = 0U;
int8_t x354 = -1;
uint32_t x356 = 1251664U;
int64_t x357 = 938082043295929LL;
uint8_t x365 = 0U;
static uint16_t x366 = 170U;
int16_t x372 = 0;
volatile int32_t t83 = 39;
volatile int64_t x374 = -1LL;
int64_t x382 = 18099LL;
uint32_t x383 = UINT32_MAX;
int16_t x384 = INT16_MAX;
int32_t t86 = -6510;
int32_t x388 = INT32_MIN;
volatile int32_t t88 = 8167;
static uint16_t x396 = UINT16_MAX;
uint32_t x400 = UINT32_MAX;
volatile int64_t x403 = INT64_MIN;
volatile int32_t t91 = 4161;
volatile uint8_t x405 = 11U;
int16_t x408 = INT16_MIN;
static volatile int64_t x409 = -1LL;
int8_t x414 = INT8_MIN;
volatile uint8_t x418 = 115U;
uint32_t x437 = 13155801U;
static int64_t x438 = 3016546264815LL;
volatile int32_t t99 = -3776;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x2 = 5659;
	static int16_t x3 = -1;
	int32_t x4 = -1;

	t0 = (((x1/x2)/x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int32_t x6 = INT32_MIN;
	int32_t t1 = -6;

	t1 = (((x5/x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 3U;
	int64_t x10 = INT64_MAX;
	int16_t x11 = 37;
	volatile int32_t t2 = -631;

	t2 = (((x9/x10)/x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static int8_t x14 = INT8_MIN;
	uint16_t x16 = 31019U;

	t3 = (((x13/x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint32_t x18 = 31590U;
	int32_t x19 = INT32_MAX;
	static int32_t x20 = 580664;
	volatile int32_t t4 = -12;

	t4 = (((x17/x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint8_t x22 = 1U;
	static int8_t x23 = -1;
	int64_t x24 = INT64_MIN;
	int32_t t5 = -72325;

	t5 = (((x21/x22)/x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 10;

	t6 = (((x25/x26)/x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile int64_t x30 = 3623602013LL;
	int32_t x31 = -2319;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -146169;

	t7 = (((x29/x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x39 = 10583U;
	uint8_t x40 = 3U;
	int32_t t8 = -27063718;

	t8 = (((x37/x38)/x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = INT64_MAX;
	int32_t x43 = -2648;
	int64_t x44 = -1LL;
	int32_t t9 = -57;

	t9 = (((x41/x42)/x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x46 = 41758U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = -24;
	static int32_t t10 = -3;

	t10 = (((x45/x46)/x47)<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x52 = -6;
	int32_t t11 = -7;

	t11 = (((x49/x50)/x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 5993U;
	int32_t t12 = 641705342;

	t12 = (((x53/x54)/x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 1909197304LLU;
	int32_t x59 = -1;
	uint64_t x60 = 1687404LLU;
	int32_t t13 = 120047807;

	t13 = (((x57/x58)/x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	static volatile int16_t x63 = 8291;
	int16_t x64 = INT16_MAX;

	t14 = (((x61/x62)/x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	volatile uint32_t x66 = 4U;
	int32_t x67 = -1;
	static int16_t x68 = INT16_MIN;
	int32_t t15 = 1;

	t15 = (((x65/x66)/x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x69 = 3204388792LL;
	int8_t x70 = -1;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = -1;
	volatile int32_t t16 = 817;

	t16 = (((x69/x70)/x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 40928105771430LLU;
	int16_t x74 = INT16_MIN;
	volatile int8_t x75 = -1;
	volatile int32_t t17 = -1;

	t17 = (((x73/x74)/x75)<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 26351U;
	uint8_t x78 = 4U;
	static uint16_t x79 = 26U;
	int8_t x80 = -1;
	volatile int32_t t18 = -5812;

	t18 = (((x77/x78)/x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x82 = -1;
	uint32_t x83 = 5948643U;
	int32_t t19 = -5;

	t19 = (((x81/x82)/x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	int32_t x86 = 13679;
	static int16_t x87 = INT16_MIN;
	uint16_t x88 = 29U;
	int32_t t20 = 15;

	t20 = (((x85/x86)/x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 988429LLU;
	int8_t x94 = -2;
	uint64_t x95 = 23LLU;
	static int32_t t21 = -3224;

	t21 = (((x93/x94)/x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1;
	volatile int16_t x100 = -1;
	static volatile int32_t t22 = 52198625;

	t22 = (((x97/x98)/x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 942;
	int8_t x102 = -1;
	static int32_t x103 = INT32_MAX;
	static volatile int8_t x104 = INT8_MIN;
	int32_t t23 = 15;

	t23 = (((x101/x102)/x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x106 = 216U;
	uint16_t x107 = 4U;
	int64_t x108 = INT64_MIN;

	t24 = (((x105/x106)/x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = -22;
	int32_t t25 = 12;

	t25 = (((x109/x110)/x111)<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = 639;
	int64_t x123 = -1LL;
	volatile uint64_t x124 = 6875LLU;
	int32_t t26 = 881;

	t26 = (((x121/x122)/x123)<x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x125 = 14868U;
	int32_t x126 = INT32_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t27 = -1163;

	t27 = (((x125/x126)/x127)<x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MAX;
	uint64_t x132 = 63LLU;
	static int32_t t28 = -928;

	t28 = (((x129/x130)/x131)<x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x134 = -11;
	volatile int32_t x135 = INT32_MAX;
	uint16_t x136 = 4697U;
	int32_t t29 = -352412;

	t29 = (((x133/x134)/x135)<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x137 = -1LL;
	volatile int16_t x138 = 1011;
	volatile uint64_t x140 = 16197848976LLU;
	int32_t t30 = 3754161;

	t30 = (((x137/x138)/x139)<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x142 = INT32_MAX;
	uint32_t x143 = UINT32_MAX;
	volatile int32_t t31 = 62;

	t31 = (((x141/x142)/x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 1805U;
	int8_t x146 = -1;
	uint8_t x148 = 20U;
	int32_t t32 = 0;

	t32 = (((x145/x146)/x147)<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = -686;
	volatile int32_t x151 = INT32_MIN;
	static volatile int32_t t33 = 0;

	t33 = (((x149/x150)/x151)<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 305U;
	int8_t x154 = INT8_MAX;
	uint64_t x156 = 5927LLU;
	int32_t t34 = 222;

	t34 = (((x153/x154)/x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x158 = INT32_MAX;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t35 = 32072;

	t35 = (((x157/x158)/x159)<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 63481724LLU;
	int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;

	t36 = (((x161/x162)/x163)<x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x166 = INT64_MAX;
	int8_t x167 = INT8_MAX;
	static int32_t t37 = 85;

	t37 = (((x165/x166)/x167)<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x170 = INT32_MIN;
	static uint16_t x172 = 0U;
	int32_t t38 = 1034476166;

	t38 = (((x169/x170)/x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -685410693597515LL;
	volatile int8_t x176 = -3;
	volatile int32_t t39 = -58505;

	t39 = (((x173/x174)/x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x177 = 4U;
	static uint64_t x178 = UINT64_MAX;
	int32_t t40 = -1;

	t40 = (((x177/x178)/x179)<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -791LL;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;

	t41 = (((x181/x182)/x183)<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x187 = UINT16_MAX;
	volatile int32_t t42 = 51;

	t42 = (((x185/x186)/x187)<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MIN;
	int32_t t43 = 2;

	t43 = (((x193/x194)/x195)<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 73;
	int16_t x198 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	volatile int32_t t44 = -23133;

	t44 = (((x197/x198)/x199)<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x204 = 5;
	volatile int32_t t45 = 1760;

	t45 = (((x201/x202)/x203)<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MAX;
	static volatile int16_t x210 = -2;
	int8_t x211 = -1;
	volatile int32_t t46 = 110;

	t46 = (((x209/x210)/x211)<x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 62U;
	int64_t x214 = 1870959420938701008LL;
	volatile int64_t x215 = 948403113LL;
	int16_t x216 = INT16_MAX;

	t47 = (((x213/x214)/x215)<x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x217 = INT8_MIN;
	int32_t x218 = 11;
	int16_t x220 = INT16_MIN;

	t48 = (((x217/x218)/x219)<x220);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	static volatile int8_t x222 = -18;
	volatile int16_t x223 = 467;
	static int8_t x224 = INT8_MIN;
	static volatile int32_t t49 = -488462;

	t49 = (((x221/x222)/x223)<x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x225 = 48131558556LLU;
	static int8_t x227 = -1;
	uint64_t x228 = 5321LLU;
	int32_t t50 = 7;

	t50 = (((x225/x226)/x227)<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x229 = UINT8_MAX;
	volatile int64_t x230 = INT64_MAX;
	int8_t x231 = INT8_MIN;
	int32_t x232 = -136185349;
	int32_t t51 = 55;

	t51 = (((x229/x230)/x231)<x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MIN;
	volatile uint32_t x235 = 142391232U;
	static int16_t x236 = 4;
	int32_t t52 = 1660075;

	t52 = (((x233/x234)/x235)<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MAX;

	t53 = (((x237/x238)/x239)<x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t54 = -181;

	t54 = (((x241/x242)/x243)<x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 66340768453655LLU;
	uint8_t x246 = 13U;
	int32_t x248 = -72352146;
	volatile int32_t t55 = -1;

	t55 = (((x245/x246)/x247)<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MAX;
	volatile int8_t x252 = -1;
	int32_t t56 = 130095;

	t56 = (((x249/x250)/x251)<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x254 = INT16_MIN;
	int16_t x255 = -1;

	t57 = (((x253/x254)/x255)<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 56U;
	int8_t x258 = 22;
	int32_t x259 = INT32_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t58 = -10998;

	t58 = (((x257/x258)/x259)<x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MAX;
	volatile int16_t x262 = 3277;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;

	t59 = (((x261/x262)/x263)<x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x265 = 17800822476881LLU;
	static volatile uint64_t x266 = UINT64_MAX;
	static int64_t x267 = -157926164626LL;
	static volatile int8_t x268 = -1;

	t60 = (((x265/x266)/x267)<x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -3;
	int8_t x282 = INT8_MIN;
	static int8_t x284 = -1;
	int32_t t61 = -186;

	t61 = (((x281/x282)/x283)<x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	int16_t x288 = 62;
	volatile int32_t t62 = 1;

	t62 = (((x285/x286)/x287)<x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = 8576;
	static uint8_t x292 = UINT8_MAX;
	static int32_t t63 = 46315132;

	t63 = (((x289/x290)/x291)<x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 666878LLU;
	volatile int16_t x294 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t64 = 462607523;

	t64 = (((x293/x294)/x295)<x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x298 = INT64_MAX;
	uint64_t x299 = 100411456205454LLU;

	t65 = (((x297/x298)/x299)<x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x301 = UINT8_MAX;
	static uint64_t x302 = 2178LLU;
	static int32_t x304 = -28455734;
	static volatile int32_t t66 = -1290092;

	t66 = (((x301/x302)/x303)<x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile uint32_t x306 = 15U;
	volatile int16_t x307 = INT16_MIN;
	static uint64_t x308 = 1424210634264074618LLU;
	static volatile int32_t t67 = 1585;

	t67 = (((x305/x306)/x307)<x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x309 = -25499218750LL;
	int64_t x311 = -1211203944240671409LL;
	int32_t t68 = 16372;

	t68 = (((x309/x310)/x311)<x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x313 = 13592U;
	static volatile int8_t x315 = INT8_MIN;
	static int8_t x316 = 2;
	volatile int32_t t69 = 318428;

	t69 = (((x313/x314)/x315)<x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	volatile int64_t x319 = -8105297190678324LL;
	static int32_t x320 = 33927271;
	volatile int32_t t70 = 215263;

	t70 = (((x317/x318)/x319)<x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x322 = INT64_MAX;
	int16_t x323 = -1;
	volatile uint8_t x324 = 3U;
	int32_t t71 = 770976705;

	t71 = (((x321/x322)/x323)<x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x325 = 5U;
	int16_t x326 = -299;
	uint16_t x327 = UINT16_MAX;

	t72 = (((x325/x326)/x327)<x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = 2;
	uint8_t x331 = 59U;
	int64_t x332 = -1564589000LL;
	volatile int32_t t73 = -4;

	t73 = (((x329/x330)/x331)<x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = UINT8_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	static int32_t x335 = INT32_MIN;
	volatile int32_t t74 = 20;

	t74 = (((x333/x334)/x335)<x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	int32_t t75 = 14956450;

	t75 = (((x337/x338)/x339)<x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = 4;
	static int8_t x342 = INT8_MAX;
	int32_t x344 = INT32_MIN;
	static int32_t t76 = 1768618;

	t76 = (((x341/x342)/x343)<x344);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x345 = 4420396LL;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -3;
	volatile int32_t t77 = -851636;

	t77 = (((x345/x346)/x347)<x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x350 = 3092;
	int64_t x351 = -1LL;

	t78 = (((x349/x350)/x351)<x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x355 = INT8_MIN;
	static volatile int32_t t79 = 151585;

	t79 = (((x353/x354)/x355)<x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x358 = -1;
	volatile int16_t x359 = 218;
	volatile int32_t x360 = -1;
	volatile int32_t t80 = 119444;

	t80 = (((x357/x358)/x359)<x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x361 = 27889U;
	static int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	int8_t x364 = -1;
	int32_t t81 = 928079;

	t81 = (((x361/x362)/x363)<x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x367 = INT32_MIN;
	static int32_t x368 = -283785002;
	static volatile int32_t t82 = -8219961;

	t82 = (((x365/x366)/x367)<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	static volatile uint32_t x371 = UINT32_MAX;

	t83 = (((x369/x370)/x371)<x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 25U;
	volatile int32_t t84 = -662;

	t84 = (((x373/x374)/x375)<x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x377 = 43;
	int32_t x378 = INT32_MAX;
	int8_t x379 = 14;
	uint64_t x380 = 2819807988829LLU;
	static int32_t t85 = 1992;

	t85 = (((x377/x378)/x379)<x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x381 = UINT16_MAX;

	t86 = (((x381/x382)/x383)<x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MAX;
	static int8_t x386 = 1;
	static int16_t x387 = INT16_MAX;
	int32_t t87 = 1521;

	t87 = (((x385/x386)/x387)<x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = -5844065;
	static volatile int64_t x390 = INT64_MIN;
	int8_t x391 = -32;
	int32_t x392 = INT32_MAX;

	t88 = (((x389/x390)/x391)<x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x393 = 250;
	uint16_t x394 = 218U;
	int32_t x395 = INT32_MIN;
	int32_t t89 = 96897;

	t89 = (((x393/x394)/x395)<x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x397 = -1;
	int64_t x398 = INT64_MAX;
	static int8_t x399 = 1;
	volatile int32_t t90 = 14;

	t90 = (((x397/x398)/x399)<x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = -1;
	static int16_t x402 = INT16_MIN;
	int64_t x404 = INT64_MIN;

	t91 = (((x401/x402)/x403)<x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x406 = INT16_MIN;
	static uint32_t x407 = UINT32_MAX;
	volatile int32_t t92 = -6185;

	t92 = (((x405/x406)/x407)<x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x410 = 26;
	uint16_t x411 = 63U;
	static uint32_t x412 = 292940U;
	volatile int32_t t93 = 832;

	t93 = (((x409/x410)/x411)<x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x413 = -1;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = -50;
	volatile int32_t t94 = 66802;

	t94 = (((x413/x414)/x415)<x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -1;
	int64_t x419 = -1LL;
	static uint8_t x420 = 6U;
	int32_t t95 = 48585;

	t95 = (((x417/x418)/x419)<x420);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = -1;
	int16_t x427 = -1;
	int32_t x428 = INT32_MAX;
	int32_t t96 = -7;

	t96 = (((x425/x426)/x427)<x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = INT32_MIN;
	volatile uint64_t x430 = 26LLU;
	int64_t x431 = INT64_MIN;
	int32_t x432 = -24;
	static int32_t t97 = 110968;

	t97 = (((x429/x430)/x431)<x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = -1;
	static uint64_t x434 = UINT64_MAX;
	volatile int32_t x435 = -1;
	int64_t x436 = INT64_MIN;
	int32_t t98 = -54157;

	t98 = (((x433/x434)/x435)<x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x439 = -1;
	uint8_t x440 = 1U;

	t99 = (((x437/x438)/x439)<x440);

	if (t99 != 1) { NG(); } else { ; }
	
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

