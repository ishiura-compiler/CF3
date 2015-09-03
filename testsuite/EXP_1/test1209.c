#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
int32_t x16 = INT32_MIN;
static volatile int8_t x20 = INT8_MIN;
volatile uint32_t x21 = UINT32_MAX;
int8_t x34 = -1;
static uint64_t x36 = 1LLU;
volatile uint8_t x37 = UINT8_MAX;
uint8_t x45 = UINT8_MAX;
volatile uint32_t t9 = 6U;
int32_t x59 = INT32_MAX;
int8_t x63 = INT8_MAX;
int64_t t11 = -67LL;
uint64_t x76 = UINT64_MAX;
volatile uint64_t t14 = 1095497659240383576LLU;
int32_t x90 = INT32_MIN;
volatile uint8_t x95 = UINT8_MAX;
static uint16_t x112 = 226U;
uint16_t x116 = 29302U;
uint64_t x117 = UINT64_MAX;
static int32_t x118 = -940;
int8_t x122 = 0;
int32_t x130 = INT32_MIN;
static volatile int32_t x133 = INT32_MIN;
volatile uint32_t t28 = 1U;
uint32_t x137 = 10523U;
uint64_t x141 = 189278125688LLU;
uint8_t x143 = 7U;
uint16_t x148 = 1675U;
int16_t x158 = INT16_MAX;
uint8_t x164 = UINT8_MAX;
int16_t x165 = 2;
int16_t x168 = -461;
int32_t x170 = 30675890;
int8_t x171 = -1;
int64_t x172 = INT64_MIN;
int16_t x179 = -221;
uint8_t x185 = UINT8_MAX;
uint64_t x193 = 88428908330995LLU;
int32_t x199 = INT32_MAX;
static int32_t t42 = -9;
static int64_t t43 = 37374360441LL;
int32_t t45 = -338339;
int16_t x222 = -1;
static volatile uint64_t x223 = 337970LLU;
volatile int32_t x225 = INT32_MAX;
static int8_t x226 = INT8_MAX;
int32_t x228 = 1;
int64_t x229 = -1LL;
static int16_t x234 = 0;
static volatile int32_t t51 = -120102139;
int64_t x238 = INT64_MIN;
int8_t x239 = INT8_MIN;
volatile int16_t x241 = -3;
int64_t x242 = 5521059341LL;
int64_t x244 = INT64_MAX;
int64_t x248 = -1LL;
static uint64_t t54 = 1LLU;
uint32_t x251 = 3521158U;
uint8_t x252 = 30U;
volatile uint8_t x254 = 15U;
int64_t x258 = INT64_MAX;
static int8_t x259 = 6;
volatile int32_t t57 = -1999;
int64_t x264 = INT64_MIN;
int8_t x266 = INT8_MIN;
static volatile uint64_t x269 = UINT64_MAX;
static volatile uint64_t x280 = 184353145LLU;
int16_t x281 = INT16_MIN;
uint32_t x283 = 398326U;
int64_t t63 = -950416547883222LL;
int16_t x294 = INT16_MIN;
static int64_t t65 = 838430LL;
uint32_t t67 = 154682U;
static int32_t x308 = -1;
int8_t x314 = -3;
volatile int32_t t70 = -38454;
static uint16_t x317 = UINT16_MAX;
static int16_t x321 = -1;
int32_t x322 = INT32_MIN;
int16_t x327 = -1;
uint16_t x331 = 7419U;
static volatile int8_t x349 = INT8_MIN;
uint16_t x363 = 0U;
static int16_t x365 = INT16_MIN;
int16_t x369 = -1;
int16_t x372 = -14095;
static int32_t x381 = INT32_MIN;
static int16_t x383 = -1;
int32_t x386 = 10562653;
int32_t x391 = INT32_MAX;
int32_t t86 = 620530;
static uint64_t x398 = 124110002LLU;
int8_t x401 = INT8_MAX;
uint32_t t88 = 9817771U;
static volatile int64_t t89 = 18881LL;
int16_t x412 = INT16_MIN;
volatile uint32_t x416 = UINT32_MAX;
volatile int16_t x420 = INT16_MIN;
int8_t x428 = INT8_MAX;
uint32_t x431 = UINT32_MAX;
volatile uint16_t x435 = 3U;
volatile int32_t t96 = 114698;
volatile uint32_t x448 = UINT32_MAX;
uint32_t t99 = 25857683U;


void f0(void) {
	int16_t x5 = INT16_MAX;
	uint64_t x6 = 4610859637850489LLU;
	uint16_t x7 = 4659U;
	int64_t t0 = 667220269339LL;

	t0 = (((x5==x6)-x7)^x8);

	if (t0 != 4658LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	uint16_t x10 = UINT16_MAX;
	static int32_t x11 = -1;
	int16_t x12 = -1;
	int32_t t1 = 0;

	t1 = (((x9==x10)-x11)^x12);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	static uint16_t x14 = UINT16_MAX;
	int32_t x15 = -2609504;
	int32_t t2 = -74;

	t2 = (((x13==x14)-x15)^x16);

	if (t2 != -2144874144) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint16_t x18 = 2U;
	static volatile int16_t x19 = -1;
	int32_t t3 = -96;

	t3 = (((x17==x18)-x19)^x20);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = -1;
	int64_t x24 = -1LL;
	static int64_t t4 = 101LL;

	t4 = (((x21==x22)-x23)^x24);

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MAX;
	static uint16_t x35 = 235U;
	volatile uint64_t t5 = 457LLU;

	t5 = (((x33==x34)-x35)^x36);

	if (t5 != 18446744073709551380LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x38 = -17955LL;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t6 = 4;

	t6 = (((x37==x38)-x39)^x40);

	if (t6 != -2147450880) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 4U;
	int16_t x44 = -1;
	volatile int32_t t7 = 448566;

	t7 = (((x41==x42)-x43)^x44);

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MAX;
	static int32_t x48 = 4;
	volatile int32_t t8 = -6;

	t8 = (((x45==x46)-x47)^x48);

	if (t8 != -123) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	static volatile int32_t x50 = -1;
	uint32_t x51 = 136820U;
	int16_t x52 = INT16_MAX;

	t9 = (((x49==x50)-x51)^x52);

	if (t9 != 4294809203U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	int32_t x58 = INT32_MIN;
	volatile int16_t x60 = INT16_MAX;
	volatile int32_t t10 = -10;

	t10 = (((x57==x58)-x59)^x60);

	if (t10 != -2147450882) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 30U;
	uint64_t x62 = UINT64_MAX;
	int64_t x64 = 561173250787050LL;

	t11 = (((x61==x62)-x63)^x64);

	if (t11 != -561173250786965LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x65 = -15;
	static int64_t x66 = -900LL;
	uint32_t x67 = 5135145U;
	static uint32_t x68 = 1U;
	static uint32_t t12 = 3679737U;

	t12 = (((x65==x66)-x67)^x68);

	if (t12 != 4289832150U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = -1;
	int8_t x70 = -3;
	static int16_t x71 = 400;
	int64_t x72 = INT64_MAX;
	volatile int64_t t13 = -2964560563LL;

	t13 = (((x69==x70)-x71)^x72);

	if (t13 != -9223372036854775409LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	uint8_t x74 = UINT8_MAX;
	volatile uint64_t x75 = 121175469LLU;

	t14 = (((x73==x74)-x75)^x76);

	if (t14 != 121175468LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x77 = 8291U;
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MAX;
	int32_t x80 = -8;
	static volatile int32_t t15 = 2863140;

	t15 = (((x77==x78)-x79)^x80);

	if (t15 != 121) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 196LLU;
	static uint16_t x83 = 4U;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t16 = 1;

	t16 = (((x81==x82)-x83)^x84);

	if (t16 != -65533) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	static int16_t x92 = INT16_MAX;
	int32_t t17 = -125;

	t17 = (((x89==x90)-x91)^x92);

	if (t17 != 32639) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int32_t x94 = 482;
	int8_t x96 = -16;
	int32_t t18 = 19;

	t18 = (((x93==x94)-x95)^x96);

	if (t18 != 241) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = 15;
	int8_t x98 = INT8_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile uint32_t x100 = 266011164U;
	volatile uint32_t t19 = 22U;

	t19 = (((x97==x98)-x99)^x100);

	if (t19 != 4028955933U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 0;
	int8_t x102 = -1;
	uint8_t x103 = 55U;
	int32_t x104 = 1619;
	volatile int32_t t20 = -517765;

	t20 = (((x101==x102)-x103)^x104);

	if (t20 != -1638) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 7769U;
	int64_t x107 = -1LL;
	uint64_t x108 = 6LLU;
	uint64_t t21 = 888135194LLU;

	t21 = (((x105==x106)-x107)^x108);

	if (t21 != 7LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 138473176U;
	int16_t x110 = -1;
	static uint32_t x111 = 828955799U;
	volatile uint32_t t22 = 14549U;

	t22 = (((x109==x110)-x111)^x112);

	if (t22 != 3466011531U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x113 = INT16_MIN;
	int64_t x114 = -1743LL;
	volatile uint16_t x115 = UINT16_MAX;
	volatile int32_t t23 = -1;

	t23 = (((x113==x114)-x115)^x116);

	if (t23 != -36233) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x119 = 17;
	int32_t x120 = 1;
	int32_t t24 = 481573;

	t24 = (((x117==x118)-x119)^x120);

	if (t24 != -18) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -4;
	int8_t x123 = INT8_MAX;
	int16_t x124 = -1;
	int32_t t25 = 164293203;

	t25 = (((x121==x122)-x123)^x124);

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = 47521511LLU;
	int64_t x127 = 2343LL;
	int16_t x128 = INT16_MAX;
	static int64_t t26 = -58910696LL;

	t26 = (((x125==x126)-x127)^x128);

	if (t26 != -30426LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x129 = INT16_MIN;
	static uint8_t x131 = 14U;
	static int8_t x132 = INT8_MAX;
	int32_t t27 = 20795188;

	t27 = (((x129==x130)-x131)^x132);

	if (t27 != -115) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x134 = 33517974;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = 1;

	t28 = (((x133==x134)-x135)^x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x138 = UINT64_MAX;
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = INT16_MIN;
	uint64_t t29 = 1139327LLU;

	t29 = (((x137==x138)-x139)^x140);

	if (t29 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x142 = INT32_MIN;
	int64_t x144 = -144549916225LL;
	volatile int64_t t30 = 3003738108048269253LL;

	t30 = (((x141==x142)-x143)^x144);

	if (t30 != 144549916230LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x145 = INT16_MAX;
	uint8_t x146 = 6U;
	static volatile int64_t x147 = 7LL;
	int64_t t31 = -3387152950212602360LL;

	t31 = (((x145==x146)-x147)^x148);

	if (t31 != -1678LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	uint64_t x151 = 102414LLU;
	int8_t x152 = INT8_MIN;
	uint64_t t32 = 484376479277LLU;

	t32 = (((x149==x150)-x151)^x152);

	if (t32 != 102514LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	static volatile int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t33 = -6603135;

	t33 = (((x157==x158)-x159)^x160);

	if (t33 != -2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x161 = -1;
	uint8_t x162 = 0U;
	volatile uint16_t x163 = 35U;
	int32_t t34 = 33362124;

	t34 = (((x161==x162)-x163)^x164);

	if (t34 != -222) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	int32_t t35 = -374223;

	t35 = (((x165==x166)-x167)^x168);

	if (t35 != -33229) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	int64_t t36 = 8252152067LL;

	t36 = (((x169==x170)-x171)^x172);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	volatile uint32_t x176 = 36056U;
	uint32_t t37 = 364065U;

	t37 = (((x173==x174)-x175)^x176);

	if (t37 != 35928U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = -1;
	int16_t x178 = INT16_MIN;
	uint16_t x180 = 10U;
	volatile int32_t t38 = 0;

	t38 = (((x177==x178)-x179)^x180);

	if (t38 != 215) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = -1LL;
	int64_t x188 = INT64_MIN;
	int64_t t39 = -20974515646928LL;

	t39 = (((x185==x186)-x187)^x188);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = 79148U;
	static uint8_t x191 = UINT8_MAX;
	int16_t x192 = -4737;
	volatile int32_t t40 = -264661663;

	t40 = (((x189==x190)-x191)^x192);

	if (t40 != 4734) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x194 = -24;
	volatile uint64_t x195 = 28151235341517767LLU;
	uint16_t x196 = 475U;
	uint64_t t41 = 6241288883328LLU;

	t41 = (((x193==x194)-x195)^x196);

	if (t41 != 18418592838368034274LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = 46557023U;
	uint64_t x198 = 217LLU;
	int8_t x200 = INT8_MIN;

	t42 = (((x197==x198)-x199)^x200);

	if (t42 != 2147483521) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MIN;
	static volatile int32_t x202 = -136495;
	int8_t x203 = -22;
	volatile int64_t x204 = -1628386461781648LL;

	t43 = (((x201==x202)-x203)^x204);

	if (t43 != -1628386461781658LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 2U;
	uint32_t x206 = 471U;
	static int16_t x207 = -1;
	volatile int64_t x208 = -1LL;
	int64_t t44 = -23207091901LL;

	t44 = (((x205==x206)-x207)^x208);

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile int8_t x210 = INT8_MAX;
	uint8_t x211 = UINT8_MAX;
	static int16_t x212 = 1713;

	t45 = (((x209==x210)-x211)^x212);

	if (t45 != -1616) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x213 = INT32_MIN;
	uint8_t x214 = 1U;
	int8_t x215 = 0;
	uint8_t x216 = 127U;
	volatile int32_t t46 = -787818;

	t46 = (((x213==x214)-x215)^x216);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -1;
	int16_t x218 = 141;
	volatile int16_t x219 = 1;
	int16_t x220 = 11116;
	int32_t t47 = 2;

	t47 = (((x217==x218)-x219)^x220);

	if (t47 != -11117) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MIN;
	volatile int16_t x224 = INT16_MIN;
	volatile uint64_t t48 = 125LLU;

	t48 = (((x221==x222)-x223)^x224);

	if (t48 != 350158LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x227 = 6014U;
	volatile int32_t t49 = 116;

	t49 = (((x225==x226)-x227)^x228);

	if (t49 != -6013) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x230 = -1;
	static int32_t x231 = -1;
	static uint32_t x232 = 60U;
	volatile uint32_t t50 = 1U;

	t50 = (((x229==x230)-x231)^x232);

	if (t50 != 62U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = -1LL;
	int16_t x235 = 37;
	volatile int32_t x236 = -5427;

	t51 = (((x233==x234)-x235)^x236);

	if (t51 != 5398) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MAX;
	int8_t x240 = 5;
	volatile int32_t t52 = 344298392;

	t52 = (((x237==x238)-x239)^x240);

	if (t52 != 133) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x243 = INT8_MIN;
	static volatile int64_t t53 = 22331289LL;

	t53 = (((x241==x242)-x243)^x244);

	if (t53 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	int32_t x246 = -1;
	volatile uint64_t x247 = 16263176LLU;

	t54 = (((x245==x246)-x247)^x248);

	if (t54 != 16263175LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = 7;
	static uint32_t t55 = 0U;

	t55 = (((x249==x250)-x251)^x252);

	if (t55 != 4291446116U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int32_t x255 = -1;
	static int64_t x256 = INT64_MAX;
	int64_t t56 = -761451781362644LL;

	t56 = (((x253==x254)-x255)^x256);

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -63;
	int32_t x260 = -1;

	t57 = (((x257==x258)-x259)^x260);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = 1208451;
	int64_t x262 = -867860LL;
	volatile int32_t x263 = -1;
	int64_t t58 = -32363861571LL;

	t58 = (((x261==x262)-x263)^x264);

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = INT64_MAX;
	int8_t x267 = -3;
	static int16_t x268 = 0;
	volatile int32_t t59 = 39627;

	t59 = (((x265==x266)-x267)^x268);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = 1;
	int64_t x271 = -60996342737LL;
	static int16_t x272 = INT16_MAX;
	static volatile int64_t t60 = -34578241096214LL;

	t60 = (((x269==x270)-x271)^x272);

	if (t60 != 60996332590LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -1;
	volatile uint64_t x274 = 15LLU;
	int16_t x275 = 0;
	int32_t x276 = INT32_MAX;
	volatile int32_t t61 = INT32_MAX;

	t61 = (((x273==x274)-x275)^x276);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 8403397U;
	volatile int64_t x278 = 789654659052LL;
	uint32_t x279 = 12322U;
	uint64_t t62 = 2216644995052976049LLU;

	t62 = (((x277==x278)-x279)^x280);

	if (t62 != 4110601895LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x282 = 0U;
	int64_t x284 = 11585071945324LL;

	t63 = (((x281==x282)-x283)^x284);

	if (t63 != 11586276227686LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = UINT8_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -1;
	static int32_t t64 = -790138;

	t64 = (((x289==x290)-x291)^x292);

	if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -31;
	volatile int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MAX;

	t65 = (((x293==x294)-x295)^x296);

	if (t65 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int64_t x299 = 29035143562462LL;
	static int64_t x300 = INT64_MIN;
	int64_t t66 = 7978313LL;

	t66 = (((x297==x298)-x299)^x300);

	if (t66 != 9223343001711213346LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	static volatile uint32_t x303 = 218705U;
	volatile int8_t x304 = INT8_MAX;

	t67 = (((x301==x302)-x303)^x304);

	if (t67 != 4294748623U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x305 = 23U;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 400852942U;
	uint32_t t68 = 3877U;

	t68 = (((x305==x306)-x307)^x308);

	if (t68 != 400852941U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	static volatile int16_t x310 = -1;
	volatile uint64_t x311 = 1146LLU;
	int32_t x312 = 0;
	static uint64_t t69 = 6550911269951169LLU;

	t69 = (((x309==x310)-x311)^x312);

	if (t69 != 18446744073709550471LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = INT8_MAX;
	static uint16_t x315 = 3U;
	int32_t x316 = -3384861;

	t70 = (((x313==x314)-x315)^x316);

	if (t70 != 3384862) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x318 = 6;
	uint8_t x319 = 119U;
	int64_t x320 = INT64_MIN;
	int64_t t71 = -492741038984LL;

	t71 = (((x317==x318)-x319)^x320);

	if (t71 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x323 = 5U;
	int8_t x324 = -2;
	static int32_t t72 = -68363;

	t72 = (((x321==x322)-x323)^x324);

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = 475;
	int16_t x326 = INT16_MIN;
	int16_t x328 = -14;
	static int32_t t73 = -5;

	t73 = (((x325==x326)-x327)^x328);

	if (t73 != -13) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = 114LL;
	int8_t x330 = INT8_MIN;
	int16_t x332 = -55;
	int32_t t74 = 44;

	t74 = (((x329==x330)-x331)^x332);

	if (t74 != 7372) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -1;
	static int64_t x335 = 335877764LL;
	static int32_t x336 = INT32_MIN;
	volatile int64_t t75 = 14400809697035791LL;

	t75 = (((x333==x334)-x335)^x336);

	if (t75 != 1811605884LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	int16_t x339 = INT16_MIN;
	static volatile uint16_t x340 = 6174U;
	static int32_t t76 = -1;

	t76 = (((x337==x338)-x339)^x340);

	if (t76 != 38942) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = INT32_MIN;
	static uint16_t x342 = 3908U;
	uint32_t x343 = 1477435164U;
	int8_t x344 = -1;
	uint32_t t77 = 2988269U;

	t77 = (((x341==x342)-x343)^x344);

	if (t77 != 1477435163U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x350 = 1U;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	static volatile int32_t t78 = 3511205;

	t78 = (((x349==x350)-x351)^x352);

	if (t78 != -32640) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 1706U;
	int32_t x354 = INT32_MIN;
	volatile int32_t x355 = INT32_MAX;
	static volatile uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t79 = 1824391U;

	t79 = (((x353==x354)-x355)^x356);

	if (t79 != 2147483646U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x361 = INT16_MIN;
	static int8_t x362 = -1;
	int64_t x364 = INT64_MAX;
	int64_t t80 = INT64_MAX;

	t80 = (((x361==x362)-x363)^x364);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x366 = INT8_MAX;
	int64_t x367 = -1LL;
	static uint8_t x368 = 0U;
	int64_t t81 = 614519225100287505LL;

	t81 = (((x365==x366)-x367)^x368);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x370 = INT64_MIN;
	uint64_t x371 = 66LLU;
	volatile uint64_t t82 = 126LLU;

	t82 = (((x369==x370)-x371)^x372);

	if (t82 != 14159LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = 31665491LL;
	static int64_t x378 = -1LL;
	int64_t x379 = 108338036228106047LL;
	int32_t x380 = -1030762;
	static volatile int64_t t83 = 2316913LL;

	t83 = (((x377==x378)-x379)^x380);

	if (t83 != 108338036227808599LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x382 = 13;
	uint64_t x384 = 1LLU;
	uint64_t t84 = 1399174666LLU;

	t84 = (((x381==x382)-x383)^x384);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x385 = 6149U;
	uint64_t x387 = 28676690435LLU;
	int64_t x388 = -1LL;
	static volatile uint64_t t85 = 31753388566116142LLU;

	t85 = (((x385==x386)-x387)^x388);

	if (t85 != 28676690434LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int64_t x390 = INT64_MIN;
	int8_t x392 = INT8_MAX;

	t86 = (((x389==x390)-x391)^x392);

	if (t86 != -2147483522) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = UINT16_MAX;
	volatile uint64_t x399 = UINT64_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint64_t t87 = 1LLU;

	t87 = (((x397==x398)-x399)^x400);

	if (t87 != 4294967294LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x402 = 23521165U;
	int16_t x403 = 3500;
	uint32_t x404 = UINT32_MAX;

	t88 = (((x401==x402)-x403)^x404);

	if (t88 != 3499U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MAX;
	int64_t x408 = INT64_MIN;

	t89 = (((x405==x406)-x407)^x408);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x409 = 32402908LLU;
	uint8_t x410 = UINT8_MAX;
	volatile int64_t x411 = -44456LL;
	int64_t t90 = -288825232359LL;

	t90 = (((x409==x410)-x411)^x412);

	if (t90 != -53848LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x413 = 7536U;
	volatile uint64_t x414 = UINT64_MAX;
	int64_t x415 = 1LL;
	volatile int64_t t91 = -18730378877LL;

	t91 = (((x413==x414)-x415)^x416);

	if (t91 != -4294967296LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x417 = 14U;
	int64_t x418 = INT64_MIN;
	volatile int32_t x419 = -1;
	volatile int32_t t92 = -1638;

	t92 = (((x417==x418)-x419)^x420);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = 6U;
	int16_t x422 = INT16_MAX;
	int64_t x423 = INT64_MAX;
	uint8_t x424 = 10U;
	static volatile int64_t t93 = 135446667672LL;

	t93 = (((x421==x422)-x423)^x424);

	if (t93 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -6309854658556978LL;
	volatile uint8_t x426 = 4U;
	int8_t x427 = INT8_MIN;
	int32_t t94 = 2;

	t94 = (((x425==x426)-x427)^x428);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x429 = 113U;
	int8_t x430 = INT8_MIN;
	uint32_t x432 = 40796U;
	volatile uint32_t t95 = 87U;

	t95 = (((x429==x430)-x431)^x432);

	if (t95 != 40797U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x433 = UINT64_MAX;
	static volatile uint8_t x434 = 4U;
	int32_t x436 = -16;

	t96 = (((x433==x434)-x435)^x436);

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x437 = UINT64_MAX;
	volatile uint16_t x438 = 146U;
	int16_t x439 = -1;
	volatile uint16_t x440 = 1U;
	int32_t t97 = 273;

	t97 = (((x437==x438)-x439)^x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = -1;
	volatile uint8_t x442 = UINT8_MAX;
	static uint8_t x443 = UINT8_MAX;
	int8_t x444 = -1;
	int32_t t98 = 508646855;

	t98 = (((x441==x442)-x443)^x444);

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -1LL;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = -4;

	t99 = (((x445==x446)-x447)^x448);

	if (t99 != 4294967291U) { NG(); } else { ; }
	
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

