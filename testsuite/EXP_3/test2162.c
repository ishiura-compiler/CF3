#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static int16_t x7 = -94;
static volatile uint32_t t1 = 254U;
int64_t x13 = INT64_MIN;
int16_t x17 = INT16_MIN;
uint64_t x31 = 12LLU;
int16_t x37 = -38;
uint8_t x44 = 1U;
static int16_t x46 = -234;
volatile int64_t x47 = INT64_MIN;
int32_t x54 = -4789;
int32_t t12 = 120090;
int64_t x58 = INT64_MIN;
int16_t x62 = INT16_MAX;
uint64_t x75 = 482830707273057LLU;
uint64_t t17 = 182856093LLU;
static uint32_t x86 = 258302117U;
uint16_t x87 = UINT16_MAX;
uint32_t x89 = 2436533U;
int16_t x91 = -8;
static uint32_t t21 = 38092U;
volatile int16_t x94 = -1;
int64_t t24 = 1387791287962166997LL;
volatile int32_t x110 = INT32_MIN;
int32_t t26 = 1075;
uint64_t x118 = 5847876392LLU;
int16_t x123 = INT16_MIN;
int64_t x133 = INT64_MIN;
uint16_t x134 = UINT16_MAX;
int64_t x140 = -546874167991LL;
static volatile int64_t t33 = -173010LL;
volatile int16_t x151 = INT16_MIN;
volatile int32_t x155 = 33;
int8_t x156 = -30;
volatile int64_t x159 = -70015669435LL;
uint64_t x160 = UINT64_MAX;
int64_t x162 = -1LL;
static int8_t x165 = INT8_MAX;
uint64_t t41 = 1140995LLU;
int32_t x183 = -5;
int16_t x187 = INT16_MAX;
uint64_t x191 = 122999234LLU;
int16_t x197 = 4567;
uint16_t x199 = UINT16_MAX;
static int32_t t49 = 6318360;
uint64_t x205 = UINT64_MAX;
static int64_t x207 = -5683LL;
uint32_t x210 = 195410281U;
int64_t x212 = INT64_MIN;
volatile uint32_t x223 = 0U;
volatile int64_t x229 = 1129LL;
static int16_t x230 = INT16_MIN;
static volatile int32_t x232 = INT32_MIN;
volatile int64_t t56 = 73995168LL;
uint64_t x233 = UINT64_MAX;
static volatile uint64_t x234 = 3926324263432134165LLU;
volatile int16_t x236 = INT16_MAX;
volatile int64_t x244 = INT64_MAX;
static volatile int64_t t59 = 949770161807LL;
int16_t x247 = -25;
int8_t x265 = INT8_MIN;
static int32_t t65 = -127513317;
uint64_t x273 = 40025125496072LLU;
uint32_t x275 = 93638U;
static int16_t x278 = INT16_MIN;
static int8_t x279 = -1;
int32_t t69 = 25503057;
int8_t x290 = INT8_MIN;
uint64_t x291 = 5734815298647016LLU;
int16_t x293 = -127;
int8_t x298 = INT8_MAX;
volatile int64_t t73 = 2LL;
int32_t x306 = INT32_MAX;
int64_t t75 = -164862788642263LL;
int32_t x313 = -1005274;
int64_t x324 = INT64_MIN;
int64_t t79 = 111LL;
volatile uint64_t t80 = 136507427LLU;
int8_t x335 = -1;
int64_t x354 = INT64_MIN;
uint8_t x356 = 7U;
static int8_t x363 = INT8_MIN;
uint16_t x365 = 1944U;
int8_t x369 = 0;
int16_t x373 = 6370;
static int64_t t93 = 538485947223104759LL;
int8_t x384 = INT8_MAX;
static uint64_t t94 = 1896975549654509LLU;
volatile uint16_t x388 = 5623U;
int64_t x393 = INT64_MAX;


void f0(void) {
	uint32_t x1 = 7833015U;
	static volatile int8_t x3 = INT8_MIN;
	volatile int8_t x4 = -1;
	volatile int64_t t0 = 17491584362881LL;

	t0 = ((x1&x2)/(x3^x4));

	if (t0 != 61677LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 49509556U;
	static volatile int32_t x6 = INT32_MAX;
	int32_t x8 = -1;

	t1 = ((x5&x6)/(x7^x8));

	if (t1 != 532360U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	volatile int64_t x10 = -1LL;
	volatile int8_t x11 = INT8_MIN;
	int64_t x12 = -63854233934229LL;
	static int64_t t2 = -159789371LL;

	t2 = ((x9&x10)/(x11^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int8_t x15 = -27;
	volatile uint16_t x16 = 992U;
	static int64_t t3 = -7915684194572LL;

	t3 = ((x13&x14)/(x15^x16));

	if (t3 != 9051395521937954LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint8_t x19 = 39U;
	uint16_t x20 = 1U;
	volatile int64_t t4 = -896476959417720435LL;

	t4 = ((x17&x18)/(x19^x20));

	if (t4 != -242720316759336205LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	volatile int8_t x27 = 0;
	volatile int32_t x28 = INT32_MIN;
	int32_t t5 = -9;

	t5 = ((x25&x26)/(x27^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	volatile uint64_t x30 = UINT64_MAX;
	volatile int8_t x32 = -1;
	uint64_t t6 = 2301373673LLU;

	t6 = ((x29&x30)/(x31^x32));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MAX;
	int8_t x34 = -10;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;
	volatile int32_t t7 = -35009;

	t7 = ((x33&x34)/(x35^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 3320830989658LLU;
	volatile int16_t x39 = -4897;
	volatile int32_t x40 = -1;
	volatile uint64_t t8 = 366715544771LLU;

	t8 = ((x37&x38)/(x39^x40));

	if (t8 != 678274303LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 19U;
	int8_t x42 = -1;
	int64_t x43 = -1LL;
	volatile int64_t t9 = -894LL;

	t9 = ((x41&x42)/(x43^x44));

	if (t9 != -9LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = 0;
	int16_t x48 = -1;
	volatile int64_t t10 = 451213928779484745LL;

	t10 = ((x45&x46)/(x47^x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 495451LL;
	int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MIN;
	volatile int64_t t11 = 24035LL;

	t11 = ((x49&x50)/(x51^x52));

	if (t11 != 15LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = UINT8_MAX;
	int8_t x55 = -2;
	uint16_t x56 = UINT16_MAX;

	t12 = ((x53&x54)/(x55^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 7;
	int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int64_t t13 = -3593741726LL;

	t13 = ((x57&x58)/(x59^x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MAX;
	static volatile int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t14 = 8661;

	t14 = ((x61&x62)/(x63^x64));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 2093U;
	volatile uint8_t x66 = 72U;
	int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	volatile int64_t t15 = -7850044LL;

	t15 = ((x65&x66)/(x67^x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 36U;
	int16_t x70 = INT16_MAX;
	uint8_t x71 = 15U;
	int16_t x72 = -1;
	volatile int32_t t16 = 1656190;

	t16 = ((x69&x70)/(x71^x72));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -336951118;
	int32_t x74 = INT32_MIN;
	uint32_t x76 = 30686U;

	t17 = ((x73&x74)/(x75^x76));

	if (t17 != 38205LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -6;
	static uint32_t x78 = UINT32_MAX;
	volatile int16_t x79 = INT16_MAX;
	static volatile int32_t x80 = INT32_MIN;
	uint32_t t18 = 1364815U;

	t18 = ((x77&x78)/(x79^x80));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -1;
	int16_t x82 = INT16_MAX;
	static int8_t x83 = INT8_MAX;
	uint8_t x84 = 34U;
	volatile int32_t t19 = -564236572;

	t19 = ((x81&x82)/(x83^x84));

	if (t19 != 352) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 56084888LLU;
	volatile uint8_t x88 = 0U;
	volatile uint64_t t20 = 5259608LLU;

	t20 = ((x85&x86)/(x87^x88));

	if (t20 != 837LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x90 = 755;
	int32_t x92 = INT32_MIN;

	t21 = ((x89&x90)/(x91^x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = 22208221LLU;
	static uint16_t x95 = 4U;
	int32_t x96 = -27852;
	uint64_t t22 = 3022357614LLU;

	t22 = ((x93&x94)/(x95^x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 474U;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -63106320LL;
	int16_t x100 = 7966;
	int64_t t23 = -8349224LL;

	t23 = ((x97&x98)/(x99^x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 6U;
	volatile int64_t x103 = INT64_MAX;
	volatile uint8_t x104 = UINT8_MAX;

	t24 = ((x101&x102)/(x103^x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	static volatile int64_t x106 = INT64_MIN;
	int16_t x107 = -3401;
	uint64_t x108 = 1706677224527LLU;
	uint64_t t25 = 7760LLU;

	t25 = ((x105&x106)/(x107^x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int8_t x112 = -2;

	t26 = ((x109&x110)/(x111^x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	static int16_t x115 = INT16_MIN;
	int16_t x116 = -1;
	volatile int64_t t27 = -114639635LL;

	t27 = ((x113&x114)/(x115^x116));

	if (t27 != -281483566907400LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = INT64_MIN;
	int16_t x119 = 1;
	static int32_t x120 = -2669;
	volatile uint64_t t28 = 17134103LLU;

	t28 = ((x117&x118)/(x119^x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 36;
	uint32_t x122 = 320391U;
	static uint8_t x124 = 98U;
	volatile uint32_t t29 = 4104110U;

	t29 = ((x121&x122)/(x123^x124));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = -51360567;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t30 = -1688259;

	t30 = ((x125&x126)/(x127^x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = 63151785;
	static int16_t x130 = INT16_MIN;
	uint16_t x131 = 64U;
	int16_t x132 = 83;
	int32_t t31 = 11;

	t31 = ((x129&x130)/(x131^x132));

	if (t31 != 3323365) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	int64_t t32 = 117LL;

	t32 = ((x133&x134)/(x135^x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 62U;
	volatile int32_t x138 = -3995;
	int32_t x139 = INT32_MAX;

	t33 = ((x137&x138)/(x139^x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 23;
	uint64_t x142 = UINT64_MAX;
	static volatile int8_t x143 = -4;
	volatile uint8_t x144 = UINT8_MAX;
	volatile uint64_t t34 = 3LLU;

	t34 = ((x141&x142)/(x143^x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = -6LL;
	uint32_t x147 = 0U;
	uint32_t x148 = 119440U;
	int64_t t35 = 563002118883743565LL;

	t35 = ((x145&x146)/(x147^x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 11U;
	int32_t x150 = INT32_MIN;
	int8_t x152 = -1;
	volatile int32_t t36 = 12806238;

	t36 = ((x149&x150)/(x151^x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 30173848087121597LLU;
	static int32_t x154 = INT32_MAX;
	uint64_t t37 = 5573246153LLU;

	t37 = ((x153&x154)/(x155^x156));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	volatile uint64_t t38 = 26228LLU;

	t38 = ((x157&x158)/(x159^x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	static volatile int8_t x163 = -1;
	static uint16_t x164 = UINT16_MAX;
	volatile int64_t t39 = 1310287435628096652LL;

	t39 = ((x161&x162)/(x163^x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x166 = -1;
	uint32_t x167 = 950351U;
	volatile int32_t x168 = INT32_MIN;
	volatile uint32_t t40 = 700U;

	t40 = ((x165&x166)/(x167^x168));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = INT32_MIN;
	static int16_t x170 = -3979;
	volatile uint64_t x171 = 3741034243LLU;
	uint16_t x172 = 3650U;

	t41 = ((x169&x170)/(x171^x172));

	if (t41 != 4930920179LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	int8_t x176 = INT8_MAX;
	static int64_t t42 = -1LL;

	t42 = ((x173&x174)/(x175^x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 3435U;
	int64_t x178 = -500606LL;
	static int8_t x179 = 7;
	int32_t x180 = INT32_MIN;
	volatile int64_t t43 = -4278140526LL;

	t43 = ((x177&x178)/(x179^x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -8483307426LL;
	uint32_t x182 = 798U;
	int32_t x184 = INT32_MIN;
	volatile int64_t t44 = -71747556495314222LL;

	t44 = ((x181&x182)/(x183^x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 32125542U;
	int32_t x186 = INT32_MIN;
	int64_t x188 = 4448778110LL;
	int64_t t45 = 1719253673465500LL;

	t45 = ((x185&x186)/(x187^x188));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	static uint64_t x192 = 410383LLU;
	volatile uint64_t t46 = 2155487537268LLU;

	t46 = ((x189&x190)/(x191^x192));

	if (t46 != 150154147385LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	uint16_t x194 = 27134U;
	int16_t x195 = 257;
	int8_t x196 = -1;
	static int64_t t47 = -96901508587LL;

	t47 = ((x193&x194)/(x195^x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x198 = INT32_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t48 = 2;

	t48 = ((x197&x198)/(x199^x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = -1;
	int8_t x203 = 0;
	static volatile uint16_t x204 = UINT16_MAX;

	t49 = ((x201&x202)/(x203^x204));

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = INT32_MAX;
	int64_t x208 = -127047LL;
	volatile uint64_t t50 = 850LLU;

	t50 = ((x205&x206)/(x207^x208));

	if (t50 != 17244LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = INT8_MIN;
	uint64_t x211 = 20911744LLU;
	uint64_t t51 = 335391472631LLU;

	t51 = ((x209&x210)/(x211^x212));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 0U;
	int64_t x214 = -1LL;
	uint8_t x215 = 4U;
	volatile uint32_t x216 = 0U;
	static volatile int64_t t52 = -56417731947615LL;

	t52 = ((x213&x214)/(x215^x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MAX;
	static int64_t x219 = 1620915844797101322LL;
	int8_t x220 = INT8_MIN;
	int64_t t53 = 8675601327LL;

	t53 = ((x217&x218)/(x219^x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x224 = 7;
	uint32_t t54 = 17752U;

	t54 = ((x221&x222)/(x223^x224));

	if (t54 != 613562075U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 7642;
	volatile int64_t x226 = 51966584819730LL;
	int16_t x227 = -1;
	static volatile uint32_t x228 = 479991672U;
	int64_t t55 = 286LL;

	t55 = ((x225&x226)/(x227^x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x231 = INT16_MIN;

	t56 = ((x229&x230)/(x231^x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x235 = 51927U;
	volatile uint64_t t57 = 1LLU;

	t57 = ((x233&x234)/(x235^x236));

	if (t57 != 84662848530104LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = -1;
	uint8_t x238 = 12U;
	static int32_t x239 = 75;
	uint64_t x240 = UINT64_MAX;
	uint64_t t58 = 97831LLU;

	t58 = ((x237&x238)/(x239^x240));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = INT16_MAX;
	uint32_t x242 = 62280930U;
	uint32_t x243 = UINT32_MAX;

	t59 = ((x241&x242)/(x243^x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x245 = 485U;
	int64_t x246 = INT64_MAX;
	static int32_t x248 = INT32_MIN;
	int64_t t60 = -5212219431697LL;

	t60 = ((x245&x246)/(x247^x248));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;
	volatile int64_t t61 = -68935348964490503LL;

	t61 = ((x249&x250)/(x251^x252));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 5264738LLU;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = 6694687LL;
	int64_t x256 = INT64_MAX;
	uint64_t t62 = 10362877176LLU;

	t62 = ((x253&x254)/(x255^x256));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = 427835399LL;
	int16_t x258 = INT16_MAX;
	volatile int64_t x259 = 8207177645LL;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t63 = -200919LL;

	t63 = ((x257&x258)/(x259^x260));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = 278561LL;
	uint32_t x262 = 188293U;
	static int32_t x263 = INT32_MIN;
	static volatile int32_t x264 = 686320715;
	static volatile int64_t t64 = 103805LL;

	t64 = ((x261&x262)/(x263^x264));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	int32_t x268 = INT32_MAX;

	t65 = ((x265&x266)/(x267^x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t66 = 48601896335135074LL;

	t66 = ((x269&x270)/(x271^x272));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = 1635322556343699LL;
	int16_t x276 = INT16_MIN;
	volatile uint64_t t67 = 11LLU;

	t67 = ((x273&x274)/(x275^x276));

	if (t67 != 1089LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 1U;
	int64_t x280 = INT64_MAX;
	volatile int64_t t68 = -249LL;

	t68 = ((x277&x278)/(x279^x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static volatile int8_t x282 = INT8_MIN;
	volatile uint16_t x283 = 4417U;
	uint16_t x284 = 29182U;

	t69 = ((x281&x282)/(x283^x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = INT16_MIN;
	volatile uint64_t x286 = 127224798934292LLU;
	int16_t x287 = 0;
	uint16_t x288 = UINT16_MAX;
	uint64_t t70 = 12713981531834412LLU;

	t70 = ((x285&x286)/(x287^x288));

	if (t70 != 1941325992LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	int64_t x292 = -12921LL;
	uint64_t t71 = 406001LLU;

	t71 = ((x289&x290)/(x291^x292));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x294 = 55862461U;
	int32_t x295 = -997083;
	int8_t x296 = INT8_MIN;
	uint32_t t72 = 2486U;

	t72 = ((x293&x294)/(x295^x296));

	if (t72 != 56U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x299 = 602661U;
	static int8_t x300 = INT8_MIN;

	t73 = ((x297&x298)/(x299^x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 28245U;
	static volatile int16_t x302 = 1;
	int8_t x303 = INT8_MIN;
	int64_t x304 = -898908316LL;
	int64_t t74 = 260575025415021108LL;

	t74 = ((x301&x302)/(x303^x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x305 = 53U;
	int64_t x307 = INT64_MIN;
	int32_t x308 = -1;

	t75 = ((x305&x306)/(x307^x308));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = 1116LL;
	uint64_t x310 = UINT64_MAX;
	static int16_t x311 = -238;
	volatile int32_t x312 = 7372;
	static uint64_t t76 = 96537436215647LLU;

	t76 = ((x309&x310)/(x311^x312));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x314 = 22LLU;
	int32_t x315 = -169292;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t77 = 82LLU;

	t77 = ((x313&x314)/(x315^x316));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 62U;
	int32_t x318 = 6;
	uint16_t x319 = 30U;
	volatile int32_t x320 = INT32_MIN;
	static int32_t t78 = -5039220;

	t78 = ((x317&x318)/(x319^x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = -1LL;
	static uint32_t x322 = 12113581U;
	int32_t x323 = -1;

	t79 = ((x321&x322)/(x323^x324));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 122U;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = 146374LLU;

	t80 = ((x325&x326)/(x327^x328));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = -40;
	volatile int32_t x330 = 0;
	uint32_t x331 = 1646638265U;
	static int8_t x332 = 29;
	volatile uint32_t t81 = 20834U;

	t81 = ((x329&x330)/(x331^x332));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = -1;
	int32_t x334 = INT32_MIN;
	volatile uint16_t x336 = UINT16_MAX;
	int32_t t82 = -6700;

	t82 = ((x333&x334)/(x335^x336));

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 6350;
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	uint16_t x340 = UINT16_MAX;
	uint32_t t83 = 715U;

	t83 = ((x337&x338)/(x339^x340));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x341 = INT64_MAX;
	int16_t x342 = -1;
	int8_t x343 = INT8_MIN;
	volatile int8_t x344 = -1;
	volatile int64_t t84 = -974836317LL;

	t84 = ((x341&x342)/(x343^x344));

	if (t84 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MIN;
	volatile int32_t x347 = INT32_MIN;
	static int64_t x348 = INT64_MIN;
	int64_t t85 = 68910268843782LL;

	t85 = ((x345&x346)/(x347^x348));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -1;
	volatile int32_t x350 = INT32_MIN;
	int32_t x351 = -153;
	static uint64_t x352 = 3412205163629167560LLU;
	uint64_t t86 = 838253LLU;

	t86 = ((x349&x350)/(x351^x352));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x353 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	volatile int64_t t87 = 1572598714968LL;

	t87 = ((x353&x354)/(x355^x356));

	if (t87 != -37191016277640225LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = INT64_MAX;
	static int64_t x358 = INT64_MAX;
	int32_t x359 = 605312;
	int8_t x360 = INT8_MAX;
	static volatile int64_t t88 = -100459604861LL;

	t88 = ((x357&x358)/(x359^x360));

	if (t88 != 15234188806559LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x361 = 45;
	volatile int16_t x362 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile int32_t t89 = -31;

	t89 = ((x361&x362)/(x363^x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x366 = 8425U;
	uint16_t x367 = 48U;
	int16_t x368 = INT16_MIN;
	int32_t t90 = -1;

	t90 = ((x365&x366)/(x367^x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x370 = 614LL;
	static int32_t x371 = INT32_MAX;
	uint32_t x372 = 12029U;
	volatile int64_t t91 = 8478315089023LL;

	t91 = ((x369&x370)/(x371^x372));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x374 = INT16_MIN;
	int16_t x375 = 21;
	static int8_t x376 = 1;
	static volatile int32_t t92 = -72637;

	t92 = ((x373&x374)/(x375^x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = 1;
	int64_t x379 = -1LL;
	static int64_t x380 = INT64_MIN;

	t93 = ((x377&x378)/(x379^x380));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x381 = 24U;
	uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MAX;

	t94 = ((x381&x382)/(x383^x384));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MIN;
	static volatile uint64_t x386 = 32105303067LLU;
	volatile int8_t x387 = 8;
	volatile uint64_t t95 = 16634204019182LLU;

	t95 = ((x385&x386)/(x387^x388));

	if (t95 != 5701527LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x389 = 1U;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = INT16_MAX;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t96 = 3;

	t96 = ((x389&x390)/(x391^x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x394 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = -1;
	volatile int64_t t97 = 298806538LL;

	t97 = ((x393&x394)/(x395^x396));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MAX;
	uint32_t t98 = 6U;

	t98 = ((x397&x398)/(x399^x400));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = 4;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = -21956931LL;
	volatile int8_t x404 = INT8_MIN;
	volatile int64_t t99 = 6192LL;

	t99 = ((x401&x402)/(x403^x404));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

