#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
volatile int64_t x11 = INT64_MAX;
static volatile uint64_t t5 = 2178LLU;
static int16_t x27 = -486;
int64_t x28 = INT64_MIN;
int16_t x33 = INT16_MIN;
int32_t x36 = 514818;
int16_t x37 = 7;
int32_t x39 = -394;
volatile uint64_t x42 = 33786247LLU;
int8_t x44 = INT8_MIN;
int32_t x45 = -1;
int32_t x51 = INT32_MIN;
int64_t x52 = -33160567673919562LL;
int64_t t13 = -18312060934757LL;
volatile int32_t t14 = -82587022;
static int16_t x63 = INT16_MAX;
static int8_t x64 = INT8_MAX;
int64_t x74 = INT64_MIN;
int8_t x85 = 25;
volatile uint8_t x90 = 45U;
uint16_t x91 = UINT16_MAX;
volatile int32_t t22 = INT32_MIN;
static int64_t x96 = 105754551497362078LL;
uint16_t x101 = UINT16_MAX;
static int32_t x102 = 49977;
volatile uint64_t t25 = UINT64_MAX;
volatile int64_t t26 = 7828316369018010LL;
int64_t x111 = INT64_MIN;
static int16_t x119 = INT16_MAX;
int8_t x120 = -1;
volatile int32_t t29 = -90;
int64_t x126 = INT64_MIN;
volatile int32_t x132 = -1;
static int16_t x133 = INT16_MAX;
int16_t x134 = INT16_MAX;
uint8_t x136 = UINT8_MAX;
static volatile int32_t t36 = -61;
int16_t x155 = -3645;
static uint8_t x157 = UINT8_MAX;
static int8_t x164 = -8;
int32_t x166 = -1;
int16_t x168 = 7;
volatile int32_t t41 = 3938;
volatile int64_t x171 = INT64_MIN;
volatile uint32_t x173 = 5U;
uint16_t x179 = 0U;
int64_t x193 = 20539929401855LL;
int8_t x195 = -1;
int64_t t49 = INT64_MIN;
static int8_t x201 = 13;
int64_t x208 = INT64_MIN;
volatile int32_t x211 = -1;
volatile uint64_t t52 = UINT64_MAX;
volatile int32_t x213 = 1443042;
uint8_t x218 = 2U;
uint64_t x223 = 2036510558475LLU;
volatile int32_t x225 = 244;
uint32_t x226 = 0U;
int32_t x228 = -450900899;
volatile int32_t t56 = -453970046;
volatile int32_t t58 = 84738;
static volatile uint16_t x237 = 27U;
uint32_t x239 = UINT32_MAX;
int16_t x250 = -378;
volatile int32_t x253 = INT32_MIN;
uint8_t x259 = 1U;
volatile uint16_t x261 = 4U;
uint32_t x262 = 7U;
int32_t x265 = INT32_MIN;
static int8_t x266 = INT8_MIN;
volatile uint32_t t66 = 98U;
volatile uint8_t x269 = 60U;
static uint8_t x279 = UINT8_MAX;
int32_t t69 = 26239;
int16_t x281 = INT16_MIN;
uint8_t x291 = 9U;
volatile uint32_t x293 = 2257U;
uint64_t x295 = 16334555LLU;
static int32_t t73 = -1;
int8_t x298 = INT8_MIN;
int64_t x299 = -1LL;
int16_t x300 = 1222;
volatile int32_t t74 = 112341708;
volatile int32_t x301 = -1;
int32_t t75 = -916660;
int64_t x307 = INT64_MIN;
int8_t x310 = -1;
int16_t x323 = -1;
uint32_t x325 = UINT32_MAX;
int8_t x326 = INT8_MAX;
uint16_t x327 = 8U;
int64_t x330 = INT64_MAX;
static volatile int16_t x335 = -72;
int32_t t84 = -58;
volatile int64_t t85 = 223288340426LL;
static int64_t t86 = INT64_MIN;
int16_t x349 = INT16_MAX;
int32_t x350 = -11;
volatile int32_t t87 = 2307791;
uint32_t x353 = UINT32_MAX;
int16_t x362 = INT16_MIN;
static volatile int64_t x365 = -1LL;
int64_t x374 = -1LL;
static int8_t x379 = 1;
int16_t x384 = INT16_MIN;
static int8_t x392 = INT8_MAX;
volatile int32_t t97 = -1377894;
int8_t x395 = -27;
int32_t t98 = INT32_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int32_t x2 = -1824;
	volatile int16_t x3 = 13445;
	static uint64_t x4 = 3LLU;
	uint64_t t0 = 2487041271LLU;

	t0 = ((x1==(x2<=x3))+x4);

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int8_t x7 = -2;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = INT64_MIN;

	t1 = ((x5==(x6<=x7))+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	int16_t x10 = 39;
	int16_t x12 = 0;
	volatile int32_t t2 = 6;

	t2 = ((x9==(x10<=x11))+x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	uint8_t x14 = 115U;
	volatile uint16_t x15 = 3U;
	uint64_t x16 = 31911820482LLU;
	static uint64_t t3 = 175591895183222695LLU;

	t3 = ((x13==(x14<=x15))+x16);

	if (t3 != 31911820482LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 0;

	t4 = ((x17==(x18<=x19))+x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 499;
	static int64_t x22 = INT64_MAX;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 3395864093026511403LLU;

	t5 = ((x21==(x22<=x23))+x24);

	if (t5 != 3395864093026511403LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int16_t x26 = -1;
	static volatile int64_t t6 = INT64_MIN;

	t6 = ((x25==(x26<=x27))+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 471U;
	static uint32_t x32 = UINT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x29==(x30<=x31))+x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = 33;
	static uint32_t x35 = UINT32_MAX;
	volatile int32_t t8 = -1;

	t8 = ((x33==(x34<=x35))+x36);

	if (t8 != 514818) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x38 = 10U;
	int16_t x40 = INT16_MIN;
	static int32_t t9 = 2;

	t9 = ((x37==(x38<=x39))+x40);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 10663437991125LLU;
	volatile uint64_t x43 = UINT64_MAX;
	volatile int32_t t10 = -1;

	t10 = ((x41==(x42<=x43))+x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	volatile uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

	t11 = ((x45==(x46<=x47))+x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint64_t x50 = 153235LLU;
	int64_t t12 = 1LL;

	t12 = ((x49==(x50<=x51))+x52);

	if (t12 != -33160567673919562LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile int16_t x54 = -1;
	static int32_t x55 = -1;
	int64_t x56 = -31458506LL;

	t13 = ((x53==(x54<=x55))+x56);

	if (t13 != -31458506LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 141261180U;
	volatile int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 1U;

	t14 = ((x57==(x58<=x59))+x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = UINT64_MAX;
	static int32_t t15 = 172670225;

	t15 = ((x61==(x62<=x63))+x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 9915;
	int64_t x66 = INT64_MAX;
	int32_t x67 = -1;
	int8_t x68 = 43;
	static volatile int32_t t16 = -601395597;

	t16 = ((x65==(x66<=x67))+x68);

	if (t16 != 43) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = INT32_MAX;
	int32_t x71 = INT32_MIN;
	static volatile int64_t x72 = 8734779660614LL;
	static int64_t t17 = 62617766450977726LL;

	t17 = ((x69==(x70<=x71))+x72);

	if (t17 != 8734779660614LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int8_t x75 = -13;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -15;

	t18 = ((x73==(x74<=x75))+x76);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = INT8_MIN;
	static int32_t t19 = 280;

	t19 = ((x77==(x78<=x79))+x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 5672555024LLU;
	int32_t x83 = -1;
	volatile int64_t x84 = -218007305930948LL;
	static volatile int64_t t20 = 2149261648LL;

	t20 = ((x81==(x82<=x83))+x84);

	if (t20 != -218007305930948LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MAX;
	int32_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -462;

	t21 = ((x85==(x86<=x87))+x88);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -192314;
	int32_t x92 = INT32_MIN;

	t22 = ((x89==(x90<=x91))+x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	uint32_t x94 = 51521082U;
	int64_t x95 = -1LL;
	int64_t t23 = -2775640403LL;

	t23 = ((x93==(x94<=x95))+x96);

	if (t23 != 105754551497362078LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	volatile int8_t x98 = 1;
	int8_t x99 = INT8_MIN;
	uint64_t x100 = 354515687LLU;
	uint64_t t24 = 103775894945LLU;

	t24 = ((x97==(x98<=x99))+x100);

	if (t24 != 354515687LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x103 = -1;
	uint64_t x104 = UINT64_MAX;

	t25 = ((x101==(x102<=x103))+x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	static int64_t x108 = -1LL;

	t26 = ((x105==(x106<=x107))+x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 750U;
	int16_t x110 = INT16_MIN;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = 10;

	t27 = ((x109==(x110<=x111))+x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 67543951LLU;
	uint16_t x114 = 250U;
	int32_t x115 = 107235;
	static volatile uint64_t x116 = 63LLU;
	volatile uint64_t t28 = 425668LLU;

	t28 = ((x113==(x114<=x115))+x116);

	if (t28 != 63LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 1;
	uint16_t x118 = 5596U;

	t29 = ((x117==(x118<=x119))+x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 239207U;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	static int32_t t30 = -316736137;

	t30 = ((x121==(x122<=x123))+x124);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 5755;
	uint64_t x127 = 968301136369LLU;
	volatile uint8_t x128 = 3U;
	int32_t t31 = 217641237;

	t31 = ((x125==(x126<=x127))+x128);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -4212325402487762LL;
	int8_t x130 = INT8_MIN;
	static uint64_t x131 = 1594409216498LLU;
	volatile int32_t t32 = 30;

	t32 = ((x129==(x130<=x131))+x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = INT32_MAX;
	volatile int32_t t33 = -8132;

	t33 = ((x133==(x134<=x135))+x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 1506U;
	int16_t x138 = INT16_MAX;
	uint16_t x139 = 3661U;
	volatile int64_t x140 = -1LL;
	volatile int64_t t34 = -1983818485448596LL;

	t34 = ((x137==(x138<=x139))+x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;
	int32_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x141==(x142<=x143))+x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	int8_t x148 = -1;

	t36 = ((x145==(x146<=x147))+x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	static volatile int32_t x152 = INT32_MIN;
	static volatile int32_t t37 = INT32_MIN;

	t37 = ((x149==(x150<=x151))+x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 2U;
	int8_t x154 = INT8_MIN;
	static int32_t x156 = INT32_MAX;
	static volatile int32_t t38 = INT32_MAX;

	t38 = ((x153==(x154<=x155))+x156);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = -1;

	t39 = ((x157==(x158<=x159))+x160);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	volatile uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 18U;
	int32_t t40 = -3;

	t40 = ((x161==(x162<=x163))+x164);

	if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = INT32_MIN;
	volatile int64_t x167 = INT64_MIN;

	t41 = ((x165==(x166<=x167))+x168);

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	static uint8_t x170 = 1U;
	volatile int64_t x172 = -1LL;
	volatile int64_t t42 = -1LL;

	t42 = ((x169==(x170<=x171))+x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -78246202725098989LL;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -8068LL;
	volatile int64_t t43 = -7835LL;

	t43 = ((x173==(x174<=x175))+x176);

	if (t43 != -8068LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 4;
	uint16_t x178 = UINT16_MAX;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -180427;

	t44 = ((x177==(x178<=x179))+x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 10333666LLU;
	static int16_t x182 = -15131;
	uint64_t x183 = 4082705268947793273LLU;
	int8_t x184 = -1;
	static volatile int32_t t45 = 128223317;

	t45 = ((x181==(x182<=x183))+x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = 7198U;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 982732U;
	volatile uint32_t t46 = 12U;

	t46 = ((x185==(x186<=x187))+x188);

	if (t46 != 982732U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	volatile uint16_t x190 = UINT16_MAX;
	uint8_t x191 = 12U;
	int8_t x192 = INT8_MAX;
	int32_t t47 = 365922;

	t47 = ((x189==(x190<=x191))+x192);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = -1;
	uint32_t x196 = 752U;
	uint32_t t48 = 41469U;

	t48 = ((x193==(x194<=x195))+x196);

	if (t48 != 752U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 2817406372724LL;
	static uint8_t x198 = UINT8_MAX;
	static int8_t x199 = -2;
	int64_t x200 = INT64_MIN;

	t49 = ((x197==(x198<=x199))+x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	uint8_t x203 = 9U;
	volatile uint64_t x204 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = ((x201==(x202<=x203))+x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = 177434329LL;
	int64_t x206 = -93698194594349674LL;
	int8_t x207 = INT8_MIN;
	int64_t t51 = INT64_MIN;

	t51 = ((x205==(x206<=x207))+x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 2U;
	static int16_t x210 = -14822;
	uint64_t x212 = UINT64_MAX;

	t52 = ((x209==(x210<=x211))+x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MIN;
	int64_t x215 = -1LL;
	int16_t x216 = -1;
	volatile int32_t t53 = 31;

	t53 = ((x213==(x214<=x215))+x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile int64_t x219 = -50355LL;
	int64_t x220 = -1LL;
	volatile int64_t t54 = 0LL;

	t54 = ((x217==(x218<=x219))+x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	volatile int32_t x224 = -1058904073;
	int32_t t55 = -55;

	t55 = ((x221==(x222<=x223))+x224);

	if (t55 != -1058904073) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x227 = 7U;

	t56 = ((x225==(x226<=x227))+x228);

	if (t56 != -450900899) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	uint32_t x230 = 146076U;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = 243460814441902LLU;
	volatile uint64_t t57 = 22184312LLU;

	t57 = ((x229==(x230<=x231))+x232);

	if (t57 != 243460814441902LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 6620840LLU;
	static int64_t x234 = INT64_MIN;
	static uint64_t x235 = UINT64_MAX;
	static int16_t x236 = -667;

	t58 = ((x233==(x234<=x235))+x236);

	if (t58 != -667) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x238 = INT32_MIN;
	int16_t x240 = -1;
	int32_t t59 = 1;

	t59 = ((x237==(x238<=x239))+x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static int64_t x242 = INT64_MIN;
	static volatile int16_t x243 = 0;
	int8_t x244 = -1;
	int32_t t60 = -3;

	t60 = ((x241==(x242<=x243))+x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -68336744;
	int8_t x246 = 1;
	uint32_t x247 = 13370U;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = ((x245==(x246<=x247))+x248);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 14079U;
	static int16_t x251 = -1016;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = 185966;

	t62 = ((x249==(x250<=x251))+x252);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -14;
	volatile int32_t x255 = -1;
	static volatile int64_t x256 = -1LL;
	volatile int64_t t63 = -22LL;

	t63 = ((x253==(x254<=x255))+x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	static int32_t x258 = 8334101;
	volatile uint32_t x260 = 0U;
	uint32_t t64 = 356111813U;

	t64 = ((x257==(x258<=x259))+x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x263 = -3;
	int64_t x264 = -1414527800LL;
	volatile int64_t t65 = -33756011391LL;

	t65 = ((x261==(x262<=x263))+x264);

	if (t65 != -1414527800LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 5988502U;

	t66 = ((x265==(x266<=x267))+x268);

	if (t66 != 5988502U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 48;
	int8_t x271 = 29;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -27180;

	t67 = ((x269==(x270<=x271))+x272);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 9921485286018LLU;
	static volatile uint64_t t68 = 1449LLU;

	t68 = ((x273==(x274<=x275))+x276);

	if (t68 != 9921485286018LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -5724946090LL;
	int8_t x278 = INT8_MIN;
	int8_t x280 = -4;

	t69 = ((x277==(x278<=x279))+x280);

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 72U;
	volatile int32_t x283 = 2;
	int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x281==(x282<=x283))+x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 7U;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = ((x285==(x286<=x287))+x288);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 37839915U;
	int32_t x290 = -1;
	int8_t x292 = -1;
	static int32_t t72 = 128882750;

	t72 = ((x289==(x290<=x291))+x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MIN;
	int16_t x296 = INT16_MIN;

	t73 = ((x293==(x294<=x295))+x296);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;

	t74 = ((x297==(x298<=x299))+x300);

	if (t74 != 1222) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MIN;
	uint8_t x304 = 4U;

	t75 = ((x301==(x302<=x303))+x304);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int32_t x306 = INT32_MAX;
	static uint64_t x308 = 8652222224448663563LLU;
	static volatile uint64_t t76 = 367923444223LLU;

	t76 = ((x305==(x306<=x307))+x308);

	if (t76 != 8652222224448663563LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -9598;
	uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 71;

	t77 = ((x309==(x310<=x311))+x312);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 40;
	uint32_t x314 = UINT32_MAX;
	volatile int64_t x315 = 1821132LL;
	uint32_t x316 = 1968697037U;
	volatile uint32_t t78 = 4699U;

	t78 = ((x313==(x314<=x315))+x316);

	if (t78 != 1968697037U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	static int64_t x320 = -1LL;
	volatile int64_t t79 = 57375330250962LL;

	t79 = ((x317==(x318<=x319))+x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	static int32_t x322 = 100;
	int32_t x324 = -1;
	int32_t t80 = 2810202;

	t80 = ((x321==(x322<=x323))+x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x328 = 5383;
	volatile int32_t t81 = 340777;

	t81 = ((x325==(x326<=x327))+x328);

	if (t81 != 5383) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 8959971578928LLU;
	int16_t x331 = -1;
	int8_t x332 = INT8_MAX;
	static int32_t t82 = 1;

	t82 = ((x329==(x330<=x331))+x332);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = 7;
	int64_t x336 = -1LL;
	volatile int64_t t83 = -466393143881152294LL;

	t83 = ((x333==(x334<=x335))+x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	int64_t x339 = -53440498LL;
	static uint16_t x340 = 454U;

	t84 = ((x337==(x338<=x339))+x340);

	if (t84 != 454) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile uint32_t x342 = 154703U;
	int32_t x343 = -1;
	int64_t x344 = -246667581358LL;

	t85 = ((x341==(x342<=x343))+x344);

	if (t85 != -246667581358LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = 13546;
	volatile int64_t x347 = INT64_MAX;
	volatile int64_t x348 = INT64_MIN;

	t86 = ((x345==(x346<=x347))+x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x351 = UINT32_MAX;
	uint8_t x352 = UINT8_MAX;

	t87 = ((x349==(x350<=x351))+x352);

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -20305;
	int64_t x355 = INT64_MAX;
	volatile int32_t x356 = -73821977;
	int32_t t88 = 2855;

	t88 = ((x353==(x354<=x355))+x356);

	if (t88 != -73821977) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int64_t x358 = 14663LL;
	int16_t x359 = INT16_MAX;
	volatile int64_t x360 = 209296038280074LL;
	int64_t t89 = -577300074LL;

	t89 = ((x357==(x358<=x359))+x360);

	if (t89 != 209296038280074LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 6U;
	static int32_t t90 = 233495;

	t90 = ((x361==(x362<=x363))+x364);

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MAX;
	uint32_t x367 = 125329U;
	int32_t x368 = -1;
	int32_t t91 = -8431;

	t91 = ((x365==(x366<=x367))+x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1737;
	static uint64_t x370 = 42094492353LLU;
	int16_t x371 = 12;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = -3535;

	t92 = ((x369==(x370<=x371))+x372);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	volatile int8_t x375 = INT8_MIN;
	uint16_t x376 = 5U;
	volatile int32_t t93 = 171;

	t93 = ((x373==(x374<=x375))+x376);

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MAX;
	uint8_t x378 = 10U;
	int8_t x380 = -1;
	int32_t t94 = 0;

	t94 = ((x377==(x378<=x379))+x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = UINT64_MAX;
	static int64_t x382 = INT64_MIN;
	static uint64_t x383 = 67261097529LLU;
	int32_t t95 = -10757;

	t95 = ((x381==(x382<=x383))+x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint64_t x386 = 40320714962149112LLU;
	uint64_t x387 = 6739242794360680369LLU;
	int64_t x388 = INT64_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x385==(x386<=x387))+x388);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1133U;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = 44035142559193559LLU;

	t97 = ((x389==(x390<=x391))+x392);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	volatile int32_t x394 = INT32_MAX;
	int32_t x396 = INT32_MAX;

	t98 = ((x393==(x394<=x395))+x396);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 4U;
	uint32_t x398 = 406072048U;
	int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 104150530605883LLU;
	static volatile uint64_t t99 = 8230868515585741290LLU;

	t99 = ((x397==(x398<=x399))+x400);

	if (t99 != 104150530605883LLU) { NG(); } else { ; }
	
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

