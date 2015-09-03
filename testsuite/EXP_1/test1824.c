#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t2 = 62870178875544LL;
static int32_t x13 = -9893;
int16_t x16 = -1319;
uint64_t t3 = 261880187792LLU;
uint32_t t4 = 576814U;
volatile int32_t x23 = -20835;
volatile uint32_t t5 = 3U;
static volatile int32_t x36 = INT32_MIN;
static int16_t x38 = INT16_MIN;
uint8_t x50 = 39U;
uint64_t t13 = 9180627460833358468LLU;
uint16_t x65 = 10U;
volatile int64_t x69 = INT64_MIN;
uint32_t x75 = UINT32_MAX;
uint32_t x76 = UINT32_MAX;
int16_t x84 = -204;
volatile int32_t t19 = -32280953;
int8_t x88 = INT8_MIN;
static volatile uint64_t t21 = 34375LLU;
uint32_t x95 = 213536U;
volatile uint64_t t22 = 52LLU;
static uint64_t x103 = UINT64_MAX;
int8_t x112 = INT8_MIN;
uint64_t x118 = UINT64_MAX;
uint16_t x121 = UINT16_MAX;
int32_t x125 = INT32_MAX;
static int16_t x128 = -60;
volatile int64_t t30 = -4163LL;
uint8_t x132 = 27U;
int64_t x134 = INT64_MIN;
volatile int8_t x136 = INT8_MIN;
static int64_t x140 = -1025680071115110488LL;
int64_t x143 = INT64_MAX;
int32_t x146 = 4;
uint64_t x147 = UINT64_MAX;
int32_t x150 = -8;
uint64_t x153 = 7LLU;
volatile uint64_t t37 = 46891546LLU;
int32_t x161 = INT32_MAX;
int32_t x163 = -1;
uint64_t x164 = 137LLU;
uint64_t x172 = 35672732269406169LLU;
static uint16_t x176 = 127U;
uint64_t t43 = 719755351330LLU;
uint8_t x186 = 2U;
static volatile int32_t x187 = INT32_MIN;
int16_t x191 = -43;
volatile int8_t x193 = -1;
int32_t x194 = 0;
uint16_t x208 = 1462U;
int64_t x227 = INT64_MIN;
int32_t x235 = INT32_MAX;
int16_t x238 = -1;
volatile uint32_t t56 = 504894073U;
int8_t x241 = INT8_MAX;
int8_t x242 = -54;
static int32_t x245 = -972321402;
uint32_t x246 = 63U;
uint32_t x252 = 30913U;
static int64_t x259 = 45LL;
volatile uint64_t x261 = 1389445440979883413LLU;
uint32_t x263 = 248U;
volatile uint16_t x270 = 112U;
int8_t x278 = 13;
int32_t x283 = INT32_MIN;
static uint32_t t66 = 143870865U;
int32_t x289 = -149244702;
uint16_t x290 = 2584U;
int32_t x291 = INT32_MAX;
int64_t x292 = -1LL;
int64_t t69 = 57022202924380969LL;
int64_t x297 = -28998LL;
int32_t x308 = INT32_MAX;
static uint64_t t72 = 136130383094466103LLU;
int64_t x309 = 917863642LL;
static volatile int32_t x310 = INT32_MAX;
int8_t x315 = INT8_MIN;
static int16_t x317 = -28;
int32_t x319 = INT32_MAX;
uint64_t x331 = 60178906720725359LLU;
volatile uint32_t x332 = 9062U;
int16_t x335 = 1;
static int64_t x342 = INT64_MIN;
int64_t t81 = -32676801574574939LL;
int8_t x345 = INT8_MIN;
int64_t x364 = 298324174685369638LL;
int64_t t86 = 69324350343LL;
int8_t x372 = -1;
uint16_t x373 = UINT16_MAX;
int8_t x379 = INT8_MAX;
static uint64_t x382 = 30873362LLU;
int64_t x388 = INT64_MIN;
int64_t x391 = INT64_MIN;
int32_t x393 = 0;
int16_t x396 = INT16_MAX;
static int8_t x399 = INT8_MAX;
int32_t t95 = -50381;
int16_t x404 = 56;
uint16_t x406 = UINT16_MAX;
static uint32_t x411 = 239595775U;
int32_t t99 = 162369292;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = 44;
	int32_t x3 = INT32_MIN;
	int64_t x4 = -24799770337LL;
	static int64_t t0 = 13088255LL;

	t0 = (((x1&x2)&x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1110379572785LLU;
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = 88U;
	static uint64_t t1 = 87LLU;

	t1 = (((x5&x6)&x7)/x8);

	if (t1 != 12617949690LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -588833105509615277LL;
	static uint16_t x10 = 71U;
	static uint16_t x11 = 31U;
	uint8_t x12 = 14U;

	t2 = (((x9&x10)&x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	static uint64_t x15 = 6819LLU;

	t3 = (((x13&x14)&x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 93902;
	int32_t x18 = 1922265;
	uint32_t x19 = 474675185U;
	uint8_t x20 = 3U;

	t4 = (((x17&x18)&x19)/x20);

	if (t4 != 5866U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	volatile uint32_t x22 = UINT32_MAX;
	static int32_t x24 = INT32_MAX;

	t5 = (((x21&x22)&x23)/x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int32_t x26 = INT32_MIN;
	uint32_t x27 = 254U;
	static int16_t x28 = -1;
	volatile uint32_t t6 = 2246813U;

	t6 = (((x25&x26)&x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = 720085556910463103LLU;
	int64_t x31 = INT64_MAX;
	int16_t x32 = -4;
	uint64_t t7 = 17082178924LLU;

	t7 = (((x29&x30)&x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -8LL;
	int8_t x34 = INT8_MAX;
	static int8_t x35 = INT8_MAX;
	int64_t t8 = 1869950724571LL;

	t8 = (((x33&x34)&x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint32_t x39 = 0U;
	volatile int16_t x40 = INT16_MAX;
	uint32_t t9 = 689U;

	t9 = (((x37&x38)&x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 0U;
	static uint16_t x42 = 4U;
	static int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	volatile int64_t t10 = 1LL;

	t10 = (((x41&x42)&x43)/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 1;
	int16_t x51 = INT16_MAX;
	int64_t x52 = -4032500770277LL;
	volatile int64_t t11 = -1716664LL;

	t11 = (((x49&x50)&x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = 19;
	static uint64_t x54 = 73169620225488LLU;
	int64_t x55 = INT64_MAX;
	int16_t x56 = 1;
	uint64_t t12 = 77398LLU;

	t12 = (((x53&x54)&x55)/x56);

	if (t12 != 16LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -10;
	static volatile uint64_t x58 = 183785095LLU;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;

	t13 = (((x57&x58)&x59)/x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 1U;
	int16_t x62 = INT16_MAX;
	volatile int16_t x63 = -288;
	volatile uint8_t x64 = 1U;
	int32_t t14 = -3;

	t14 = (((x61&x62)&x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MAX;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;
	static volatile int64_t t15 = -1898879439467065275LL;

	t15 = (((x65&x66)&x67)/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 648U;
	int64_t x72 = INT64_MAX;
	int64_t t16 = -355171LL;

	t16 = (((x69&x70)&x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 1016075526375544LLU;
	int32_t x74 = INT32_MIN;
	volatile uint64_t t17 = 28496245LLU;

	t17 = (((x73&x74)&x75)/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = -1LL;
	uint8_t x79 = 6U;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -41144798531095LL;

	t18 = (((x77&x78)&x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	int32_t x83 = 4694;

	t19 = (((x81&x82)&x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int32_t x87 = 2;
	int64_t t20 = 282896001LL;

	t20 = (((x85&x86)&x87)/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static uint64_t x90 = 626557731LLU;
	static uint16_t x91 = 3U;
	uint16_t x92 = UINT16_MAX;

	t21 = (((x89&x90)&x91)/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 3945978353168LLU;
	int64_t x94 = INT64_MAX;
	int64_t x96 = -1LL;

	t22 = (((x93&x94)&x95)/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	int8_t x98 = -1;
	volatile int32_t x99 = -9;
	int8_t x100 = INT8_MAX;
	int64_t t23 = 7LL;

	t23 = (((x97&x98)&x99)/x100);

	if (t23 != 72624976668147840LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = 15U;
	int16_t x102 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;
	static uint64_t t24 = 9369321LLU;

	t24 = (((x101&x102)&x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 0U;
	int16_t x106 = -1;
	int8_t x107 = INT8_MAX;
	static int32_t x108 = INT32_MIN;
	int32_t t25 = -56;

	t25 = (((x105&x106)&x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -82359635132056LL;
	static uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	uint64_t t26 = 14001652432LLU;

	t26 = (((x109&x110)&x111)/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -22351;
	int64_t x114 = INT64_MAX;
	volatile uint64_t x115 = 13735928LLU;
	volatile int8_t x116 = -4;
	uint64_t t27 = 24392160LLU;

	t27 = (((x113&x114)&x115)/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x119 = 1561U;
	int64_t x120 = 219274203093009LL;
	volatile uint64_t t28 = 86LLU;

	t28 = (((x117&x118)&x119)/x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x122 = -1LL;
	volatile uint8_t x123 = UINT8_MAX;
	static uint16_t x124 = 222U;
	volatile int64_t t29 = -62073669LL;

	t29 = (((x121&x122)&x123)/x124);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x126 = -1;
	static int64_t x127 = -990651LL;

	t30 = (((x125&x126)&x127)/x128);

	if (t30 != -35774883LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x130 = -5;
	static uint64_t x131 = 130LLU;
	uint64_t t31 = 7LLU;

	t31 = (((x129&x130)&x131)/x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = UINT8_MAX;
	int64_t x135 = -68046630896768LL;
	volatile int64_t t32 = -1LL;

	t32 = (((x133&x134)&x135)/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x138 = 20145960245LL;
	uint64_t x139 = 1318483863220742LLU;
	static volatile uint64_t t33 = 91517559LLU;

	t33 = (((x137&x138)&x139)/x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	static int32_t x142 = -303596;
	int8_t x144 = 6;
	volatile int64_t t34 = -352LL;

	t34 = (((x141&x142)&x143)/x144);

	if (t34 != 1537228672809078702LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 1092U;
	int32_t x148 = 50300;
	uint64_t t35 = 5234272446647709LLU;

	t35 = (((x145&x146)&x147)/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x149 = INT8_MIN;
	static int64_t x151 = INT64_MAX;
	static int32_t x152 = INT32_MAX;
	volatile int64_t t36 = 485450120400LL;

	t36 = (((x149&x150)&x151)/x152);

	if (t36 != 4294967297LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x154 = -1;
	static uint8_t x155 = 2U;
	static int8_t x156 = -1;

	t37 = (((x153&x154)&x155)/x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = 5;
	volatile uint64_t t38 = 30LLU;

	t38 = (((x161&x162)&x163)/x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x165 = 68592272270610254LLU;
	uint8_t x166 = UINT8_MAX;
	static volatile int16_t x167 = INT16_MAX;
	uint8_t x168 = 27U;
	volatile uint64_t t39 = 335566945LLU;

	t39 = (((x165&x166)&x167)/x168);

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	static volatile uint64_t t40 = 0LLU;

	t40 = (((x169&x170)&x171)/x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 6;
	volatile int64_t x174 = -9925719724LL;
	volatile uint16_t x175 = UINT16_MAX;
	int64_t t41 = 367936428392602893LL;

	t41 = (((x173&x174)&x175)/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = 5U;
	volatile int64_t t42 = 57246219689354LL;

	t42 = (((x177&x178)&x179)/x180);

	if (t42 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 1465U;
	uint32_t x182 = 2724487U;
	static uint16_t x183 = UINT16_MAX;
	volatile uint64_t x184 = UINT64_MAX;

	t43 = (((x181&x182)&x183)/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x185 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t44 = -104962;

	t44 = (((x185&x186)&x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1624942391330050407LL;
	int16_t x190 = -1;
	volatile int8_t x192 = INT8_MAX;
	int64_t t45 = -68068068818LL;

	t45 = (((x189&x190)&x191)/x192);

	if (t45 != -12794821978976774LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x195 = 57459436LLU;
	volatile int32_t x196 = 15;
	volatile uint64_t t46 = 7829693488657LLU;

	t46 = (((x193&x194)&x195)/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x197 = 5767U;
	int32_t x198 = -231245;
	volatile int32_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	int32_t t47 = -22983523;

	t47 = (((x197&x198)&x199)/x200);

	if (t47 != -33) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 3637U;
	int16_t x202 = INT16_MIN;
	volatile uint8_t x203 = 8U;
	int8_t x204 = INT8_MIN;
	int32_t t48 = -20179355;

	t48 = (((x201&x202)&x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	uint64_t x206 = 41930LLU;
	int64_t x207 = INT64_MIN;
	volatile uint64_t t49 = 1752451005276645LLU;

	t49 = (((x205&x206)&x207)/x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -14883LL;
	static int8_t x210 = -1;
	uint64_t x211 = 14852591537LLU;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t50 = 1176546070LLU;

	t50 = (((x209&x210)&x211)/x212);

	if (t50 != 453278LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -1;
	int32_t x214 = 30891;
	uint32_t x215 = 9U;
	int16_t x216 = INT16_MIN;
	static volatile uint32_t t51 = 12U;

	t51 = (((x213&x214)&x215)/x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 13;
	static volatile uint16_t x218 = UINT16_MAX;
	int64_t x219 = -1LL;
	uint32_t x220 = 386827513U;
	volatile int64_t t52 = 2315055613385LL;

	t52 = (((x217&x218)&x219)/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MAX;
	int64_t x228 = INT64_MAX;
	int64_t t53 = -6051373157908LL;

	t53 = (((x225&x226)&x227)/x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x229 = 39U;
	volatile int64_t x230 = 11398744821589LL;
	int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;
	static int64_t t54 = 1361779LL;

	t54 = (((x229&x230)&x231)/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = -26;
	int64_t x236 = INT64_MIN;
	int64_t t55 = -34922337408451321LL;

	t55 = (((x233&x234)&x235)/x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x237 = 0U;
	int8_t x239 = INT8_MIN;
	static int32_t x240 = -1;

	t56 = (((x237&x238)&x239)/x240);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x243 = 46096882152LLU;
	int32_t x244 = INT32_MAX;
	uint64_t t57 = 768565461282658LLU;

	t57 = (((x241&x242)&x243)/x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x247 = 6418U;
	volatile uint8_t x248 = 55U;
	static uint32_t t58 = 679U;

	t58 = (((x245&x246)&x247)/x248);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 28U;
	int64_t x250 = INT64_MAX;
	volatile int32_t x251 = INT32_MIN;
	int64_t t59 = -4680956LL;

	t59 = (((x249&x250)&x251)/x252);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	static int64_t x254 = -609LL;
	int16_t x255 = INT16_MAX;
	static volatile int64_t x256 = INT64_MIN;
	int64_t t60 = -3647416206LL;

	t60 = (((x253&x254)&x255)/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = INT64_MAX;
	int32_t x260 = INT32_MIN;
	static volatile int64_t t61 = -87263379LL;

	t61 = (((x257&x258)&x259)/x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = INT64_MIN;
	uint64_t x264 = 1029650930041267LLU;
	volatile uint64_t t62 = 7788834534471627238LLU;

	t62 = (((x261&x262)&x263)/x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = INT64_MIN;
	uint8_t x271 = 60U;
	int32_t x272 = -1;
	int64_t t63 = -87170923303018075LL;

	t63 = (((x269&x270)&x271)/x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x273 = -1;
	int32_t x274 = 4;
	static int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t64 = -886LL;

	t64 = (((x273&x274)&x275)/x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = 2;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t65 = 2LLU;

	t65 = (((x277&x278)&x279)/x280);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 2816U;
	int32_t x284 = INT32_MAX;

	t66 = (((x281&x282)&x283)/x284);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	uint8_t x286 = 7U;
	int32_t x287 = -1;
	volatile uint64_t x288 = 96308346350LLU;
	volatile uint64_t t67 = 22262828879756557LLU;

	t67 = (((x285&x286)&x287)/x288);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t t68 = -919495970LL;

	t68 = (((x289&x290)&x291)/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 21544343U;
	int64_t x294 = 12110718LL;
	volatile int32_t x295 = INT32_MIN;
	int64_t x296 = -14401281848377125LL;

	t69 = (((x293&x294)&x295)/x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x298 = 152U;
	static int8_t x299 = INT8_MIN;
	int32_t x300 = 416420;
	int64_t t70 = 4812LL;

	t70 = (((x297&x298)&x299)/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MIN;
	static volatile int16_t x302 = INT16_MAX;
	static volatile int8_t x303 = INT8_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t71 = 66383;

	t71 = (((x301&x302)&x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x305 = UINT8_MAX;
	int32_t x306 = -31212;
	uint64_t x307 = 39289277976916LLU;

	t72 = (((x305&x306)&x307)/x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x311 = 257953U;
	int32_t x312 = -1;
	static volatile int64_t t73 = 5017272LL;

	t73 = (((x309&x310)&x311)/x312);

	if (t73 != -93312LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x313 = 29799614056887LLU;
	int8_t x314 = -3;
	volatile int8_t x316 = INT8_MAX;
	uint64_t t74 = 33109575115610171LLU;

	t74 = (((x313&x314)&x315)/x316);

	if (t74 != 234642630368LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = -1;
	int16_t x320 = INT16_MAX;
	volatile int32_t t75 = 389941;

	t75 = (((x317&x318)&x319)/x320);

	if (t75 != 65537) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = INT16_MAX;
	int16_t x322 = -1;
	int32_t x323 = 1013971368;
	uint32_t x324 = 26U;
	volatile uint32_t t76 = 3U;

	t76 = (((x321&x322)&x323)/x324);

	if (t76 != 1197U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 1U;
	int32_t x327 = -1;
	uint16_t x328 = 7633U;
	volatile uint64_t t77 = 3273153998398725723LLU;

	t77 = (((x325&x326)&x327)/x328);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x329 = 29605U;
	int16_t x330 = INT16_MIN;
	volatile uint64_t t78 = 671290LLU;

	t78 = (((x329&x330)&x331)/x332);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;
	int64_t t79 = 458675161151714367LL;

	t79 = (((x333&x334)&x335)/x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 63U;
	uint32_t x338 = 250016U;
	static volatile int8_t x339 = -7;
	static uint32_t x340 = 195U;
	static volatile uint32_t t80 = 1590246635U;

	t80 = (((x337&x338)&x339)/x340);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -1;
	uint16_t x343 = 35U;
	volatile int64_t x344 = 7360039LL;

	t81 = (((x341&x342)&x343)/x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MAX;
	volatile int8_t x348 = 1;
	int32_t t82 = -30;

	t82 = (((x345&x346)&x347)/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = 14;
	static int64_t x350 = -132692490958LL;
	uint8_t x351 = 22U;
	static uint32_t x352 = UINT32_MAX;
	int64_t t83 = 58LL;

	t83 = (((x349&x350)&x351)/x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = 20U;
	int32_t x355 = 247731;
	uint8_t x356 = 94U;
	int32_t t84 = -28036;

	t84 = (((x353&x354)&x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -1;
	static volatile int8_t x358 = INT8_MIN;
	static int8_t x359 = -1;
	int8_t x360 = -1;
	volatile int32_t t85 = -6270632;

	t85 = (((x357&x358)&x359)/x360);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = 2;
	int64_t x362 = 656651615344LL;
	int64_t x363 = 62LL;

	t86 = (((x361&x362)&x363)/x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x365 = 61U;
	int64_t x366 = 13657463LL;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MAX;
	volatile int64_t t87 = 15680012521780089LL;

	t87 = (((x365&x366)&x367)/x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = UINT8_MAX;
	static volatile int32_t x371 = 8897084;
	static volatile int32_t t88 = -663;

	t88 = (((x369&x370)&x371)/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	uint32_t t89 = 5U;

	t89 = (((x373&x374)&x375)/x376);

	if (t89 != 256U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 5684339U;
	int32_t x378 = 984285921;
	int16_t x380 = INT16_MIN;
	volatile uint32_t t90 = 2U;

	t90 = (((x377&x378)&x379)/x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 6437781651844391725LLU;
	volatile int8_t x383 = 0;
	int32_t x384 = -1;
	static volatile uint64_t t91 = 7040622LLU;

	t91 = (((x381&x382)&x383)/x384);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 317337676LLU;
	int64_t x386 = 7533851344LL;
	int8_t x387 = 6;
	volatile uint64_t t92 = 764LLU;

	t92 = (((x385&x386)&x387)/x388);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 88;
	int64_t x390 = -35739034370LL;
	volatile uint32_t x392 = UINT32_MAX;
	int64_t t93 = 10468738843LL;

	t93 = (((x389&x390)&x391)/x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x394 = INT64_MAX;
	uint64_t x395 = 151787LLU;
	volatile uint64_t t94 = 10LLU;

	t94 = (((x393&x394)&x395)/x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	int8_t x400 = INT8_MIN;

	t95 = (((x397&x398)&x399)/x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x401 = UINT16_MAX;
	volatile int64_t x402 = INT64_MAX;
	int64_t x403 = 447684014LL;
	int64_t t96 = 20911415LL;

	t96 = (((x401&x402)&x403)/x404);

	if (t96 != 135LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = -1;
	uint8_t x407 = 3U;
	int64_t x408 = -1LL;
	static volatile int64_t t97 = 70253680366707371LL;

	t97 = (((x405&x406)&x407)/x408);

	if (t97 != -3LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = -1LL;
	static int16_t x410 = INT16_MAX;
	int8_t x412 = -6;
	int64_t t98 = 1044336LL;

	t98 = (((x409&x410)&x411)/x412);

	if (t98 != -4821LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 13U;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = UINT8_MAX;

	t99 = (((x413&x414)&x415)/x416);

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

