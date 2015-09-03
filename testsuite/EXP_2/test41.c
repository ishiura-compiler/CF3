#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
volatile int8_t x16 = INT8_MIN;
volatile int64_t t1 = -419422600483LL;
uint32_t x23 = UINT32_MAX;
int16_t x42 = INT16_MIN;
static volatile uint32_t x51 = UINT32_MAX;
int32_t x53 = -1;
int8_t x56 = INT8_MAX;
uint64_t x66 = 366680169603109033LLU;
uint32_t t16 = 1761895782U;
uint8_t x94 = 47U;
int16_t x96 = INT16_MIN;
uint16_t x97 = 6U;
uint8_t x100 = UINT8_MAX;
volatile uint64_t x104 = UINT64_MAX;
static int8_t x119 = 53;
uint8_t x130 = UINT8_MAX;
static uint64_t x131 = UINT64_MAX;
static uint64_t x133 = UINT64_MAX;
uint16_t x143 = 15641U;
uint32_t x144 = 1087708U;
int32_t x147 = INT32_MAX;
static volatile uint32_t t31 = 25820U;
volatile uint64_t t34 = 196552466LLU;
int64_t x168 = 2095937585LL;
static int64_t t35 = -130787773920LL;
uint16_t x170 = 819U;
int8_t x172 = -2;
volatile uint16_t x174 = UINT16_MAX;
volatile int64_t x176 = -1LL;
int8_t x178 = -2;
uint64_t x179 = 6017468202LLU;
volatile uint8_t x182 = 0U;
static int8_t x195 = INT8_MIN;
int8_t x207 = INT8_MIN;
uint64_t x208 = 136845LLU;
static uint8_t x211 = 11U;
int8_t x212 = INT8_MIN;
volatile uint32_t t44 = 92U;
static int64_t x215 = -18503LL;
int32_t x219 = INT32_MIN;
int64_t x221 = -1LL;
static int64_t t47 = 911LL;
int32_t t49 = 4394183;
int8_t x244 = INT8_MIN;
uint64_t t51 = 1227306041LLU;
int64_t x248 = -972042058726665LL;
int16_t x249 = INT16_MIN;
volatile int8_t x252 = INT8_MAX;
volatile uint64_t t53 = 975657LLU;
uint32_t x269 = 22347U;
uint32_t x271 = UINT32_MAX;
uint16_t x277 = 10U;
int32_t x280 = INT32_MAX;
volatile uint64_t t57 = 1592389097940180595LLU;
volatile uint64_t t58 = 92352192786320747LLU;
int8_t x285 = -1;
static volatile int64_t t60 = -970888675221388LL;
int64_t x304 = -9778817058LL;
int16_t x309 = -1475;
int8_t x312 = INT8_MAX;
static uint16_t x314 = 2314U;
int32_t x316 = INT32_MAX;
int32_t x319 = INT32_MAX;
volatile int64_t x320 = 10LL;
int8_t x322 = -1;
int64_t x328 = 3797895050709LL;
int64_t x329 = 31503LL;
static int8_t x331 = INT8_MIN;
int64_t t67 = 469LL;
static int32_t t68 = -310688;
uint32_t t69 = 756337U;
int32_t x348 = INT32_MIN;
volatile uint64_t t72 = 6643976275640400LLU;
int16_t x353 = -1;
int64_t t73 = 105003532594468229LL;
int64_t x357 = INT64_MAX;
int8_t x359 = INT8_MAX;
static int64_t x360 = INT64_MIN;
uint64_t x362 = 1329915LLU;
static uint32_t x365 = 108U;
int8_t x367 = INT8_MIN;
uint64_t t76 = 22LLU;
uint64_t x373 = 406498164506374076LLU;
static uint8_t x391 = 3U;
volatile int32_t t80 = 0;
static int32_t x397 = 622850220;
int32_t t82 = 363298;
uint64_t x401 = 115LLU;
static int16_t x404 = 1;
static volatile int8_t x408 = INT8_MAX;
int8_t x424 = 3;
uint8_t x436 = UINT8_MAX;
uint16_t x441 = UINT16_MAX;
static uint32_t x443 = UINT32_MAX;
static uint16_t x455 = 52U;
volatile int64_t t93 = -86000LL;
volatile int32_t x466 = -1;
static volatile uint8_t x473 = 7U;
volatile uint16_t x475 = 124U;
int64_t x476 = 189321594468187936LL;
int32_t t96 = 10509555;
uint32_t x484 = 1299U;
uint16_t x489 = UINT16_MAX;
static volatile uint64_t t98 = 2643565648366LLU;
int64_t x493 = 433045LL;
uint64_t t99 = 1802458393882LLU;


void f0(void) {
	static volatile int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t0 = 8010722142910LLU;

	t0 = ((x5/(x6+x7))-x8);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 55U;
	int64_t x15 = INT64_MIN;

	t1 = ((x13/(x14+x15))-x16);

	if (t1 != 128LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = -1;
	static int64_t x18 = -1LL;
	int32_t x19 = -1;
	static int8_t x20 = INT8_MAX;
	int64_t t2 = -23072LL;

	t2 = ((x17/(x18+x19))-x20);

	if (t2 != -127LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MIN;
	static int8_t x22 = INT8_MIN;
	uint8_t x24 = 87U;
	uint32_t t3 = 235163247U;

	t3 = ((x21/(x22+x23))-x24);

	if (t3 != 4294967209U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	volatile uint32_t x26 = 929684U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 7U;
	volatile uint32_t t4 = 2035U;

	t4 = ((x25/(x26+x27))-x28);

	if (t4 != 4294967289U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1;
	int64_t x34 = -1LL;
	static uint64_t x35 = 92525286361394034LLU;
	int8_t x36 = -35;
	volatile uint64_t t5 = 4739930141410356LLU;

	t5 = ((x33/(x34+x35))-x36);

	if (t5 != 234LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	static int32_t x39 = -8;
	static int8_t x40 = INT8_MAX;
	volatile int32_t t6 = -1;

	t6 = ((x37/(x38+x39))-x40);

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MIN;
	int16_t x43 = -54;
	int8_t x44 = 2;
	int64_t t7 = -9081210805284661LL;

	t7 = ((x41/(x42+x43))-x44);

	if (t7 != 281011883396950LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 2U;
	uint64_t x46 = 4253758523LLU;
	volatile int32_t x47 = -1;
	static int64_t x48 = INT64_MAX;
	uint64_t t8 = 0LLU;

	t8 = ((x45/(x46+x47))-x48);

	if (t8 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	volatile int32_t x50 = INT32_MIN;
	uint64_t x52 = 2623299530932463188LLU;
	uint64_t t9 = 28785576LLU;

	t9 = ((x49/(x50+x51))-x52);

	if (t9 != 15823444538482121130LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x54 = -1;
	uint64_t x55 = 1188871588032LLU;
	uint64_t t10 = 33822841696981722LLU;

	t10 = ((x53/(x54+x55))-x56);

	if (t10 != 15516051LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	uint8_t x58 = 4U;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t11 = 15555LL;

	t11 = ((x57/(x58+x59))-x60);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MAX;
	static volatile uint32_t x63 = 1U;
	static int32_t x64 = 88885004;
	uint32_t t12 = 12369U;

	t12 = ((x61/(x62+x63))-x64);

	if (t12 != 4206082293U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	int8_t x67 = -1;
	int8_t x68 = -5;
	volatile uint64_t t13 = 129938872625297692LLU;

	t13 = ((x65/(x66+x67))-x68);

	if (t13 != 55LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	volatile int32_t x70 = -1;
	int32_t x71 = 15169893;
	uint32_t x72 = 24108911U;
	int64_t t14 = -141870660105209LL;

	t14 = ((x69/(x70+x71))-x72);

	if (t14 != -608029230955LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	int16_t x74 = -1;
	int8_t x75 = -44;
	uint16_t x76 = 992U;
	int32_t t15 = 33081811;

	t15 = ((x73/(x74+x75))-x76);

	if (t15 != -992) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1351839;
	volatile uint32_t x78 = 3693U;
	int16_t x79 = -1;
	volatile int8_t x80 = -20;

	t16 = ((x77/(x78+x79))-x80);

	if (t16 != 1162971U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = 3517631104595LL;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 3664057LLU;
	int64_t x84 = INT64_MIN;
	uint64_t t17 = 7835120167731LLU;

	t17 = ((x81/(x82+x83))-x84);

	if (t17 != 9223372036854776626LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = -3379;
	int8_t x91 = -1;
	volatile int64_t x92 = -1LL;
	volatile int64_t t18 = -501467693825399LL;

	t18 = ((x89/(x90+x91))-x92);

	if (t18 != -18LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 393U;
	int64_t x95 = INT64_MIN;
	int64_t t19 = 8127LL;

	t19 = ((x93/(x94+x95))-x96);

	if (t19 != 32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x98 = INT16_MAX;
	int64_t x99 = -1LL;
	static volatile int64_t t20 = -3571388221570LL;

	t20 = ((x97/(x98+x99))-x100);

	if (t20 != -255LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x101 = -3014162440606219577LL;
	int32_t x102 = -1;
	volatile int32_t x103 = -1;
	uint64_t t21 = 71059202LLU;

	t21 = ((x101/(x102+x103))-x104);

	if (t21 != 1507081220303109789LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	uint32_t x106 = 153U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = 160;
	uint32_t t22 = 659U;

	t22 = ((x105/(x106+x107))-x108);

	if (t22 != 4294967136U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 519340452649LLU;
	static int8_t x110 = INT8_MAX;
	volatile int8_t x111 = INT8_MAX;
	static volatile int8_t x112 = INT8_MIN;
	uint64_t t23 = 0LLU;

	t23 = ((x109/(x110+x111))-x112);

	if (t23 != 2044647579LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = -3917166937962LL;
	int32_t x120 = INT32_MIN;
	volatile int64_t t24 = 0LL;

	t24 = ((x117/(x118+x119))-x120);

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = -4075611450745551903LL;
	int32_t x122 = INT32_MAX;
	uint64_t x123 = 3779769119720158435LLU;
	static volatile int64_t x124 = -1013222768LL;
	uint64_t t25 = 153638398278298LLU;

	t25 = ((x121/(x122+x123))-x124);

	if (t25 != 1013222771LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = 74084LL;
	volatile int8_t x127 = 26;
	volatile uint8_t x128 = UINT8_MAX;
	static int64_t t26 = -49730149170LL;

	t26 = ((x125/(x126+x127))-x128);

	if (t26 != -255LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	uint64_t t27 = 2205829849944056819LLU;

	t27 = ((x129/(x130+x131))-x132);

	if (t27 != 72624976668147968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x134 = INT64_MAX;
	volatile int16_t x135 = -8;
	int64_t x136 = -1LL;
	static volatile uint64_t t28 = 9LLU;

	t28 = ((x133/(x134+x135))-x136);

	if (t28 != 3LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x141 = UINT16_MAX;
	int16_t x142 = INT16_MIN;
	volatile uint32_t t29 = 4U;

	t29 = ((x141/(x142+x143))-x144);

	if (t29 != 4293879585U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = -5009;
	int64_t x148 = -50212LL;
	static volatile int64_t t30 = -1LL;

	t30 = ((x145/(x146+x147))-x148);

	if (t30 != 50211LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x150 = 0U;
	uint32_t x151 = 587U;
	int32_t x152 = 3101549;

	t31 = ((x149/(x150+x151))-x152);

	if (t31 != 4215260U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x153 = 9U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t32 = -120LL;

	t32 = ((x153/(x154+x155))-x156);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = 1;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = -1LL;
	static volatile int32_t x160 = INT32_MAX;
	volatile int64_t t33 = -1356LL;

	t33 = ((x157/(x158+x159))-x160);

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	static int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = 72LLU;

	t34 = ((x161/(x162+x163))-x164);

	if (t34 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = -24;
	int8_t x166 = -1;
	volatile int16_t x167 = INT16_MIN;

	t35 = ((x165/(x166+x167))-x168);

	if (t35 != -2095937585LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 272LLU;
	static int8_t x171 = -1;
	uint64_t t36 = 715727829334602221LLU;

	t36 = ((x169/(x170+x171))-x172);

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = 33U;
	static int16_t x175 = -1;
	volatile int64_t t37 = -5710086369562964LL;

	t37 = ((x173/(x174+x175))-x176);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x177 = INT32_MIN;
	static uint16_t x180 = 781U;
	uint64_t t38 = 5024LLU;

	t38 = ((x177/(x178+x179))-x180);

	if (t38 != 3065531675LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 6633U;
	static int32_t x183 = -1;
	int64_t x184 = -251773LL;
	volatile int64_t t39 = -19783142711LL;

	t39 = ((x181/(x182+x183))-x184);

	if (t39 != 251773LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = -55LL;
	static int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	int64_t t40 = -29067927523684LL;

	t40 = ((x185/(x186+x187))-x188);

	if (t40 != 33353LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x189 = 47U;
	static int64_t x190 = 6662LL;
	int32_t x191 = INT32_MIN;
	static int8_t x192 = INT8_MAX;
	int64_t t41 = -20600107908957902LL;

	t41 = ((x189/(x190+x191))-x192);

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 17182442544258LLU;
	int32_t x194 = 433795958;
	int16_t x196 = INT16_MAX;
	uint64_t t42 = 123737LLU;

	t42 = ((x193/(x194+x195))-x196);

	if (t42 != 6842LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MIN;
	volatile uint32_t x206 = 1U;
	static uint64_t t43 = 69923799812063812LLU;

	t43 = ((x205/(x206+x207))-x208);

	if (t43 != 18446744071561931060LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x209 = 3027U;
	volatile int16_t x210 = -120;

	t44 = ((x209/(x210+x211))-x212);

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = 2U;
	volatile uint16_t x214 = 737U;
	uint8_t x216 = 78U;
	static int64_t t45 = 151LL;

	t45 = ((x213/(x214+x215))-x216);

	if (t45 != -78LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MAX;
	uint64_t x220 = 14739642LLU;
	volatile uint64_t t46 = 588LLU;

	t46 = ((x217/(x218+x219))-x220);

	if (t46 != 18446744073694811975LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	static int16_t x224 = INT16_MIN;

	t47 = ((x221/(x222+x223))-x224);

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = 1;
	int16_t x227 = 1850;
	static volatile uint16_t x228 = 15734U;
	int32_t t48 = -87433749;

	t48 = ((x225/(x226+x227))-x228);

	if (t48 != -15734) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 13U;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 0U;
	static uint16_t x232 = UINT16_MAX;

	t49 = ((x229/(x230+x231))-x232);

	if (t49 != -65535) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile uint16_t x238 = UINT16_MAX;
	uint8_t x239 = 12U;
	int16_t x240 = INT16_MIN;
	uint64_t t50 = 785189885289LLU;

	t50 = ((x237/(x238+x239))-x240);

	if (t50 != 281427740031693LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = 1289622U;
	uint64_t x242 = 69869547698195LLU;
	int32_t x243 = -1;

	t51 = ((x241/(x242+x243))-x244);

	if (t51 != 128LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x245 = INT32_MIN;
	int16_t x246 = -10;
	uint16_t x247 = UINT16_MAX;
	int64_t t52 = 3479251207462772LL;

	t52 = ((x245/(x246+x247))-x248);

	if (t52 != 972042058693892LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 28691015LLU;

	t53 = ((x249/(x250+x251))-x252);

	if (t53 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = -1LL;
	int32_t x254 = 2049051;
	static int8_t x255 = -1;
	static volatile uint8_t x256 = 70U;
	volatile int64_t t54 = -43059998197LL;

	t54 = ((x253/(x254+x255))-x256);

	if (t54 != -70LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = 52690893304LL;
	uint64_t x258 = 32272LLU;
	uint64_t x259 = UINT64_MAX;
	static volatile uint8_t x260 = UINT8_MAX;
	static uint64_t t55 = 61974297376LLU;

	t55 = ((x257/(x258+x259))-x260);

	if (t55 != 1632507LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x270 = 26;
	uint8_t x272 = UINT8_MAX;
	static uint32_t t56 = 157363U;

	t56 = ((x269/(x270+x271))-x272);

	if (t56 != 638U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x278 = 27;
	uint64_t x279 = UINT64_MAX;

	t57 = ((x277/(x278+x279))-x280);

	if (t57 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = 16122651265489LL;
	static int8_t x282 = -3;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = 715853221465LLU;

	t58 = ((x281/(x282+x283))-x284);

	if (t58 != 18446743357364350924LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x286 = 1LL;
	uint8_t x287 = 1U;
	static uint32_t x288 = 98U;
	int64_t t59 = -5804LL;

	t59 = ((x285/(x286+x287))-x288);

	if (t59 != -98LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x293 = 4447U;
	uint32_t x294 = UINT32_MAX;
	volatile int16_t x295 = INT16_MIN;
	int64_t x296 = 251LL;

	t60 = ((x293/(x294+x295))-x296);

	if (t60 != -251LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x301 = 334;
	static int64_t x302 = -1LL;
	int8_t x303 = INT8_MAX;
	volatile int64_t t61 = 1534LL;

	t61 = ((x301/(x302+x303))-x304);

	if (t61 != 9778817060LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x310 = -1LL;
	int64_t x311 = 390714914726643233LL;
	int64_t t62 = -60177954LL;

	t62 = ((x309/(x310+x311))-x312);

	if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x313 = INT32_MIN;
	int64_t x315 = -259113LL;
	int64_t t63 = -9893400676971LL;

	t63 = ((x313/(x314+x315))-x316);

	if (t63 != -2147475285LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x317 = 16U;
	static volatile int64_t x318 = 1036702LL;
	static int64_t t64 = 69410384LL;

	t64 = ((x317/(x318+x319))-x320);

	if (t64 != -10LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x321 = 1LLU;
	int8_t x323 = -52;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t65 = 2589506921LLU;

	t65 = ((x321/(x322+x323))-x324);

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	uint64_t x327 = 201425746LLU;
	uint64_t t66 = 17150711084953LLU;

	t66 = ((x325/(x326+x327))-x328);

	if (t66 != 18446740321604933688LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x330 = 83598U;
	static int64_t x332 = INT64_MAX;

	t67 = ((x329/(x330+x331))-x332);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = -1;
	int16_t x334 = 74;
	uint8_t x335 = UINT8_MAX;
	static int8_t x336 = INT8_MAX;

	t68 = ((x333/(x334+x335))-x336);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = 6;
	static uint32_t x338 = UINT32_MAX;
	int8_t x339 = -2;
	int16_t x340 = INT16_MIN;

	t69 = ((x337/(x338+x339))-x340);

	if (t69 != 32768U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = -1LL;
	static int32_t x342 = INT32_MIN;
	volatile uint32_t x343 = 11U;
	static volatile int16_t x344 = 1;
	int64_t t70 = -4141254241741634LL;

	t70 = ((x341/(x342+x343))-x344);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x345 = 12LL;
	int32_t x346 = 4757;
	volatile int8_t x347 = -1;
	int64_t t71 = 57709727584317920LL;

	t71 = ((x345/(x346+x347))-x348);

	if (t71 != 2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x349 = 1213631792U;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = 101466274854552LLU;
	int8_t x352 = INT8_MAX;

	t72 = ((x349/(x350+x351))-x352);

	if (t72 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x354 = 9U;
	int64_t x355 = -1LL;
	int8_t x356 = -1;

	t73 = ((x353/(x354+x355))-x356);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x358 = INT64_MIN;
	int64_t t74 = INT64_MAX;

	t74 = ((x357/(x358+x359))-x360);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MAX;
	int8_t x363 = 19;
	static int64_t x364 = -215LL;
	volatile uint64_t t75 = 95942663696LLU;

	t75 = ((x361/(x362+x363))-x364);

	if (t75 != 215LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x366 = 1;
	static uint64_t x368 = 79069609LLU;

	t76 = ((x365/(x366+x367))-x368);

	if (t76 != 18446744073630482007LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x374 = 252;
	static uint32_t x375 = 651U;
	int8_t x376 = 10;
	uint64_t t77 = 1568590820660052LLU;

	t77 = ((x373/(x374+x375))-x376);

	if (t77 != 450164080294977LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	uint8_t x379 = 83U;
	uint32_t x380 = 33753U;
	int64_t t78 = 2419LL;

	t78 = ((x377/(x378+x379))-x380);

	if (t78 != -33753LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x381 = 0U;
	int64_t x382 = INT64_MIN;
	static volatile int16_t x383 = 22;
	int64_t x384 = -466905826456359745LL;
	static int64_t t79 = 8799LL;

	t79 = ((x381/(x382+x383))-x384);

	if (t79 != 466905826456359745LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -1;
	volatile int32_t x390 = -1;
	int32_t x392 = 24578;

	t80 = ((x389/(x390+x391))-x392);

	if (t80 != -24578) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MAX;
	uint16_t x394 = 758U;
	static volatile int64_t x395 = -2171LL;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t81 = 2990LL;

	t81 = ((x393/(x394+x395))-x396);

	if (t81 != 9216844526566838954LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x398 = 2U;
	volatile int32_t x399 = 26870598;
	uint16_t x400 = UINT16_MAX;

	t82 = ((x397/(x398+x399))-x400);

	if (t82 != -65512) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 104U;
	volatile uint64_t t83 = 38391324877987022LLU;

	t83 = ((x401/(x402+x403))-x404);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x405 = 27034159016012847LLU;
	volatile int16_t x406 = 10336;
	static int16_t x407 = INT16_MIN;
	volatile uint64_t t84 = 1303933168420LLU;

	t84 = ((x405/(x406+x407))-x408);

	if (t84 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 1624U;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 16U;
	uint64_t x412 = 1547144450569LLU;
	uint64_t t85 = 92528527010LLU;

	t85 = ((x409/(x410+x411))-x412);

	if (t85 != 18446742526565101047LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = INT64_MIN;
	volatile int32_t x418 = INT32_MIN;
	static uint32_t x419 = UINT32_MAX;
	static uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t86 = 148LLU;

	t86 = ((x417/(x418+x419))-x420);

	if (t86 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x421 = -1;
	int32_t x422 = -6190794;
	int32_t x423 = 0;
	volatile int32_t t87 = -80899;

	t87 = ((x421/(x422+x423))-x424);

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = INT64_MAX;
	int64_t x426 = -7008228LL;
	int16_t x427 = INT16_MAX;
	int32_t x428 = 201;
	volatile int64_t t88 = 1697983587LL;

	t88 = ((x425/(x426+x427))-x428);

	if (t88 != -1322259853256LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x433 = 847U;
	static int32_t x434 = -3;
	int32_t x435 = INT32_MAX;
	int32_t t89 = 121;

	t89 = ((x433/(x434+x435))-x436);

	if (t89 != -255) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x442 = INT32_MIN;
	int64_t x444 = -1LL;
	static volatile int64_t t90 = 0LL;

	t90 = ((x441/(x442+x443))-x444);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x445 = 413U;
	int32_t x446 = 10;
	static int32_t x447 = INT32_MIN;
	static int32_t x448 = 3325774;
	volatile int32_t t91 = 1;

	t91 = ((x445/(x446+x447))-x448);

	if (t91 != -3325774) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x453 = 361060453462695LLU;
	volatile int64_t x454 = INT64_MIN;
	int16_t x456 = 578;
	volatile uint64_t t92 = 7890786903LLU;

	t92 = ((x453/(x454+x455))-x456);

	if (t92 != 18446744073709551038LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x457 = 4805;
	static int32_t x458 = INT32_MAX;
	int64_t x459 = INT64_MIN;
	static int16_t x460 = INT16_MAX;

	t93 = ((x457/(x458+x459))-x460);

	if (t93 != -32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x465 = 5;
	int8_t x467 = INT8_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t94 = 7LL;

	t94 = ((x465/(x466+x467))-x468);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x474 = UINT64_MAX;
	volatile uint64_t t95 = 600LLU;

	t95 = ((x473/(x474+x475))-x476);

	if (t95 != 18257422479241363680LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x477 = -1071;
	static uint16_t x478 = 139U;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = INT8_MIN;

	t96 = ((x477/(x478+x479))-x480);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = 43772;
	uint8_t x482 = 3U;
	int64_t x483 = -1LL;
	int64_t t97 = -8684218926390LL;

	t97 = ((x481/(x482+x483))-x484);

	if (t97 != 20587LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x490 = -8;
	uint32_t x491 = UINT32_MAX;
	uint64_t x492 = UINT64_MAX;

	t98 = ((x489/(x490+x491))-x492);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x494 = UINT8_MAX;
	static volatile int64_t x495 = -167862178241LL;
	volatile uint64_t x496 = UINT64_MAX;

	t99 = ((x493/(x494+x495))-x496);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

