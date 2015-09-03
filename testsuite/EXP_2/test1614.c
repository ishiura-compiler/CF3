#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x22 = -1;
int8_t x25 = -1;
int16_t x27 = -1;
int16_t x28 = INT16_MAX;
volatile uint8_t x29 = 13U;
volatile int8_t x32 = 0;
int64_t x41 = 164459800930474LL;
int64_t x42 = INT64_MAX;
volatile int16_t x51 = INT16_MIN;
static int8_t x60 = INT8_MIN;
uint16_t x63 = 4U;
int32_t x68 = -487;
static int8_t x72 = -1;
int16_t x74 = -4067;
int16_t x76 = INT16_MIN;
static int8_t x78 = -1;
volatile int64_t x82 = -18160367885LL;
int8_t x85 = -3;
int64_t x90 = INT64_MIN;
volatile int32_t t21 = -221462;
int64_t x101 = INT64_MAX;
int8_t x104 = INT8_MAX;
volatile int32_t t25 = -1233;
uint8_t x113 = 29U;
int16_t x115 = 11;
volatile int32_t t26 = -190071515;
volatile int16_t x120 = -1;
volatile int16_t x121 = 3;
uint32_t x127 = UINT32_MAX;
static uint16_t x130 = UINT16_MAX;
static volatile uint64_t t32 = 54005780566788LLU;
volatile int32_t t34 = -6305815;
static uint64_t x153 = 982743714251592LLU;
static int32_t x155 = -1;
uint32_t x157 = 1305U;
static int64_t x162 = INT64_MIN;
uint64_t x174 = 245LLU;
uint32_t x175 = UINT32_MAX;
int64_t x181 = INT64_MAX;
static int32_t x183 = -1;
static int8_t x188 = 3;
int64_t x193 = INT64_MIN;
uint32_t x199 = UINT32_MAX;
volatile int16_t x208 = INT16_MIN;
int64_t x213 = -252110993032739648LL;
int8_t x222 = -1;
int32_t t50 = -13539;
int64_t x234 = INT64_MIN;
int32_t x235 = -870;
int64_t x239 = INT64_MIN;
static volatile int32_t t54 = 226931;
int64_t x246 = -1LL;
uint64_t x254 = UINT64_MAX;
int64_t x257 = 437LL;
int8_t x261 = INT8_MIN;
static volatile int8_t x262 = INT8_MIN;
static int32_t t60 = -212;
int64_t x269 = INT64_MIN;
int32_t t63 = 181100;
volatile int32_t t65 = 1610;
volatile int64_t x300 = -81LL;
int16_t x302 = INT16_MIN;
int32_t t70 = -6;
volatile int16_t x315 = 57;
static volatile int32_t t71 = -12966;
int64_t x320 = INT64_MAX;
static volatile uint32_t t73 = 153U;
int8_t x325 = INT8_MIN;
static int8_t x327 = -17;
uint8_t x330 = 0U;
int8_t x338 = -6;
int64_t x345 = -1LL;
volatile int64_t x346 = 102583485LL;
int8_t x347 = -1;
volatile int32_t t78 = 146419;
static uint16_t x352 = 6U;
int32_t x356 = -704547704;
int64_t x362 = 9088LL;
volatile uint32_t t82 = 193876207U;
int32_t x377 = INT32_MAX;
static int32_t x386 = -1;
static uint64_t x387 = UINT64_MAX;
static int16_t x390 = INT16_MIN;
uint32_t x396 = 27160205U;
int16_t x399 = INT16_MIN;
int32_t t90 = -1959675;
static uint16_t x404 = 1689U;
volatile uint64_t t92 = 440LLU;
int8_t x413 = INT8_MIN;
static int64_t t93 = -245135601LL;
uint64_t x418 = UINT64_MAX;
static int8_t x419 = INT8_MAX;
int32_t x422 = -3;
int64_t x434 = INT64_MAX;
int16_t x435 = 2389;
volatile int16_t x441 = INT16_MIN;
int16_t x442 = INT16_MAX;
volatile uint16_t x443 = 20439U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = -4;
	static volatile uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 10U;

	t0 = ((x1==(x2<=x3))-x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int32_t x6 = -604;
	uint8_t x7 = 1U;
	static int8_t x8 = 0;
	static volatile int32_t t1 = 404778477;

	t1 = ((x5==(x6<=x7))-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = INT16_MIN;
	static uint16_t x11 = 966U;
	uint8_t x12 = 1U;
	volatile int32_t t2 = 23;

	t2 = ((x9==(x10<=x11))-x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint32_t x18 = 4904422U;
	int64_t x19 = -1LL;
	uint32_t x20 = 32U;
	uint32_t t3 = 36545859U;

	t3 = ((x17==(x18<=x19))-x20);

	if (t3 != 4294967264U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 66374944U;
	volatile uint32_t t4 = 826288720U;

	t4 = ((x21==(x22<=x23))-x24);

	if (t4 != 4228592352U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	int32_t t5 = -478327;

	t5 = ((x25==(x26<=x27))-x28);

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x30 = 137353820063315547LL;
	volatile int64_t x31 = INT64_MAX;
	int32_t t6 = 111781076;

	t6 = ((x29==(x30<=x31))-x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static int64_t x34 = INT64_MIN;
	volatile int16_t x35 = -1;
	uint32_t x36 = 2U;
	static volatile uint32_t t7 = 25654685U;

	t7 = ((x33==(x34<=x35))-x36);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	int8_t x38 = -14;
	int16_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t8 = 123825236U;

	t8 = ((x37==(x38<=x39))-x40);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x43 = INT32_MAX;
	static int32_t x44 = -1;
	volatile int32_t t9 = 7;

	t9 = ((x41==(x42<=x43))-x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1073550LL;
	static int8_t x46 = -1;
	volatile int16_t x47 = -7425;
	uint64_t x48 = 166035LLU;
	volatile uint64_t t10 = 247105711549173LLU;

	t10 = ((x45==(x46<=x47))-x48);

	if (t10 != 18446744073709385581LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static uint64_t x50 = 83877316LLU;
	static int32_t x52 = INT32_MAX;
	int32_t t11 = 11;

	t11 = ((x49==(x50<=x51))-x52);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -241197493;
	int64_t x58 = 9952042LL;
	volatile int8_t x59 = 1;
	static volatile int32_t t12 = 189;

	t12 = ((x57==(x58<=x59))-x60);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x61 = 45818411498474919LLU;
	static int32_t x62 = INT32_MIN;
	uint32_t x64 = 9766U;
	static volatile uint32_t t13 = 105U;

	t13 = ((x61==(x62<=x63))-x64);

	if (t13 != 4294957530U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	int64_t x67 = INT64_MAX;
	volatile int32_t t14 = -14;

	t14 = ((x65==(x66<=x67))-x68);

	if (t14 != 487) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MIN;
	uint16_t x70 = 6U;
	int32_t x71 = -503878;
	volatile int32_t t15 = -14142;

	t15 = ((x69==(x70<=x71))-x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x73 = INT16_MAX;
	static uint64_t x75 = UINT64_MAX;
	static volatile int32_t t16 = -241373;

	t16 = ((x73==(x74<=x75))-x76);

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	volatile int8_t x79 = 3;
	int32_t x80 = -1;
	int32_t t17 = 6;

	t17 = ((x77==(x78<=x79))-x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x81 = 453U;
	volatile uint64_t x83 = 483084212206749LLU;
	uint64_t x84 = 225LLU;
	uint64_t t18 = 37322524356348706LLU;

	t18 = ((x81==(x82<=x83))-x84);

	if (t18 != 18446744073709551391LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MAX;
	static int32_t t19 = 872;

	t19 = ((x85==(x86<=x87))-x88);

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	static uint64_t x91 = 29LLU;
	int64_t x92 = -1LL;
	volatile int64_t t20 = 356825745503350287LL;

	t20 = ((x89==(x90<=x91))-x92);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 3058340LLU;
	static int64_t x94 = -842LL;
	uint32_t x95 = UINT32_MAX;
	volatile int8_t x96 = INT8_MAX;

	t21 = ((x93==(x94<=x95))-x96);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = INT64_MIN;
	uint64_t x98 = 964522134693612LLU;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t x100 = 110759770;
	volatile int32_t t22 = -72966254;

	t22 = ((x97==(x98<=x99))-x100);

	if (t22 != -110759770) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x102 = 2672196257221LLU;
	uint64_t x103 = 2386058258816767LLU;
	volatile int32_t t23 = 3984356;

	t23 = ((x101==(x102<=x103))-x104);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 117U;
	volatile uint8_t x108 = 11U;
	volatile int32_t t24 = 45966311;

	t24 = ((x105==(x106<=x107))-x108);

	if (t24 != -11) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1293886;
	uint64_t x110 = 936171639268LLU;
	volatile uint64_t x111 = 34302322810623LLU;
	int8_t x112 = -1;

	t25 = ((x109==(x110<=x111))-x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = INT16_MIN;
	int32_t x116 = 7;

	t26 = ((x113==(x114<=x115))-x116);

	if (t26 != -7) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = 3301LLU;
	int16_t x118 = INT16_MAX;
	volatile int16_t x119 = 15188;
	int32_t t27 = -2220;

	t27 = ((x117==(x118<=x119))-x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x122 = UINT8_MAX;
	static uint16_t x123 = 35U;
	volatile int64_t x124 = INT64_MAX;
	volatile int64_t t28 = -664624LL;

	t28 = ((x121==(x122<=x123))-x124);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	uint16_t x126 = UINT16_MAX;
	static uint16_t x128 = 430U;
	volatile int32_t t29 = -37940;

	t29 = ((x125==(x126<=x127))-x128);

	if (t29 != -430) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 11LLU;
	int64_t x131 = -1LL;
	uint32_t x132 = 621U;
	uint32_t t30 = 5U;

	t30 = ((x129==(x130<=x131))-x132);

	if (t30 != 4294966675U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MAX;
	static int8_t x134 = INT8_MAX;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t31 = 2;

	t31 = ((x133==(x134<=x135))-x136);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 1862561170U;
	uint16_t x138 = 1904U;
	volatile uint32_t x139 = 1351U;
	static uint64_t x140 = 22359110864LLU;

	t32 = ((x137==(x138<=x139))-x140);

	if (t32 != 18446744051350440752LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = -28;
	static int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MAX;
	int32_t x144 = -1;
	int32_t t33 = 52704381;

	t33 = ((x141==(x142<=x143))-x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x145 = 0U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	uint8_t x148 = 0U;

	t34 = ((x145==(x146<=x147))-x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -337LL;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 655LLU;
	uint64_t t35 = 10016489874527694LLU;

	t35 = ((x149==(x150<=x151))-x152);

	if (t35 != 18446744073709550961LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x154 = 25532U;
	int16_t x156 = 1;
	int32_t t36 = 12642992;

	t36 = ((x153==(x154<=x155))-x156);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = -1;
	int8_t x159 = -1;
	int16_t x160 = INT16_MAX;
	int32_t t37 = 24;

	t37 = ((x157==(x158<=x159))-x160);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = 787U;
	int16_t x163 = -1;
	static int8_t x164 = -1;
	int32_t t38 = 586805693;

	t38 = ((x161==(x162<=x163))-x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	int8_t x167 = -1;
	uint8_t x168 = 0U;
	static int32_t t39 = 3;

	t39 = ((x165==(x166<=x167))-x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x170 = UINT16_MAX;
	static int64_t x171 = -1LL;
	int32_t x172 = INT32_MAX;
	static volatile int32_t t40 = 44717117;

	t40 = ((x169==(x170<=x171))-x172);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	int64_t x176 = -1LL;
	static int64_t t41 = -47078042932894LL;

	t41 = ((x173==(x174<=x175))-x176);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x182 = 1107U;
	volatile int16_t x184 = INT16_MAX;
	int32_t t42 = -2692;

	t42 = ((x181==(x182<=x183))-x184);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x185 = 1;
	uint8_t x186 = 7U;
	int32_t x187 = INT32_MIN;
	volatile int32_t t43 = -10522;

	t43 = ((x185==(x186<=x187))-x188);

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x194 = INT64_MAX;
	int16_t x195 = 218;
	volatile int64_t x196 = -1LL;
	int64_t t44 = 487781LL;

	t44 = ((x193==(x194<=x195))-x196);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	static uint64_t x200 = 1555739232033LLU;
	volatile uint64_t t45 = 1843705LLU;

	t45 = ((x197==(x198<=x199))-x200);

	if (t45 != 18446742517970319583LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 85235997669553057LLU;
	int8_t x206 = -1;
	volatile int8_t x207 = INT8_MIN;
	int32_t t46 = 5703460;

	t46 = ((x205==(x206<=x207))-x208);

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = -1LL;
	volatile int8_t x211 = INT8_MIN;
	int32_t x212 = -3;
	int32_t t47 = 43371746;

	t47 = ((x209==(x210<=x211))-x212);

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = -1;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = 453269964U;
	uint32_t t48 = 18739860U;

	t48 = ((x213==(x214<=x215))-x216);

	if (t48 != 3841697332U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 1486517;
	int32_t x218 = INT32_MAX;
	volatile uint16_t x219 = 2U;
	static int64_t x220 = -7454381288787756LL;
	static int64_t t49 = 3166738315504681LL;

	t49 = ((x217==(x218<=x219))-x220);

	if (t49 != 7454381288787756LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x221 = 1106U;
	int16_t x223 = INT16_MAX;
	int32_t x224 = 43326;

	t50 = ((x221==(x222<=x223))-x224);

	if (t50 != -43326) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 34U;
	static int16_t x226 = -2303;
	uint8_t x227 = 1U;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint32_t t51 = 44U;

	t51 = ((x225==(x226<=x227))-x228);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	static int32_t x230 = -55814239;
	int8_t x231 = INT8_MAX;
	volatile int16_t x232 = INT16_MAX;
	int32_t t52 = 236494296;

	t52 = ((x229==(x230<=x231))-x232);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -3498;
	int32_t x236 = -1;
	int32_t t53 = -22530;

	t53 = ((x233==(x234<=x235))-x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = 0LL;
	volatile int32_t x240 = 624830;

	t54 = ((x237==(x238<=x239))-x240);

	if (t54 != -624830) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MAX;
	volatile int8_t x242 = 1;
	int32_t x243 = INT32_MAX;
	uint8_t x244 = 7U;
	int32_t t55 = 1;

	t55 = ((x241==(x242<=x243))-x244);

	if (t55 != -7) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x247 = 0U;
	uint64_t x248 = 496431089902469LLU;
	uint64_t t56 = 2634381917706LLU;

	t56 = ((x245==(x246<=x247))-x248);

	if (t56 != 18446247642619649147LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -1LL;
	uint8_t x250 = 51U;
	int8_t x251 = INT8_MAX;
	static volatile uint32_t x252 = 116U;
	uint32_t t57 = 45304435U;

	t57 = ((x249==(x250<=x251))-x252);

	if (t57 != 4294967180U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x253 = INT16_MIN;
	int8_t x255 = 1;
	uint8_t x256 = 72U;
	int32_t t58 = -223257;

	t58 = ((x253==(x254<=x255))-x256);

	if (t58 != -72) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x258 = 218LL;
	uint16_t x259 = 977U;
	uint16_t x260 = 36U;
	int32_t t59 = -4;

	t59 = ((x257==(x258<=x259))-x260);

	if (t59 != -36) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x263 = 124488U;
	int8_t x264 = INT8_MIN;

	t60 = ((x261==(x262<=x263))-x264);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = UINT32_MAX;
	static uint32_t x266 = 1697U;
	uint64_t x267 = 202260953837223192LLU;
	static int64_t x268 = -329578753476045838LL;
	volatile int64_t t61 = 3363173LL;

	t61 = ((x265==(x266<=x267))-x268);

	if (t61 != 329578753476045838LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = -6;
	uint16_t x271 = 7U;
	static int32_t x272 = INT32_MAX;
	volatile int32_t t62 = 23;

	t62 = ((x269==(x270<=x271))-x272);

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 11U;
	int64_t x274 = 174LL;
	volatile int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MAX;

	t63 = ((x273==(x274<=x275))-x276);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = 145;
	int16_t x279 = 7;
	int64_t x280 = -1033724021837LL;
	static volatile int64_t t64 = 415912856439LL;

	t64 = ((x277==(x278<=x279))-x280);

	if (t64 != 1033724021837LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = 289;
	uint64_t x283 = 866137962613428958LLU;
	int16_t x284 = INT16_MIN;

	t65 = ((x281==(x282<=x283))-x284);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = -2556269592138254889LL;
	uint16_t x290 = UINT16_MAX;
	static int32_t x291 = -21205551;
	int64_t x292 = -1LL;
	int64_t t66 = -28245858575843192LL;

	t66 = ((x289==(x290<=x291))-x292);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = UINT8_MAX;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -437449293240LL;
	static volatile int64_t t67 = 33943973009038LL;

	t67 = ((x293==(x294<=x295))-x296);

	if (t67 != 437449293240LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x297 = -704081;
	volatile int64_t x298 = INT64_MIN;
	static uint16_t x299 = 130U;
	volatile int64_t t68 = -626941LL;

	t68 = ((x297==(x298<=x299))-x300);

	if (t68 != 81LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x301 = INT8_MIN;
	static volatile uint64_t x303 = 56480781430742LLU;
	volatile uint64_t x304 = 765750499363706LLU;
	uint64_t t69 = 213979LLU;

	t69 = ((x301==(x302<=x303))-x304);

	if (t69 != 18445978323210187910LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 15U;
	uint64_t x307 = 41LLU;
	static int16_t x308 = INT16_MAX;

	t70 = ((x305==(x306<=x307))-x308);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x313 = UINT8_MAX;
	volatile int64_t x314 = INT64_MIN;
	static volatile uint8_t x316 = 12U;

	t71 = ((x313==(x314<=x315))-x316);

	if (t71 != -12) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x317 = INT8_MAX;
	int8_t x318 = 1;
	int32_t x319 = -1;
	int64_t t72 = -7886917363151LL;

	t72 = ((x317==(x318<=x319))-x320);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = 3;
	int16_t x323 = INT16_MIN;
	static uint32_t x324 = 6U;

	t73 = ((x321==(x322<=x323))-x324);

	if (t73 != 4294967290U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x326 = 0;
	static int64_t x328 = 29LL;
	volatile int64_t t74 = -65555LL;

	t74 = ((x325==(x326<=x327))-x328);

	if (t74 != -29LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x329 = 425236085902718LL;
	volatile int32_t x331 = -3858163;
	static int16_t x332 = INT16_MIN;
	int32_t t75 = 58586;

	t75 = ((x329==(x330<=x331))-x332);

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = -1;
	volatile int32_t x339 = 1646995;
	int16_t x340 = INT16_MIN;
	volatile int32_t t76 = -2879;

	t76 = ((x337==(x338<=x339))-x340);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = -1;
	static int8_t x343 = 1;
	static int16_t x344 = INT16_MIN;
	int32_t t77 = -104497131;

	t77 = ((x341==(x342<=x343))-x344);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x348 = UINT16_MAX;

	t78 = ((x345==(x346<=x347))-x348);

	if (t78 != -65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int8_t x350 = INT8_MIN;
	int32_t x351 = 2006258;
	static int32_t t79 = -74936;

	t79 = ((x349==(x350<=x351))-x352);

	if (t79 != -6) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x353 = INT32_MIN;
	uint8_t x354 = 5U;
	volatile uint64_t x355 = 1112572549752LLU;
	volatile int32_t t80 = -42298063;

	t80 = ((x353==(x354<=x355))-x356);

	if (t80 != 704547704) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x363 = -1;
	static uint64_t x364 = 351535LLU;
	volatile uint64_t t81 = 146001405LLU;

	t81 = ((x361==(x362<=x363))-x364);

	if (t81 != 18446744073709200081LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = 76939;
	static uint32_t x368 = 129079U;

	t82 = ((x365==(x366<=x367))-x368);

	if (t82 != 4294838217U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	static int16_t x371 = 209;
	int32_t x372 = 4;
	int32_t t83 = 176688;

	t83 = ((x369==(x370<=x371))-x372);

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = 1042386007;
	uint64_t x374 = 261276819LLU;
	uint64_t x375 = 69452565754209012LLU;
	int16_t x376 = -1;
	int32_t t84 = 7675;

	t84 = ((x373==(x374<=x375))-x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x378 = -1;
	uint16_t x379 = 2580U;
	uint64_t x380 = 86856793261434446LLU;
	static volatile uint64_t t85 = 10LLU;

	t85 = ((x377==(x378<=x379))-x380);

	if (t85 != 18359887280448117170LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x381 = INT64_MIN;
	uint64_t x382 = 268091772LLU;
	int32_t x383 = -1;
	uint64_t x384 = 1574892326991544LLU;
	volatile uint64_t t86 = 10323008LLU;

	t86 = ((x381==(x382<=x383))-x384);

	if (t86 != 18445169181382560072LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t87 = 46501282204022LLU;

	t87 = ((x385==(x386<=x387))-x388);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MAX;
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 3U;
	static volatile int32_t t88 = 28684;

	t88 = ((x389==(x390<=x391))-x392);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = -4043327;
	volatile int32_t x394 = INT32_MIN;
	uint32_t x395 = 12313U;
	uint32_t t89 = 0U;

	t89 = ((x393==(x394<=x395))-x396);

	if (t89 != 4267807091U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = INT64_MAX;
	uint16_t x400 = 2375U;

	t90 = ((x397==(x398<=x399))-x400);

	if (t90 != -2375) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = INT64_MAX;
	int32_t x402 = -1;
	uint64_t x403 = 1LLU;
	volatile int32_t t91 = -2;

	t91 = ((x401==(x402<=x403))-x404);

	if (t91 != -1689) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x405 = INT32_MIN;
	static int32_t x406 = INT32_MIN;
	uint16_t x407 = 7U;
	static volatile uint64_t x408 = 108379959039110LLU;

	t92 = ((x405==(x406<=x407))-x408);

	if (t92 != 18446635693750512506LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x414 = INT32_MIN;
	int8_t x415 = -1;
	static volatile int64_t x416 = 17LL;

	t93 = ((x413==(x414<=x415))-x416);

	if (t93 != -17LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x417 = 598U;
	volatile int64_t x420 = INT64_MAX;
	int64_t t94 = 941349134LL;

	t94 = ((x417==(x418<=x419))-x420);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int8_t x423 = INT8_MIN;
	uint32_t x424 = 2147876U;
	static volatile uint32_t t95 = 3U;

	t95 = ((x421==(x422<=x423))-x424);

	if (t95 != 4292819420U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x429 = 37U;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = 5U;
	static uint32_t x432 = 8968U;
	static volatile uint32_t t96 = 7855U;

	t96 = ((x429==(x430<=x431))-x432);

	if (t96 != 4294958328U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = INT32_MIN;
	volatile uint16_t x436 = 775U;
	int32_t t97 = 11415;

	t97 = ((x433==(x434<=x435))-x436);

	if (t97 != -775) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x444 = INT16_MIN;
	volatile int32_t t98 = 51;

	t98 = ((x441==(x442<=x443))-x444);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = 3LLU;
	uint32_t x446 = 67418528U;
	uint8_t x447 = 4U;
	int64_t x448 = 1563594954037164108LL;
	volatile int64_t t99 = -15987694003297701LL;

	t99 = ((x445==(x446<=x447))-x448);

	if (t99 != -1563594954037164108LL) { NG(); } else { ; }
	
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

