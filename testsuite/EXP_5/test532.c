#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int8_t x8 = INT8_MIN;
int8_t x17 = 62;
volatile int32_t x21 = -1;
int64_t x22 = -1LL;
int16_t x28 = INT16_MAX;
int64_t t6 = 1LL;
volatile int8_t x31 = -55;
static volatile int64_t x35 = -1LL;
int16_t x36 = INT16_MAX;
volatile uint64_t x49 = 2LLU;
static int32_t x51 = INT32_MIN;
static int64_t x60 = 15590654398LL;
static int32_t x62 = -1;
static int16_t x64 = -1;
uint16_t x70 = UINT16_MAX;
static volatile int64_t x71 = INT64_MIN;
static int16_t x75 = INT16_MAX;
int64_t t16 = 514916891LL;
int16_t x79 = INT16_MAX;
static uint32_t x82 = 1973891156U;
static int8_t x83 = 5;
int16_t x91 = -1930;
uint64_t t20 = 1214343082047909LLU;
static uint64_t x96 = UINT64_MAX;
static uint32_t t22 = 12977U;
volatile uint64_t x104 = 262009798LLU;
int16_t x108 = -123;
static int32_t x109 = 992913135;
volatile int32_t x110 = INT32_MIN;
uint32_t x120 = 34566628U;
static uint64_t t27 = 49610LLU;
volatile int32_t x124 = -1;
volatile int64_t x128 = -13802996745082201LL;
int64_t x129 = -1LL;
uint16_t x130 = UINT16_MAX;
int32_t x135 = 30;
int32_t t31 = -544373;
uint64_t t33 = 212622LLU;
static volatile int32_t x151 = INT32_MIN;
int64_t x152 = INT64_MAX;
volatile uint64_t t35 = 387035678291276545LLU;
volatile uint64_t x166 = UINT64_MAX;
volatile int16_t x167 = -11446;
volatile int8_t x170 = INT8_MAX;
volatile int32_t x181 = INT32_MAX;
volatile uint64_t t41 = 95315157621987675LLU;
static int16_t x191 = INT16_MIN;
uint64_t t42 = 1764902566LLU;
static uint8_t x194 = UINT8_MAX;
int32_t x195 = -1;
uint16_t x199 = 1U;
uint64_t x200 = 21400LLU;
int64_t t45 = -986293692797LL;
uint64_t x205 = 15868378LLU;
int32_t x209 = INT32_MAX;
int16_t x212 = INT16_MIN;
uint64_t x213 = 629647173672381352LLU;
int32_t x214 = INT32_MAX;
volatile uint64_t t48 = 0LLU;
int16_t x220 = -213;
static uint16_t x223 = 27445U;
int8_t x226 = INT8_MIN;
int8_t x233 = INT8_MIN;
int64_t x235 = -1LL;
int64_t t53 = -8LL;
static int16_t x239 = -1;
volatile int16_t x243 = INT16_MAX;
uint16_t x246 = 10044U;
volatile int32_t t56 = 1304362;
int16_t x249 = INT16_MIN;
static volatile int8_t x263 = -1;
uint32_t x265 = UINT32_MAX;
volatile uint64_t t61 = UINT64_MAX;
static uint64_t x273 = UINT64_MAX;
int64_t x274 = INT64_MIN;
int32_t x284 = -1;
int32_t t65 = -1071958;
uint16_t x289 = UINT16_MAX;
static uint16_t x290 = 0U;
int16_t x291 = 2018;
int32_t x293 = -1;
uint8_t x294 = 4U;
int64_t x295 = INT64_MIN;
int64_t t68 = 928480889275LL;
static int8_t x299 = -1;
volatile int64_t x301 = 221LL;
int32_t x305 = INT32_MIN;
static int32_t x306 = INT32_MIN;
int32_t t71 = 416048372;
static int64_t x310 = INT64_MIN;
int32_t x311 = INT32_MIN;
volatile int64_t t72 = -8386865887523789LL;
uint32_t x318 = UINT32_MAX;
static int16_t x329 = INT16_MIN;
uint32_t x333 = UINT32_MAX;
static uint32_t x334 = UINT32_MAX;
volatile int8_t x335 = INT8_MAX;
static int64_t x342 = INT64_MAX;
uint64_t x348 = UINT64_MAX;
uint16_t x353 = UINT16_MAX;
volatile uint32_t t84 = 986U;
static uint16_t x369 = 597U;
int64_t t86 = 498823241LL;
int16_t x374 = -1;
volatile int8_t x375 = 5;
int8_t x376 = INT8_MIN;
static int8_t x379 = 27;
uint32_t t88 = 43U;
static volatile int8_t x382 = -1;
uint8_t x383 = UINT8_MAX;
volatile uint16_t x385 = 4253U;
int32_t x387 = INT32_MIN;
static int64_t t90 = -60744076LL;
static uint16_t x394 = 4U;
volatile uint64_t t92 = UINT64_MAX;
int8_t x402 = INT8_MIN;
uint8_t x403 = 24U;
volatile int64_t t95 = -1LL;
int8_t x424 = 23;
int64_t t99 = 83719640748588495LL;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = INT64_MAX;
	int8_t x4 = -1;
	volatile int64_t t0 = 12553245308058LL;

	t0 = (x1|((x2/x3)-x4));

	if (t0 != -2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 77U;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = -24;

	t1 = (x5|((x6/x7)-x8));

	if (t1 != 65741) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 12583U;
	uint8_t x10 = 12U;
	int8_t x11 = -1;
	volatile int32_t x12 = -1;
	volatile uint32_t t2 = 0U;

	t2 = (x9|((x10/x11)-x12));

	if (t2 != 4294967287U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint32_t x14 = 342U;
	uint32_t x15 = 2866U;
	int16_t x16 = -15;
	int64_t t3 = -1253502989811533LL;

	t3 = (x13|((x14/x15)-x16));

	if (t3 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 16514104587481LLU;
	int32_t x19 = INT32_MIN;
	int8_t x20 = -59;
	volatile uint64_t t4 = 4056LLU;

	t4 = (x17|((x18/x19)-x20));

	if (t4 != 63LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x23 = -9865400391179527LL;
	uint8_t x24 = UINT8_MAX;
	static volatile int64_t t5 = -6975873179LL;

	t5 = (x21|((x22/x23)-x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 340557U;
	static int64_t x26 = -1LL;
	uint32_t x27 = UINT32_MAX;

	t6 = (x25|((x26/x27)-x28));

	if (t6 != -19891LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static int8_t x30 = 1;
	uint64_t x32 = 108LLU;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30/x31)-x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 7;
	uint64_t x34 = 194699587376703586LLU;
	uint64_t t8 = 319789LLU;

	t8 = (x33|((x34/x35)-x36));

	if (t8 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 11U;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = -165237270LL;
	volatile int64_t x40 = 2LL;
	static int64_t t9 = -11456192681842822LL;

	t9 = (x37|((x38/x39)-x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MAX;
	int16_t x52 = -1;
	static volatile uint64_t t10 = 3792692767LLU;

	t10 = (x49|((x50/x51)-x52));

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = 4U;
	int8_t x54 = INT8_MAX;
	uint64_t x55 = 8210127LLU;
	volatile int16_t x56 = INT16_MIN;
	volatile uint64_t t11 = 229459221754476LLU;

	t11 = (x53|((x54/x55)-x56));

	if (t11 != 32772LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x57 = INT32_MIN;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int64_t t12 = 400554008231LL;

	t12 = (x57|((x58/x59)-x60));

	if (t12 != -558268862LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 0U;
	int8_t x63 = INT8_MAX;
	int32_t t13 = -15846;

	t13 = (x61|((x62/x63)-x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -2;
	static volatile uint32_t x66 = UINT32_MAX;
	volatile int32_t x67 = INT32_MIN;
	static volatile int16_t x68 = INT16_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x65|((x66/x67)-x68));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = -7928;
	int16_t x72 = 5;
	int64_t t15 = 1LL;

	t15 = (x69|((x70/x71)-x72));

	if (t15 != -5LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	int64_t x76 = -1LL;

	t16 = (x73|((x74/x75)-x76));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;
	uint64_t x80 = 1985890LLU;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x77|((x78/x79)-x80));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int16_t x84 = -1;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x81|((x82/x83)-x84));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 49356LLU;
	static uint64_t x88 = 2506992LLU;
	static uint64_t t19 = UINT64_MAX;

	t19 = (x85|((x86/x87)-x88));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = INT8_MAX;
	int32_t x90 = -572;
	uint64_t x92 = UINT64_MAX;

	t20 = (x89|((x90/x91)-x92));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = 29U;
	volatile int64_t x95 = INT64_MIN;
	static volatile uint64_t t21 = 44014824292110LLU;

	t21 = (x93|((x94/x95)-x96));

	if (t21 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = 529451253U;
	int8_t x98 = -1;
	static int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;

	t22 = (x97|((x98/x99)-x100));

	if (t22 != 4294967285U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int32_t x102 = INT32_MAX;
	static volatile int32_t x103 = INT32_MIN;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x101|((x102/x103)-x104));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	volatile int8_t x106 = INT8_MAX;
	uint64_t x107 = 84LLU;
	uint64_t t24 = 441LLU;

	t24 = (x105|((x106/x107)-x108));

	if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x111 = 695;
	static uint8_t x112 = 36U;
	volatile int32_t t25 = -73385;

	t25 = (x109|((x110/x111)-x112));

	if (t25 != -65553) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x113 = 384U;
	int16_t x114 = INT16_MIN;
	static int8_t x115 = INT8_MIN;
	static uint16_t x116 = 1314U;
	volatile int32_t t26 = -962602744;

	t26 = (x113|((x114/x115)-x116));

	if (t26 != -1058) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	volatile uint64_t x118 = 2LLU;
	volatile int16_t x119 = 1458;

	t27 = (x117|((x118/x119)-x120));

	if (t27 != 18446744073709522460LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = INT16_MAX;
	int64_t t28 = 25211589157479LL;

	t28 = (x121|((x122/x123)-x124));

	if (t28 != -32759LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = 102663702U;
	static int64_t x126 = -15348625156399LL;
	int16_t x127 = INT16_MIN;
	volatile int64_t t29 = -277445068469LL;

	t29 = (x125|((x126/x127)-x128));

	if (t29 != 13802997314149918LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x131 = -1;
	int16_t x132 = INT16_MAX;
	static volatile int64_t t30 = 105289944LL;

	t30 = (x129|((x130/x131)-x132));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 1951U;
	static volatile int8_t x134 = INT8_MIN;
	volatile int16_t x136 = -1;

	t31 = (x133|((x134/x135)-x136));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MAX;
	int64_t x138 = 2124576LL;
	volatile uint8_t x139 = 34U;
	volatile uint16_t x140 = 831U;
	volatile int64_t t32 = 287995LL;

	t32 = (x137|((x138/x139)-x140));

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 790854LLU;
	uint16_t x142 = 6947U;
	static volatile int32_t x143 = INT32_MIN;
	volatile int32_t x144 = 88;

	t33 = (x141|((x142/x143)-x144));

	if (t33 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = 16;
	uint8_t x150 = UINT8_MAX;
	int64_t t34 = -867818LL;

	t34 = (x149|((x150/x151)-x152));

	if (t34 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x153 = 424U;
	static volatile uint32_t x154 = 1220403895U;
	uint64_t x155 = 3344462LLU;
	int64_t x156 = INT64_MIN;

	t35 = (x153|((x154/x155)-x156));

	if (t35 != 9223372036854776300LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	volatile int32_t x159 = -1752;
	uint32_t x160 = 253U;
	volatile int64_t t36 = 8251622222701391LL;

	t36 = (x157|((x158/x159)-x160));

	if (t36 != 5264483148627967LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1694972;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 18030942LLU;
	int16_t x164 = INT16_MAX;
	volatile uint64_t t37 = 20050164LLU;

	t37 = (x161|((x162/x163)-x164));

	if (t37 != 18446744073709527813LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	int64_t x168 = INT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (x165|((x166/x167)-x168));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	volatile int16_t x171 = INT16_MIN;
	int32_t x172 = -1;
	int32_t t39 = 32525;

	t39 = (x169|((x170/x171)-x172));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = UINT32_MAX;
	static uint8_t x174 = 0U;
	static int64_t x175 = 2215535405858140445LL;
	int64_t x176 = -1LL;
	volatile int64_t t40 = -2049290932176LL;

	t40 = (x173|((x174/x175)-x176));

	if (t40 != 4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = 4LLU;
	int16_t x184 = -1;

	t41 = (x181|((x182/x183)-x184));

	if (t41 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = -25;
	uint64_t x190 = UINT64_MAX;
	volatile uint64_t x192 = UINT64_MAX;

	t42 = (x189|((x190/x191)-x192));

	if (t42 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -26061007348LL;
	uint64_t x196 = 26441825LLU;
	uint64_t t43 = 9162400216822LLU;

	t43 = (x193|((x194/x195)-x196));

	if (t43 != 18446744073691502252LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MIN;
	volatile int64_t x198 = -1LL;
	uint64_t t44 = 132337363717LLU;

	t44 = (x197|((x198/x199)-x200));

	if (t44 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = -119022;
	volatile int64_t x204 = -6456465266316903LL;

	t45 = (x201|((x202/x203)-x204));

	if (t45 != 6456465266316927LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = -2462996221LL;
	volatile int32_t x207 = INT32_MAX;
	static int32_t x208 = INT32_MIN;
	uint64_t t46 = 531388417168229285LLU;

	t46 = (x205|((x206/x207)-x208));

	if (t46 != 2147483647LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x210 = INT32_MIN;
	int32_t x211 = INT32_MIN;
	int32_t t47 = INT32_MAX;

	t47 = (x209|((x210/x211)-x212));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x215 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;

	t48 = (x213|((x214/x215)-x216));

	if (t48 != 629647173672381353LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MAX;
	uint16_t x218 = 20U;
	static int32_t x219 = INT32_MAX;
	static volatile int32_t t49 = 646892;

	t49 = (x217|((x218/x219)-x220));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = 938U;
	int64_t x222 = INT64_MAX;
	volatile uint64_t x224 = 2LLU;
	static uint64_t t50 = 225510702146764786LLU;

	t50 = (x221|((x222/x223)-x224));

	if (t50 != 336067481758651LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = 11;
	int64_t x227 = -7318476LL;
	static volatile int16_t x228 = INT16_MAX;
	static volatile int64_t t51 = 777646758383710820LL;

	t51 = (x225|((x226/x227)-x228));

	if (t51 != -32757LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = INT64_MIN;
	static int32_t x231 = 12;
	static uint64_t x232 = 5619178944896LLU;
	volatile uint64_t t52 = 5424LLU;

	t52 = (x229|((x230/x231)-x232));

	if (t52 != 17678124118126100479LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x234 = INT8_MAX;
	int64_t x236 = INT64_MIN;

	t53 = (x233|((x234/x235)-x236));

	if (t53 != -127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MAX;
	volatile int16_t x240 = 0;
	int64_t t54 = 199734LL;

	t54 = (x237|((x238/x239)-x240));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 1U;
	int16_t x242 = -1;
	int8_t x244 = INT8_MIN;
	uint32_t t55 = 542502805U;

	t55 = (x241|((x242/x243)-x244));

	if (t55 != 129U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x247 = 34511977;
	static int8_t x248 = 11;

	t56 = (x245|((x246/x247)-x248));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x250 = 222;
	int32_t x251 = 10209516;
	uint32_t x252 = 44305903U;
	volatile uint32_t t57 = 3325986U;

	t57 = (x249|((x250/x251)-x252));

	if (t57 != 4294963729U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	volatile uint16_t x254 = 1336U;
	static int8_t x255 = -6;
	uint32_t x256 = 18684U;
	int64_t t58 = 20148943LL;

	t58 = (x253|((x254/x255)-x256));

	if (t58 != -9223372032559827418LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MAX;
	static int32_t x258 = -1;
	int32_t x259 = INT32_MIN;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x257|((x258/x259)-x260));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x261 = 4910607LLU;
	int64_t x262 = -1LL;
	volatile int32_t x264 = 0;
	volatile uint64_t t60 = 3492620297595LLU;

	t60 = (x261|((x262/x263)-x264));

	if (t60 != 4910607LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x266 = 18817374523558LLU;
	int32_t x267 = INT32_MAX;
	uint64_t x268 = 4987448LLU;

	t61 = (x265|((x266/x267)-x268));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MAX;
	int32_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	static uint64_t t62 = UINT64_MAX;

	t62 = (x269|((x270/x271)-x272));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x275 = 6735063204861LLU;
	static volatile int64_t x276 = -1LL;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x273|((x274/x275)-x276));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	int16_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	static volatile uint32_t x280 = UINT32_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (x277|((x278/x279)-x280));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x281 = INT16_MIN;
	int32_t x282 = -14875337;
	uint16_t x283 = UINT16_MAX;

	t65 = (x281|((x282/x283)-x284));

	if (t65 != -225) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = UINT32_MAX;
	int64_t x286 = 1LL;
	int32_t x287 = INT32_MAX;
	int16_t x288 = -1;
	volatile int64_t t66 = 100597159107060LL;

	t66 = (x285|((x286/x287)-x288));

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x292 = 22;
	static int32_t t67 = 7391;

	t67 = (x289|((x290/x291)-x292));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x296 = 1U;

	t68 = (x293|((x294/x295)-x296));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 1;
	static int64_t x298 = 3792LL;
	static uint64_t x300 = 11LLU;
	uint64_t t69 = 2135LLU;

	t69 = (x297|((x298/x299)-x300));

	if (t69 != 18446744073709547813LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x302 = 34403541675523LL;
	static volatile int8_t x303 = INT8_MIN;
	int16_t x304 = -1;
	volatile int64_t t70 = -61694297LL;

	t70 = (x301|((x302/x303)-x304));

	if (t70 != -268777669123LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;

	t71 = (x305|((x306/x307)-x308));

	if (t71 != -8421376) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	static int32_t x312 = INT32_MIN;

	t72 = (x309|((x310/x311)-x312));

	if (t72 != -9223372030412324864LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = 1U;
	volatile int8_t x314 = INT8_MIN;
	static int8_t x315 = INT8_MIN;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t73 = 2125U;

	t73 = (x313|((x314/x315)-x316));

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = -1LL;
	static int16_t x319 = -1;
	volatile uint32_t x320 = 63729849U;
	volatile int64_t t74 = 15471742704LL;

	t74 = (x317|((x318/x319)-x320));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = -132770366;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	static int64_t x324 = 59337978366LL;
	volatile int64_t t75 = -407399984001LL;

	t75 = (x321|((x322/x323)-x324));

	if (t75 != -12689470LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x325 = 6U;
	int64_t x326 = 34LL;
	uint8_t x327 = UINT8_MAX;
	volatile int8_t x328 = 1;
	int64_t t76 = -322931LL;

	t76 = (x325|((x326/x327)-x328));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x330 = 1;
	uint16_t x331 = 202U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t77 = 50100;

	t77 = (x329|((x330/x331)-x332));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x336 = INT16_MIN;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x333|((x334/x335)-x336));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x337 = -14451701LL;
	uint8_t x338 = 1U;
	volatile int8_t x339 = -1;
	int8_t x340 = 0;
	volatile int64_t t79 = 253029135179283178LL;

	t79 = (x337|((x338/x339)-x340));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -6289451;
	int8_t x343 = INT8_MIN;
	static volatile int8_t x344 = INT8_MAX;
	static volatile int64_t t80 = -10484275080LL;

	t80 = (x341|((x342/x343)-x344));

	if (t80 != -41LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 3749515890LLU;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -507;
	volatile uint64_t t81 = 24286206454128389LLU;

	t81 = (x345|((x346/x347)-x348));

	if (t81 != 3749515891LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = 12;
	uint64_t x350 = 102LLU;
	static volatile uint8_t x351 = 105U;
	uint32_t x352 = 1630U;
	static uint64_t t82 = 12826468342777LLU;

	t82 = (x349|((x350/x351)-x352));

	if (t82 != 18446744073709549998LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = 211;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = 52533LLU;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x353|((x354/x355)-x356));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = 6406U;
	uint32_t x358 = 29893U;
	int16_t x359 = -1;
	uint16_t x360 = UINT16_MAX;

	t84 = (x357|((x358/x359)-x360));

	if (t84 != 4294908167U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = 3U;
	volatile uint16_t x364 = 151U;
	static int64_t t85 = 7LL;

	t85 = (x361|((x362/x363)-x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x370 = INT64_MIN;
	static uint16_t x371 = 293U;
	volatile uint16_t x372 = UINT16_MAX;

	t86 = (x369|((x370/x371)-x372));

	if (t86 != -31479085450081321LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x373 = -34;
	static volatile int32_t t87 = 1665409;

	t87 = (x373|((x374/x375)-x376));

	if (t87 != -34) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 8641U;
	int16_t x380 = INT16_MIN;

	t88 = (x377|((x378/x379)-x380));

	if (t88 != 65535U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 62U;
	int16_t x384 = -2;
	volatile uint32_t t89 = 2109U;

	t89 = (x381|((x382/x383)-x384));

	if (t89 != 62U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x386 = INT64_MAX;
	int64_t x388 = INT64_MIN;

	t90 = (x385|((x386/x387)-x388));

	if (t90 != 9223372032559812765LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	static volatile int16_t x391 = INT16_MIN;
	static uint8_t x392 = UINT8_MAX;
	int32_t t91 = -125285060;

	t91 = (x389|((x390/x391)-x392));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x395 = 505071LL;
	volatile int32_t x396 = INT32_MIN;

	t92 = (x393|((x394/x395)-x396));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = -87LL;
	int8_t x398 = 31;
	uint32_t x399 = 1321637U;
	int32_t x400 = INT32_MIN;
	static volatile int64_t t93 = -10013347550LL;

	t93 = (x397|((x398/x399)-x400));

	if (t93 != -87LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x401 = UINT16_MAX;
	uint16_t x404 = 759U;
	volatile int32_t t94 = 28;

	t94 = (x401|((x402/x403)-x404));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = 94978710312343LL;
	static volatile int16_t x406 = 537;
	int16_t x407 = INT16_MAX;
	uint8_t x408 = 0U;

	t95 = (x405|((x406/x407)-x408));

	if (t95 != 94978710312343LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = 17299LLU;
	int16_t x410 = INT16_MIN;
	int64_t x411 = -39879492LL;
	int64_t x412 = -1LL;
	volatile uint64_t t96 = 264719589LLU;

	t96 = (x409|((x410/x411)-x412));

	if (t96 != 17299LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = INT64_MIN;
	int16_t x414 = -1;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = UINT8_MAX;
	static int64_t t97 = 0LL;

	t97 = (x413|((x414/x415)-x416));

	if (t97 != -255LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = 3;
	int8_t x418 = -1;
	uint16_t x419 = 1749U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t98 = 103407;

	t98 = (x417|((x418/x419)-x420));

	if (t98 != 32771) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x421 = 8454;
	static uint16_t x422 = UINT16_MAX;
	int64_t x423 = INT64_MIN;

	t99 = (x421|((x422/x423)-x424));

	if (t99 != -17LL) { NG(); } else { ; }
	
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

