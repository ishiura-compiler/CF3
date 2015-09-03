#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int8_t x7 = -1;
static volatile int32_t x9 = INT32_MIN;
static volatile int32_t t2 = -19;
static volatile int64_t x13 = -1LL;
static volatile int64_t x23 = INT64_MAX;
static int64_t x30 = 1715650LL;
uint32_t x31 = 221U;
int64_t x33 = INT64_MIN;
int8_t x39 = 3;
volatile int32_t t9 = 406203000;
volatile int32_t t10 = -8202;
static int8_t x47 = INT8_MIN;
uint32_t x50 = 338831972U;
volatile int32_t t12 = 666;
int64_t x60 = INT64_MIN;
uint16_t x64 = 1025U;
int32_t x72 = -1;
static uint8_t x74 = UINT8_MAX;
int16_t x76 = INT16_MAX;
int64_t x77 = INT64_MAX;
int64_t x90 = 683152941884770LL;
static volatile int8_t x91 = INT8_MAX;
static uint32_t x92 = 4845U;
uint8_t x93 = UINT8_MAX;
static int32_t x94 = INT32_MIN;
int8_t x95 = 0;
volatile uint16_t x108 = 2U;
int32_t x110 = -1;
volatile int16_t x114 = INT16_MIN;
int32_t x116 = 249;
int32_t x120 = INT32_MIN;
int8_t x125 = INT8_MIN;
int8_t x132 = INT8_MIN;
uint8_t x150 = UINT8_MAX;
volatile uint8_t x156 = 0U;
int32_t t36 = 8162946;
static volatile int32_t t37 = 1509126;
int64_t x178 = -10116476374LL;
static uint32_t x180 = 25U;
int64_t x184 = -11557790643395822LL;
uint64_t x197 = UINT64_MAX;
int32_t t44 = -1192840;
uint16_t x203 = 104U;
static int64_t x204 = -1228309688748443LL;
volatile uint16_t x207 = UINT16_MAX;
uint16_t x213 = 61U;
int8_t x215 = -1;
static uint64_t x216 = 10270LLU;
static int32_t t48 = 568558;
static int8_t x221 = INT8_MIN;
int16_t x222 = INT16_MIN;
int64_t x223 = INT64_MIN;
uint32_t x224 = 21005410U;
static int16_t x227 = -1;
int32_t t50 = 945;
static int32_t x232 = INT32_MIN;
static uint32_t x236 = 1423776U;
static int64_t x239 = -1679847LL;
int8_t x244 = 11;
static int32_t x247 = INT32_MIN;
static volatile int64_t x249 = 60026022595LL;
volatile int32_t x257 = -1;
uint16_t x264 = 24U;
int16_t x269 = 11;
volatile int32_t x275 = -14020482;
int8_t x280 = 9;
uint16_t x287 = 28U;
uint8_t x288 = 1U;
volatile int32_t t65 = -146474176;
int32_t x293 = -62920;
uint64_t x296 = 4644646144696LLU;
uint16_t x297 = 1U;
uint64_t x299 = 4566489317172091084LLU;
static volatile uint8_t x310 = 2U;
volatile uint8_t x311 = 11U;
uint64_t x314 = 81715815LLU;
uint32_t x316 = UINT32_MAX;
int32_t x331 = -30;
volatile int8_t x336 = -1;
static int8_t x349 = -40;
static int16_t x350 = -1;
int8_t x351 = -1;
uint64_t x353 = 776LLU;
int64_t x355 = -1LL;
int32_t x356 = -389324;
int32_t t80 = 7497423;
volatile int32_t x367 = -1;
int32_t x372 = INT32_MIN;
volatile int32_t t87 = 0;
uint8_t x391 = 3U;
uint32_t x394 = UINT32_MAX;
int32_t x402 = INT32_MAX;
int16_t x403 = -1;
int32_t x406 = -1;
static int16_t x407 = -1533;
static volatile int32_t t91 = 755171;
int16_t x413 = INT16_MIN;
int16_t x414 = -31;
uint64_t x416 = 6576580990LLU;
int64_t x420 = -1LL;
uint16_t x433 = 229U;
volatile uint64_t x436 = UINT64_MAX;
volatile int16_t x445 = INT16_MIN;
static int16_t x448 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 1421;

	t0 = (((x1^x2)+x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MIN;
	volatile int8_t x8 = -1;
	int32_t t1 = 1;

	t1 = (((x5^x6)+x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	uint16_t x11 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;

	t2 = (((x9^x10)+x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x14 = 1U;
	volatile int32_t x15 = -754607275;
	int8_t x16 = -5;
	static int32_t t3 = 11132139;

	t3 = (((x13^x14)+x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	volatile int32_t x18 = INT32_MIN;
	static int64_t x19 = INT64_MAX;
	volatile uint16_t x20 = 11234U;
	int32_t t4 = 21269441;

	t4 = (((x17^x18)+x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 415490098;
	volatile uint64_t x22 = UINT64_MAX;
	static uint64_t x24 = UINT64_MAX;
	static int32_t t5 = 29617366;

	t5 = (((x21^x22)+x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 2594;
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 1U;
	uint64_t x28 = 3944043115LLU;
	int32_t t6 = -2160302;

	t6 = (((x25^x26)+x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 239251659;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = 20;

	t7 = (((x29^x30)+x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = INT16_MIN;
	static int16_t x35 = INT16_MAX;
	int64_t x36 = -79728893761743LL;
	volatile int32_t t8 = 771320019;

	t8 = (((x33^x34)+x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	static int8_t x38 = 0;
	int64_t x40 = INT64_MIN;

	t9 = (((x37^x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -46;
	int16_t x43 = -5;
	uint8_t x44 = 2U;

	t10 = (((x41^x42)+x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 0U;
	uint64_t x46 = 11801LLU;
	static uint32_t x48 = 202492U;
	int32_t t11 = -393;

	t11 = (((x45^x46)+x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 4LLU;
	uint64_t x51 = 598093050239LLU;
	static volatile int16_t x52 = -68;

	t12 = (((x49^x50)+x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	static int16_t x54 = -371;
	int8_t x55 = 18;
	static int32_t x56 = INT32_MIN;
	static int32_t t13 = -3986;

	t13 = (((x53^x54)+x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	volatile int32_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	int32_t t14 = -867;

	t14 = (((x57^x58)+x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 0;
	uint32_t x62 = 7591U;
	uint8_t x63 = UINT8_MAX;
	static int32_t t15 = -449741641;

	t15 = (((x61^x62)+x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MAX;
	volatile int32_t t16 = 6222488;

	t16 = (((x69^x70)+x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x73 = 1U;
	volatile int8_t x75 = INT8_MIN;
	int32_t t17 = 6;

	t17 = (((x73^x74)+x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 89439621;

	t18 = (((x77^x78)+x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -12414;
	int32_t x86 = -1;
	int8_t x87 = -8;
	int8_t x88 = INT8_MAX;
	int32_t t19 = -12373667;

	t19 = (((x85^x86)+x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	int32_t t20 = 235;

	t20 = (((x89^x90)+x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x96 = INT32_MAX;
	int32_t t21 = 45;

	t21 = (((x93^x94)+x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = 7890255LL;
	static uint16_t x98 = 7070U;
	int8_t x99 = -3;
	uint16_t x100 = 20532U;
	volatile int32_t t22 = 126272;

	t22 = (((x97^x98)+x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = INT32_MIN;
	volatile int32_t x104 = INT32_MIN;
	int32_t t23 = -2733871;

	t23 = (((x101^x102)+x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int32_t x106 = -1;
	int64_t x107 = 20697547462LL;
	volatile int32_t t24 = -867;

	t24 = (((x105^x106)+x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x109 = 17U;
	int32_t x111 = -1;
	int64_t x112 = -215016LL;
	volatile int32_t t25 = 103953;

	t25 = (((x109^x110)+x111)<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 993510728U;
	static int16_t x115 = INT16_MIN;
	static int32_t t26 = 593355;

	t26 = (((x113^x114)+x115)<x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MAX;
	int32_t x119 = -200;
	int32_t t27 = 14807738;

	t27 = (((x117^x118)+x119)<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = -377446345820711LL;
	volatile uint8_t x122 = UINT8_MAX;
	int32_t x123 = -1;
	static uint8_t x124 = 13U;
	int32_t t28 = -5;

	t28 = (((x121^x122)+x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MAX;
	int8_t x127 = -1;
	volatile int32_t x128 = -1;
	volatile int32_t t29 = 6;

	t29 = (((x125^x126)+x127)<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 3541U;
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	volatile int32_t t30 = -546331084;

	t30 = (((x129^x130)+x131)<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 13237906082170532LLU;
	volatile int64_t x139 = -154LL;
	int64_t x140 = INT64_MIN;
	volatile int32_t t31 = -600376;

	t31 = (((x137^x138)+x139)<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = INT32_MAX;
	volatile uint32_t x144 = UINT32_MAX;
	int32_t t32 = 197332;

	t32 = (((x141^x142)+x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = INT32_MAX;
	int16_t x146 = 7;
	int16_t x147 = -1;
	static uint16_t x148 = 1081U;
	int32_t t33 = 22939;

	t33 = (((x145^x146)+x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = 60U;
	volatile uint16_t x151 = 1U;
	int8_t x152 = INT8_MIN;
	int32_t t34 = 69325;

	t34 = (((x149^x150)+x151)<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MIN;
	int32_t x154 = -152630;
	int64_t x155 = 1627311392165855645LL;
	int32_t t35 = -4714;

	t35 = (((x153^x154)+x155)<x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 14U;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	static volatile int16_t x160 = 56;

	t36 = (((x157^x158)+x159)<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x162 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;

	t37 = (((x161^x162)+x163)<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	static uint16_t x166 = 14795U;
	int32_t x167 = -1;
	int32_t x168 = INT32_MIN;
	volatile int32_t t38 = 67242894;

	t38 = (((x165^x166)+x167)<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	int64_t x172 = 253936167889LL;
	volatile int32_t t39 = 2;

	t39 = (((x169^x170)+x171)<x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 1300662U;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t40 = 66391343;

	t40 = (((x173^x174)+x175)<x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t t41 = -125;

	t41 = (((x177^x178)+x179)<x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	volatile int64_t x182 = INT64_MIN;
	uint8_t x183 = 75U;
	int32_t t42 = 166;

	t42 = (((x181^x182)+x183)<x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 137715379LLU;
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = 4U;
	int16_t x196 = 4;
	volatile int32_t t43 = 1686;

	t43 = (((x193^x194)+x195)<x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x198 = -9;
	int16_t x199 = -5;
	int16_t x200 = INT16_MIN;

	t44 = (((x197^x198)+x199)<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 2561U;
	int8_t x202 = -1;
	int32_t t45 = 23147723;

	t45 = (((x201^x202)+x203)<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t46 = 437515390;

	t46 = (((x205^x206)+x207)<x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x214 = INT64_MIN;
	volatile int32_t t47 = -10;

	t47 = (((x213^x214)+x215)<x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = 732;
	int32_t x218 = -1;
	static int16_t x219 = -6454;
	int16_t x220 = INT16_MIN;

	t48 = (((x217^x218)+x219)<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t t49 = 56870;

	t49 = (((x221^x222)+x223)<x224);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 50328846U;
	int16_t x226 = -1;
	static uint8_t x228 = 15U;

	t50 = (((x225^x226)+x227)<x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = 27;
	uint8_t x230 = 76U;
	volatile uint64_t x231 = 907LLU;
	int32_t t51 = -1664591;

	t51 = (((x229^x230)+x231)<x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = 474;
	int16_t x235 = INT16_MAX;
	volatile int32_t t52 = 13827;

	t52 = (((x233^x234)+x235)<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -7;
	uint32_t x238 = 0U;
	int8_t x240 = 1;
	volatile int32_t t53 = 53;

	t53 = (((x237^x238)+x239)<x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = -1538631399338LL;
	int64_t x242 = -1LL;
	uint64_t x243 = UINT64_MAX;
	int32_t t54 = -1;

	t54 = (((x241^x242)+x243)<x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MIN;
	static int16_t x246 = -1;
	uint8_t x248 = 1U;
	volatile int32_t t55 = 286;

	t55 = (((x245^x246)+x247)<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x250 = INT32_MIN;
	int64_t x251 = -6880113LL;
	int32_t x252 = INT32_MAX;
	int32_t t56 = 1;

	t56 = (((x249^x250)+x251)<x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	uint64_t x255 = UINT64_MAX;
	static uint32_t x256 = 154492055U;
	static int32_t t57 = -21740633;

	t57 = (((x253^x254)+x255)<x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x258 = 0U;
	uint8_t x259 = 41U;
	int16_t x260 = INT16_MIN;
	static int32_t t58 = 13;

	t58 = (((x257^x258)+x259)<x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = 38U;
	int8_t x262 = 19;
	static uint32_t x263 = 230U;
	static volatile int32_t t59 = 123;

	t59 = (((x261^x262)+x263)<x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 2U;
	int32_t x266 = -1;
	int8_t x267 = -1;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t60 = 57;

	t60 = (((x265^x266)+x267)<x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MAX;
	int64_t x271 = 175487802338LL;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t61 = 784517;

	t61 = (((x269^x270)+x271)<x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = -1427;
	int8_t x274 = 1;
	int8_t x276 = INT8_MIN;
	volatile int32_t t62 = 487;

	t62 = (((x273^x274)+x275)<x276);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t63 = -381805;

	t63 = (((x277^x278)+x279)<x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = 1;
	uint16_t x282 = 588U;
	int16_t x283 = -1;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t64 = -989;

	t64 = (((x281^x282)+x283)<x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = INT8_MAX;
	uint16_t x286 = 3U;

	t65 = (((x285^x286)+x287)<x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x289 = -1;
	static uint32_t x290 = 1705034374U;
	int16_t x291 = -1;
	int64_t x292 = -16988021080704674LL;
	int32_t t66 = 46625499;

	t66 = (((x289^x290)+x291)<x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x294 = INT32_MAX;
	uint16_t x295 = 756U;
	int32_t t67 = -33047502;

	t67 = (((x293^x294)+x295)<x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x298 = 1;
	volatile int16_t x300 = -1;
	static volatile int32_t t68 = 27;

	t68 = (((x297^x298)+x299)<x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = INT16_MIN;
	uint64_t x302 = 5284259293381LLU;
	int16_t x303 = 1;
	uint16_t x304 = 202U;
	volatile int32_t t69 = 84867;

	t69 = (((x301^x302)+x303)<x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x305 = INT32_MAX;
	static int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MIN;
	static int64_t x308 = -1LL;
	int32_t t70 = 89;

	t70 = (((x305^x306)+x307)<x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = INT8_MIN;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t71 = 119;

	t71 = (((x309^x310)+x311)<x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x313 = INT16_MAX;
	int16_t x315 = -123;
	int32_t t72 = 43429;

	t72 = (((x313^x314)+x315)<x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x325 = -1;
	int32_t x326 = -29617;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	int32_t t73 = -347;

	t73 = (((x325^x326)+x327)<x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x329 = INT8_MIN;
	static int16_t x330 = INT16_MIN;
	uint16_t x332 = 203U;
	static volatile int32_t t74 = 66325034;

	t74 = (((x329^x330)+x331)<x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MAX;
	volatile int8_t x334 = INT8_MAX;
	uint64_t x335 = UINT64_MAX;
	static int32_t t75 = 21460;

	t75 = (((x333^x334)+x335)<x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 3U;
	int32_t x338 = -632725;
	int16_t x339 = -1;
	int64_t x340 = INT64_MIN;
	int32_t t76 = 0;

	t76 = (((x337^x338)+x339)<x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 213208526U;
	int16_t x347 = 0;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t77 = 519525140;

	t77 = (((x345^x346)+x347)<x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x352 = INT8_MAX;
	static volatile int32_t t78 = 19714;

	t78 = (((x349^x350)+x351)<x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x354 = INT32_MIN;
	int32_t t79 = 7510431;

	t79 = (((x353^x354)+x355)<x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x357 = -62;
	int64_t x358 = 814104073251LL;
	static int16_t x359 = INT16_MIN;
	uint16_t x360 = 22136U;

	t80 = (((x357^x358)+x359)<x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x361 = 5U;
	uint8_t x362 = 68U;
	static int8_t x363 = 0;
	uint16_t x364 = 8190U;
	int32_t t81 = 1527125;

	t81 = (((x361^x362)+x363)<x364);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -1;
	uint8_t x366 = 23U;
	volatile int32_t x368 = -1;
	volatile int32_t t82 = -28599;

	t82 = (((x365^x366)+x367)<x368);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x369 = 365U;
	static int32_t x370 = INT32_MAX;
	static int64_t x371 = INT64_MIN;
	int32_t t83 = 19578853;

	t83 = (((x369^x370)+x371)<x372);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 428134008238LLU;
	uint32_t x374 = 1416921U;
	volatile int16_t x375 = -1;
	static int64_t x376 = -4284731254LL;
	static volatile int32_t t84 = -1;

	t84 = (((x373^x374)+x375)<x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MIN;
	static uint16_t x378 = 98U;
	int64_t x379 = 92LL;
	int64_t x380 = 5994752867567018LL;
	int32_t t85 = -170312;

	t85 = (((x377^x378)+x379)<x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x381 = 8757U;
	uint32_t x382 = 241229U;
	int16_t x383 = 477;
	int32_t x384 = INT32_MAX;
	int32_t t86 = -1021;

	t86 = (((x381^x382)+x383)<x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	int8_t x388 = INT8_MIN;

	t87 = (((x385^x386)+x387)<x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile uint64_t x390 = 56588175816831022LLU;
	int32_t x392 = 232;
	int32_t t88 = 59124180;

	t88 = (((x389^x390)+x391)<x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x393 = 10108;
	static uint64_t x395 = 232563072092119LLU;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t89 = -734644092;

	t89 = (((x393^x394)+x395)<x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x401 = UINT16_MAX;
	uint16_t x404 = 1932U;
	volatile int32_t t90 = 161;

	t90 = (((x401^x402)+x403)<x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x405 = INT8_MIN;
	static volatile int16_t x408 = INT16_MAX;

	t91 = (((x405^x406)+x407)<x408);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x415 = -687LL;
	int32_t t92 = 971347;

	t92 = (((x413^x414)+x415)<x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x417 = 87LLU;
	int64_t x418 = -1LL;
	uint16_t x419 = 2931U;
	int32_t t93 = -358;

	t93 = (((x417^x418)+x419)<x420);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = INT64_MAX;
	volatile int64_t x422 = INT64_MAX;
	static int8_t x423 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	static int32_t t94 = -32452;

	t94 = (((x421^x422)+x423)<x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x425 = INT32_MIN;
	volatile int8_t x426 = INT8_MIN;
	int64_t x427 = -422LL;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t95 = 29;

	t95 = (((x425^x426)+x427)<x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = UINT16_MAX;
	static volatile int8_t x430 = INT8_MIN;
	static uint16_t x431 = 19U;
	int16_t x432 = INT16_MIN;
	int32_t t96 = -16;

	t96 = (((x429^x430)+x431)<x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x434 = 0U;
	int8_t x435 = INT8_MAX;
	volatile int32_t t97 = 7;

	t97 = (((x433^x434)+x435)<x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = 1;
	volatile int32_t x438 = -7911596;
	int32_t x439 = 37749054;
	volatile uint16_t x440 = 15U;
	volatile int32_t t98 = -238844838;

	t98 = (((x437^x438)+x439)<x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x446 = -30607184417613995LL;
	int16_t x447 = INT16_MIN;
	int32_t t99 = 12442;

	t99 = (((x445^x446)+x447)<x448);

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

