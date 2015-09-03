#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int64_t x8 = INT64_MAX;
uint16_t x15 = UINT16_MAX;
int32_t x21 = -1;
volatile uint16_t x24 = 800U;
uint8_t x31 = 3U;
volatile uint32_t x36 = 13995741U;
int64_t x47 = INT64_MAX;
uint16_t x51 = 13100U;
volatile uint64_t t12 = 9973LLU;
int16_t x67 = INT16_MIN;
int8_t x79 = INT8_MIN;
static int64_t x94 = INT64_MIN;
volatile int64_t x95 = INT64_MIN;
int8_t x105 = INT8_MAX;
int64_t x109 = INT64_MIN;
static uint32_t x112 = UINT32_MAX;
uint16_t x119 = 17425U;
uint32_t x123 = 6711040U;
static int8_t x124 = INT8_MAX;
int16_t x131 = 1;
volatile int8_t x143 = 26;
int32_t t35 = -43181;
int16_t x155 = INT16_MAX;
int64_t x159 = -15309LL;
volatile int64_t t37 = -2723395615401LL;
static int32_t x168 = -1;
static volatile int32_t t39 = 1027808;
volatile int32_t x172 = 22;
uint16_t x174 = 100U;
static int32_t x184 = -1;
volatile int64_t x190 = 115969559LL;
static uint64_t x201 = 4057LLU;
static volatile int64_t x209 = -1LL;
int64_t x214 = -734159988LL;
volatile int64_t x223 = INT64_MIN;
int8_t x226 = INT8_MIN;
static int64_t x232 = INT64_MIN;
uint32_t x239 = 401935U;
int64_t x246 = -185651919892138LL;
int32_t x252 = INT32_MIN;
int64_t x256 = INT64_MIN;
int64_t t61 = INT64_MIN;
volatile uint64_t t62 = 285LLU;
int8_t x262 = 34;
static uint8_t x265 = 2U;
volatile uint8_t x276 = UINT8_MAX;
volatile int32_t t67 = -23116981;
int16_t x281 = -1;
volatile int16_t x284 = INT16_MAX;
static uint16_t x285 = 6227U;
uint16_t x286 = 16375U;
static int32_t x288 = INT32_MIN;
static volatile int32_t t69 = INT32_MIN;
uint16_t x295 = 170U;
int64_t x300 = 55LL;
uint8_t x304 = UINT8_MAX;
static int32_t x308 = -1;
static volatile int64_t t73 = 244LL;
int32_t x316 = INT32_MAX;
int64_t t75 = 947LL;
volatile int8_t x317 = -1;
volatile int32_t x319 = INT32_MIN;
volatile int32_t x320 = 59043;
int8_t x329 = -1;
int32_t x331 = INT32_MAX;
static uint16_t x336 = 1443U;
static volatile int64_t x343 = INT64_MIN;
volatile uint32_t x345 = UINT32_MAX;
int32_t x348 = -16354812;
volatile uint32_t t83 = 35785U;
int64_t x349 = INT64_MIN;
uint64_t t84 = UINT64_MAX;
int64_t x356 = 651863822515255LL;
int16_t x369 = INT16_MIN;
uint32_t t89 = 2924U;
volatile int32_t x386 = INT32_MIN;
int32_t x389 = INT32_MIN;
uint64_t t96 = 1038671818497113615LLU;
static uint32_t x403 = 1U;
uint32_t x404 = 4U;
uint32_t t97 = 218561175U;
volatile uint16_t x405 = 428U;


void f0(void) {
	uint8_t x1 = 15U;
	int8_t x3 = INT8_MIN;
	static int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 37U;

	t0 = (((x1&x2)&x3)+x4);

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 5;
	static volatile int8_t x6 = -24;
	uint16_t x7 = 1548U;
	volatile int64_t t1 = INT64_MAX;

	t1 = (((x5&x6)&x7)+x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1365;
	int8_t x10 = 0;
	volatile uint8_t x11 = 92U;
	uint32_t x12 = 7U;
	volatile uint32_t t2 = 1U;

	t2 = (((x9&x10)&x11)+x12);

	if (t2 != 7U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	uint32_t x16 = 3U;
	static volatile uint32_t t3 = 3710U;

	t3 = (((x13&x14)&x15)+x16);

	if (t3 != 65411U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	volatile uint64_t x23 = UINT64_MAX;
	uint64_t t4 = 93239222534283LLU;

	t4 = (((x21&x22)&x23)+x24);

	if (t4 != 18446744071562068768LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 1U;
	int8_t x26 = 1;
	static int8_t x27 = 0;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = 7;

	t5 = (((x25&x26)&x27)+x28);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 47LLU;
	volatile int32_t x30 = INT32_MIN;
	int16_t x32 = -1;
	static uint64_t t6 = UINT64_MAX;

	t6 = (((x29&x30)&x31)+x32);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 38361423716675417LLU;
	static int64_t x34 = -1LL;
	volatile int16_t x35 = INT16_MAX;
	volatile uint64_t t7 = 2151800LLU;

	t7 = (((x33&x34)&x35)+x36);

	if (t7 != 14024246LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	int32_t x39 = -17281;
	int8_t x40 = INT8_MAX;
	volatile int32_t t8 = -13889335;

	t8 = (((x37&x38)&x39)+x40);

	if (t8 != -2147483521) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	int32_t x43 = -1050;
	int8_t x44 = INT8_MIN;
	int64_t t9 = 25503LL;

	t9 = (((x41&x42)&x43)+x44);

	if (t9 != 9223372036854774528LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile uint16_t x46 = 46U;
	volatile int64_t x48 = INT64_MAX;
	int64_t t10 = INT64_MAX;

	t10 = (((x45&x46)&x47)+x48);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = 7U;
	int64_t x50 = 1LL;
	volatile int16_t x52 = -1;
	static int64_t t11 = -11LL;

	t11 = (((x49&x50)&x51)+x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	uint64_t x56 = 33626226350285LLU;

	t12 = (((x53&x54)&x55)+x56);

	if (t12 != 9223405663081126093LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = 591;
	int32_t x58 = 9385314;
	int64_t x59 = -1LL;
	static uint16_t x60 = UINT16_MAX;
	static int64_t t13 = -394678452838LL;

	t13 = (((x57&x58)&x59)+x60);

	if (t13 != 65601LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 11684LLU;
	uint64_t x62 = 14435812974283LLU;
	volatile uint8_t x63 = 58U;
	int32_t x64 = -55807563;
	static uint64_t t14 = 52272LLU;

	t14 = (((x61&x62)&x63)+x64);

	if (t14 != 18446744073653744053LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = INT16_MAX;
	volatile int64_t x68 = 7451126LL;
	volatile int64_t t15 = -1693LL;

	t15 = (((x65&x66)&x67)+x68);

	if (t15 != 7451126LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -5;
	int8_t x70 = INT8_MIN;
	volatile uint16_t x71 = UINT16_MAX;
	static uint64_t x72 = 447603LLU;
	volatile uint64_t t16 = 1123611LLU;

	t16 = (((x69&x70)&x71)+x72);

	if (t16 != 513011LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = UINT16_MAX;
	int32_t x74 = -4959;
	volatile int16_t x75 = 7450;
	volatile uint64_t x76 = 7789431957497LLU;
	uint64_t t17 = 8396895LLU;

	t17 = (((x73&x74)&x75)+x76);

	if (t17 != 7789431960569LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x77 = 8U;
	int32_t x78 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t18 = -23;

	t18 = (((x77&x78)&x79)+x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	static int32_t x82 = INT32_MAX;
	uint16_t x83 = 211U;
	volatile int8_t x84 = 21;
	volatile int64_t t19 = -2025607558483621LL;

	t19 = (((x81&x82)&x83)+x84);

	if (t19 != 21LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	static uint32_t x86 = 9U;
	volatile uint8_t x87 = UINT8_MAX;
	static int16_t x88 = INT16_MIN;
	static uint32_t t20 = 1962U;

	t20 = (((x85&x86)&x87)+x88);

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = UINT32_MAX;
	int8_t x90 = INT8_MIN;
	static int32_t x91 = -1;
	int64_t x92 = -19LL;
	static int64_t t21 = 23772LL;

	t21 = (((x89&x90)&x91)+x92);

	if (t21 != 4294967149LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	static int64_t t22 = -54914402LL;

	t22 = (((x93&x94)&x95)+x96);

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 16177U;
	int64_t x98 = 2996656034250LL;
	int8_t x99 = -1;
	static volatile int32_t x100 = 1;
	static volatile int64_t t23 = -1517LL;

	t23 = (((x97&x98)&x99)+x100);

	if (t23 != 4353LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = 0;
	uint8_t x102 = 29U;
	static int16_t x103 = 16;
	int64_t x104 = 0LL;
	volatile int64_t t24 = -3221959LL;

	t24 = (((x101&x102)&x103)+x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = INT32_MAX;
	uint8_t x107 = 26U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -4176;

	t25 = (((x105&x106)&x107)+x108);

	if (t25 != -32742) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x110 = 4390831LLU;
	int64_t x111 = 57LL;
	volatile uint64_t t26 = 29148211932LLU;

	t26 = (((x109&x110)&x111)+x112);

	if (t26 != 4294967295LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	volatile uint64_t x114 = 11080835021LLU;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t27 = 516804LLU;

	t27 = (((x113&x114)&x115)+x116);

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int16_t x118 = -87;
	static int32_t x120 = -4831;
	volatile int32_t t28 = 262;

	t28 = (((x117&x118)&x119)+x120);

	if (t28 != 12578) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 193301696U;
	static volatile int16_t x122 = INT16_MIN;
	volatile uint32_t t29 = 189U;

	t29 = (((x121&x122)&x123)+x124);

	if (t29 != 262271U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 447U;
	static uint16_t x130 = 11U;
	uint64_t x132 = 105047970347247LLU;
	uint64_t t30 = 1042996512002418LLU;

	t30 = (((x129&x130)&x131)+x132);

	if (t30 != 105047970347248LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 13451LL;
	uint16_t x134 = 3115U;
	int16_t x135 = INT16_MIN;
	static int32_t x136 = 18085890;
	int64_t t31 = -18247146103LL;

	t31 = (((x133&x134)&x135)+x136);

	if (t31 != 18085890LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = 233437864804LL;
	int16_t x138 = 599;
	int64_t x139 = -1LL;
	uint32_t x140 = UINT32_MAX;
	static volatile int64_t t32 = 139866616181125849LL;

	t32 = (((x137&x138)&x139)+x140);

	if (t32 != 4294967875LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = -7131230;
	int32_t x142 = -1;
	uint8_t x144 = UINT8_MAX;
	int32_t t33 = 68334863;

	t33 = (((x141&x142)&x143)+x144);

	if (t33 != 257) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 7505591568291LLU;
	static uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x145&x146)&x147)+x148);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static volatile int8_t x151 = -1;
	volatile int32_t x152 = -1;

	t35 = (((x149&x150)&x151)+x152);

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 711LL;
	int16_t x154 = 3326;
	int32_t x156 = -300092578;
	volatile int64_t t36 = -567485380746928631LL;

	t36 = (((x153&x154)&x155)+x156);

	if (t36 != -300092380LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x157 = 513U;
	volatile int32_t x158 = INT32_MIN;
	uint8_t x160 = 46U;

	t37 = (((x157&x158)&x159)+x160);

	if (t37 != 46LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -649248491427113LL;
	volatile uint16_t x162 = 6U;
	int16_t x163 = -1;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t38 = 34LL;

	t38 = (((x161&x162)&x163)+x164);

	if (t38 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	int32_t x166 = INT32_MAX;
	static int16_t x167 = INT16_MAX;

	t39 = (((x165&x166)&x167)+x168);

	if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 10040U;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1169251498193LL;
	volatile int64_t t40 = 135206918603915053LL;

	t40 = (((x169&x170)&x171)+x172);

	if (t40 != 22LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	volatile uint64_t x175 = 395140550588294208LLU;
	uint32_t x176 = 3725063U;
	volatile uint64_t t41 = 8848587437218209775LLU;

	t41 = (((x173&x174)&x175)+x176);

	if (t41 != 3725063LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -1;
	uint32_t x178 = 12795125U;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint32_t t42 = 26U;

	t42 = (((x177&x178)&x179)+x180);

	if (t42 != 2147483765U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 2830U;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	volatile int64_t t43 = -435345295983495LL;

	t43 = (((x181&x182)&x183)+x184);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	volatile int32_t x186 = 936761572;
	volatile uint32_t x187 = 29U;
	int64_t x188 = 1735787827426LL;
	int64_t t44 = -2661181070438LL;

	t44 = (((x185&x186)&x187)+x188);

	if (t44 != 1735787827426LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int8_t x191 = -1;
	int8_t x192 = -5;
	int64_t t45 = 131055553131668LL;

	t45 = (((x189&x190)&x191)+x192);

	if (t45 != 115969554LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 56U;
	int32_t x196 = -1;
	int32_t t46 = -688;

	t46 = (((x193&x194)&x195)+x196);

	if (t46 != 55) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	static int16_t x199 = -1839;
	static volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t47 = 494717;

	t47 = (((x197&x198)&x199)+x200);

	if (t47 != -2147483393) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x202 = UINT64_MAX;
	volatile uint8_t x203 = UINT8_MAX;
	int64_t x204 = -1LL;
	volatile uint64_t t48 = 8953LLU;

	t48 = (((x201&x202)&x203)+x204);

	if (t48 != 216LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 98U;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	static uint64_t x208 = 177LLU;
	volatile uint64_t t49 = 20309369625704549LLU;

	t49 = (((x205&x206)&x207)+x208);

	if (t49 != 177LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	int32_t x212 = 20130;
	static int64_t t50 = 5049681116009556LL;

	t50 = (((x209&x210)&x211)+x212);

	if (t50 != 20002LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	static int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	static uint64_t t51 = 34560593845045LLU;

	t51 = (((x213&x214)&x215)+x216);

	if (t51 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x217 = 1275961U;
	int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	static int8_t x220 = INT8_MAX;
	uint32_t t52 = 21U;

	t52 = (((x217&x218)&x219)+x220);

	if (t52 != 30847U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -33429795445683280LL;
	int8_t x222 = INT8_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t53 = -101953706179LL;

	t53 = (((x221&x222)&x223)+x224);

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 5U;
	volatile int16_t x227 = INT16_MAX;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = (((x225&x226)&x227)+x228);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 62U;
	volatile int64_t x230 = INT64_MIN;
	static int64_t x231 = -1LL;
	int64_t t55 = INT64_MIN;

	t55 = (((x229&x230)&x231)+x232);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = INT64_MAX;
	int32_t x234 = -2844449;
	int64_t x235 = -1LL;
	static int16_t x236 = INT16_MIN;
	int64_t t56 = 2952367460LL;

	t56 = (((x233&x234)&x235)+x236);

	if (t56 != 9223372036851898591LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 1816U;
	int16_t x238 = INT16_MAX;
	static uint32_t x240 = 1703769149U;
	volatile uint32_t t57 = 18691490U;

	t57 = (((x237&x238)&x239)+x240);

	if (t57 != 1703769669U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -7;
	static uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	static uint64_t x244 = 2090083515970179268LLU;
	uint64_t t58 = 434565LLU;

	t58 = (((x241&x242)&x243)+x244);

	if (t58 != 2090083515970179268LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	int64_t t59 = 1403LL;

	t59 = (((x245&x246)&x247)+x248);

	if (t59 != 9223186384934883542LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = INT64_MIN;
	volatile int64_t t60 = -5357720LL;

	t60 = (((x249&x250)&x251)+x252);

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 26U;
	static int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MAX;

	t61 = (((x253&x254)&x255)+x256);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = 543;
	static int32_t x258 = -163577;
	int16_t x259 = INT16_MAX;
	static uint64_t x260 = 46156LLU;

	t62 = (((x257&x258)&x259)+x260);

	if (t62 != 46163LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 27038031192LLU;
	static int8_t x263 = INT8_MIN;
	int32_t x264 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x261&x262)&x263)+x264);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x266 = -2;
	static int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;
	int64_t t64 = 374LL;

	t64 = (((x265&x266)&x267)+x268);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = 40;
	uint16_t x270 = 610U;
	int64_t x271 = INT64_MAX;
	static uint8_t x272 = 0U;
	volatile int64_t t65 = 1839713LL;

	t65 = (((x269&x270)&x271)+x272);

	if (t65 != 32LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = -1;
	volatile uint8_t x275 = UINT8_MAX;
	int32_t t66 = 0;

	t66 = (((x273&x274)&x275)+x276);

	if (t66 != 510) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x277 = 604U;
	static int32_t x278 = INT32_MIN;
	static int16_t x279 = -917;
	uint8_t x280 = 12U;

	t67 = (((x277&x278)&x279)+x280);

	if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = 34;
	static uint16_t x283 = 5329U;
	volatile int32_t t68 = -4528;

	t68 = (((x281&x282)&x283)+x284);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x287 = INT32_MIN;

	t69 = (((x285&x286)&x287)+x288);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = -1;
	volatile int32_t x294 = -3;
	static int32_t x296 = 266836136;
	static volatile int32_t t70 = -91314527;

	t70 = (((x293&x294)&x295)+x296);

	if (t70 != 266836304) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = -399872;
	static int16_t x298 = INT16_MIN;
	static int64_t x299 = 3299LL;
	int64_t t71 = 15566LL;

	t71 = (((x297&x298)&x299)+x300);

	if (t71 != 55LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MAX;
	static uint64_t x302 = 3273031753LLU;
	int16_t x303 = -1;
	volatile uint64_t t72 = 905213629101105097LLU;

	t72 = (((x301&x302)&x303)+x304);

	if (t72 != 3273032008LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -5;
	static int64_t x306 = -1LL;
	static uint16_t x307 = 1429U;

	t73 = (((x305&x306)&x307)+x308);

	if (t73 != 1424LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = 1590974682U;
	static int64_t x310 = INT64_MAX;
	static int32_t x311 = INT32_MIN;
	static int8_t x312 = INT8_MIN;
	int64_t t74 = 23684LL;

	t74 = (((x309&x310)&x311)+x312);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 171U;
	volatile int64_t x314 = -1LL;
	int16_t x315 = 382;

	t75 = (((x313&x314)&x315)+x316);

	if (t75 != 2147483689LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x318 = 80U;
	volatile int32_t t76 = 52814267;

	t76 = (((x317&x318)&x319)+x320);

	if (t76 != 59043) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	int8_t x323 = 17;
	int32_t x324 = -53371;
	volatile uint64_t t77 = 69501067LLU;

	t77 = (((x321&x322)&x323)+x324);

	if (t77 != 18446744073709498245LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 25U;
	int16_t x326 = -1;
	int32_t x327 = 1063253586;
	volatile int32_t x328 = -5;
	volatile int32_t t78 = -557926;

	t78 = (((x325&x326)&x327)+x328);

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x330 = -1;
	int8_t x332 = INT8_MIN;
	int32_t t79 = -883;

	t79 = (((x329&x330)&x331)+x332);

	if (t79 != 2147483519) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	static int8_t x334 = -27;
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t80 = 2LLU;

	t80 = (((x333&x334)&x335)+x336);

	if (t80 != 9223372036854777251LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = -2;
	int32_t t81 = -116;

	t81 = (((x337&x338)&x339)+x340);

	if (t81 != -32770) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 7U;
	static uint32_t x342 = UINT32_MAX;
	uint64_t x344 = 5628036334060LLU;
	uint64_t t82 = 178939529LLU;

	t82 = (((x341&x342)&x343)+x344);

	if (t82 != 5628036334060LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x346 = UINT8_MAX;
	volatile int16_t x347 = -1;

	t83 = (((x345&x346)&x347)+x348);

	if (t83 != 4278612739U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x350 = -97567032LL;
	static uint64_t x351 = 6657030700010150493LLU;
	volatile int8_t x352 = -1;

	t84 = (((x349&x350)&x351)+x352);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	uint32_t x354 = 57U;
	uint16_t x355 = UINT16_MAX;
	int64_t t85 = 45281046122LL;

	t85 = (((x353&x354)&x355)+x356);

	if (t85 != 651863822515312LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = -1;
	static uint16_t x358 = 735U;
	int8_t x359 = INT8_MIN;
	uint16_t x360 = 28025U;
	static int32_t t86 = 5589;

	t86 = (((x357&x358)&x359)+x360);

	if (t86 != 28665) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	int32_t x363 = -1;
	uint16_t x364 = 2666U;
	int64_t t87 = 884305LL;

	t87 = (((x361&x362)&x363)+x364);

	if (t87 != 2666LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 5;
	volatile int16_t x366 = -1;
	static int64_t x367 = 137748965386290945LL;
	volatile uint64_t x368 = 52413413989164LLU;
	volatile uint64_t t88 = 7LLU;

	t88 = (((x365&x366)&x367)+x368);

	if (t88 != 52413413989165LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x370 = 45022345U;
	int32_t x371 = INT32_MAX;
	uint8_t x372 = 2U;

	t89 = (((x369&x370)&x371)+x372);

	if (t89 != 44990466U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MAX;
	int64_t x376 = 1598074867784LL;
	int64_t t90 = -26LL;

	t90 = (((x373&x374)&x375)+x376);

	if (t90 != 1598074933192LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = 0LL;
	uint64_t x378 = 3526126905102870635LLU;
	static volatile int8_t x379 = INT8_MAX;
	int64_t x380 = -5LL;
	uint64_t t91 = 30562713LLU;

	t91 = (((x377&x378)&x379)+x380);

	if (t91 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -1LL;
	static volatile int32_t x382 = INT32_MAX;
	volatile uint32_t x383 = 15751323U;
	static volatile int16_t x384 = 156;
	int64_t t92 = -1275786LL;

	t92 = (((x381&x382)&x383)+x384);

	if (t92 != 15751479LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = -537;
	uint16_t x387 = UINT16_MAX;
	uint32_t x388 = 1407776313U;
	uint32_t t93 = 250581U;

	t93 = (((x385&x386)&x387)+x388);

	if (t93 != 1407776313U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = -1;
	static int32_t x391 = -13;
	volatile int16_t x392 = INT16_MAX;
	int32_t t94 = -12;

	t94 = (((x389&x390)&x391)+x392);

	if (t94 != -2147450881) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = INT8_MIN;
	uint32_t x394 = 15745358U;
	int64_t x395 = 114981387066615LL;
	static volatile uint64_t x396 = 635290LLU;
	static volatile uint64_t t95 = 388094063252LLU;

	t95 = (((x393&x394)&x395)+x396);

	if (t95 != 12186010LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = -1;
	static int16_t x400 = INT16_MAX;

	t96 = (((x397&x398)&x399)+x400);

	if (t96 != 32766LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = -3;
	volatile int32_t x402 = -5296813;

	t97 = (((x401&x402)&x403)+x404);

	if (t97 != 5U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = 2U;
	int64_t x407 = 17192525726926857LL;
	int32_t x408 = INT32_MIN;
	int64_t t98 = 28645219264378889LL;

	t98 = (((x405&x406)&x407)+x408);

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = 131511U;
	uint8_t x410 = 12U;
	volatile uint32_t x411 = 404129U;
	static volatile int64_t x412 = -287445883764LL;
	volatile int64_t t99 = -13020405296615533LL;

	t99 = (((x409&x410)&x411)+x412);

	if (t99 != -287445883764LL) { NG(); } else { ; }
	
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

