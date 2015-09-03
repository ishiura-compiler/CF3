#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 34U;
uint32_t x9 = 2933847U;
static int64_t x13 = INT64_MIN;
int8_t x14 = INT8_MIN;
int64_t x23 = -880637566509301576LL;
uint64_t t4 = 15137211557742LLU;
int64_t x28 = 4705549166850LL;
int32_t x33 = INT32_MIN;
int32_t x40 = -426;
int64_t x42 = -278LL;
volatile int64_t t9 = 0LL;
static int64_t x54 = 3523169LL;
volatile int8_t x56 = -1;
int32_t x60 = 4993294;
int64_t x64 = -4LL;
int16_t x66 = INT16_MAX;
uint8_t x69 = UINT8_MAX;
volatile uint16_t x72 = UINT16_MAX;
volatile uint32_t t16 = 7U;
int8_t x78 = INT8_MAX;
int64_t x80 = INT64_MIN;
volatile int64_t t17 = 20194890051LL;
uint32_t x86 = 7267U;
static int64_t t19 = -418626902LL;
static int64_t x99 = -317139951789LL;
volatile uint64_t t22 = 5LLU;
int32_t x110 = INT32_MIN;
static uint64_t x119 = 2166578697LLU;
int32_t x124 = INT32_MIN;
volatile uint32_t x126 = 232780U;
int32_t x128 = 1044563188;
volatile uint16_t x132 = 37U;
static int64_t t29 = 17577756890770LL;
int8_t x134 = -1;
int32_t t32 = -399;
int32_t x146 = INT32_MIN;
static int64_t x151 = -1LL;
volatile int64_t t34 = 3721922393LL;
volatile uint8_t x153 = 1U;
uint16_t x159 = UINT16_MAX;
static uint8_t x161 = 11U;
uint8_t x163 = 3U;
volatile int64_t x167 = 819727779121LL;
int64_t x169 = INT64_MAX;
int8_t x172 = INT8_MIN;
int16_t x173 = 1539;
static volatile int64_t x178 = INT64_MAX;
uint64_t x180 = UINT64_MAX;
uint16_t x184 = UINT16_MAX;
int64_t t42 = -11735521924LL;
int64_t x218 = 5220718392LL;
volatile uint64_t x228 = 1673LLU;
static int16_t x236 = -1;
uint64_t t57 = 193218096175585240LLU;
int8_t x254 = -1;
int16_t x258 = -1;
int8_t x263 = INT8_MIN;
volatile int16_t x268 = INT16_MIN;
int8_t x269 = -1;
int64_t x271 = INT64_MIN;
uint8_t x272 = 0U;
uint64_t x274 = UINT64_MAX;
uint64_t t66 = 2177843LLU;
int64_t x289 = -1LL;
uint32_t x292 = 246U;
uint16_t x293 = 231U;
static volatile int16_t x296 = INT16_MAX;
int8_t x303 = -34;
volatile uint64_t x304 = 7869016578893889LLU;
int8_t x312 = 9;
volatile uint64_t t74 = 50110152340522LLU;
int32_t x321 = 25733;
int8_t x325 = -15;
volatile int64_t t76 = 1956157268417LL;
static volatile uint8_t x333 = 0U;
int32_t x336 = 19;
int16_t x345 = -1;
int64_t x350 = INT64_MIN;
uint16_t x352 = 110U;
static int64_t x360 = INT64_MIN;
int32_t x372 = 1;
uint64_t t87 = 68611LLU;
static volatile int8_t x377 = -1;
uint16_t x386 = UINT16_MAX;
uint16_t x394 = UINT16_MAX;
static volatile int32_t t92 = 6;
volatile uint32_t x401 = 340U;
int64_t t94 = -160255676LL;
uint8_t x416 = 26U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = -387486812;
	uint64_t x3 = 9823204258156LLU;
	int32_t x4 = INT32_MIN;
	static uint64_t t0 = 5890671LLU;

	t0 = (x1&((x2/x3)+x4));

	if (t0 != 18446744071563945728LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = 1;
	static volatile int8_t x7 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -1639985;

	t1 = (x5&((x6/x7)+x8));

	if (t1 != 34) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 14288LLU;
	volatile uint64_t t2 = 58065723881036LLU;

	t2 = (x9&((x10/x11)+x12));

	if (t2 != 1105LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x15 = 1U;
	int64_t x16 = 354618LL;
	volatile int64_t t3 = 1324746651949472LL;

	t3 = (x13&((x14/x15)+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	uint64_t x24 = 2789140674571530LLU;

	t4 = (x21&((x22/x23)+x24));

	if (t4 != 2789138877120512LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x25 = 4037U;
	int64_t x26 = 439181LL;
	uint16_t x27 = UINT16_MAX;
	static volatile int64_t t5 = 521955271744913LL;

	t5 = (x25&((x26/x27)+x28));

	if (t5 != 2304LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1872884;
	int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 977353708119LL;
	int64_t t6 = 915162798LL;

	t6 = (x29&((x30/x31)+x32));

	if (t6 != 977352589320LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 5U;
	static int16_t x35 = INT16_MIN;
	static volatile int64_t x36 = 18345647134LL;
	int64_t t7 = -6990902571LL;

	t7 = (x33&((x34/x35)+x36));

	if (t7 != 17179869184LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = 53339;
	volatile uint64_t x39 = 1465819332961LLU;
	uint64_t t8 = 829LLU;

	t8 = (x37&((x38/x39)+x40));

	if (t8 != 65110LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = 2794;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = -440435835;

	t9 = (x41&((x42/x43)+x44));

	if (t9 != 2688LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	int8_t x46 = -26;
	static uint16_t x47 = UINT16_MAX;
	volatile uint8_t x48 = 102U;
	int64_t t10 = -20208LL;

	t10 = (x45&((x46/x47)+x48));

	if (t10 != 102LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 4;
	uint8_t x55 = UINT8_MAX;
	volatile int64_t t11 = 74866233LL;

	t11 = (x53&((x54/x55)+x56));

	if (t11 != 4LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x57 = 95U;
	static int8_t x58 = INT8_MIN;
	uint32_t x59 = 1174698745U;
	volatile uint32_t t12 = 11382U;

	t12 = (x57&((x58/x59)+x60));

	if (t12 != 17U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 116391754877257010LL;
	int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	int64_t t13 = 4749435147282LL;

	t13 = (x61&((x62/x63)+x64));

	if (t13 != 44334160839329072LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile int32_t x67 = -1;
	int64_t x68 = 424341LL;
	static volatile int64_t t14 = 3758LL;

	t14 = (x65&((x66/x67)+x68));

	if (t14 != 63894LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int32_t t15 = -7;

	t15 = (x69&((x70/x71)+x72));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 1U;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = 371783;
	int8_t x76 = -2;

	t16 = (x73&((x74/x75)+x76));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 49U;
	static int64_t x79 = INT64_MIN;

	t17 = (x77&((x78/x79)+x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 157308420U;
	static int8_t x83 = INT8_MIN;
	uint16_t x84 = 85U;
	volatile uint64_t t18 = 115370517LLU;

	t18 = (x81&((x82/x83)+x84));

	if (t18 != 85LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 203673LL;
	int64_t x87 = INT64_MAX;
	volatile int32_t x88 = 245897345;

	t19 = (x85&((x86/x87)+x88));

	if (t19 != 6273LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MAX;
	int8_t x92 = INT8_MAX;
	int32_t t20 = 7346734;

	t20 = (x89&((x90/x91)+x92));

	if (t20 != 119) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = INT16_MAX;
	static int64_t x94 = -287LL;
	int8_t x95 = -1;
	uint32_t x96 = 11029772U;
	volatile int64_t t21 = -10384047316469611LL;

	t21 = (x93&((x94/x95)+x96));

	if (t21 != 20011LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 143377483;
	volatile int32_t x98 = -491631;
	uint64_t x100 = UINT64_MAX;

	t22 = (x97&((x98/x99)+x100));

	if (t22 != 143377483LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	static uint32_t x102 = 80540U;
	volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = 0U;
	int64_t t23 = 36027085804909918LL;

	t23 = (x101&((x102/x103)+x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	static int64_t x107 = INT64_MAX;
	static int16_t x108 = -1;
	static int64_t t24 = INT64_MIN;

	t24 = (x105&((x106/x107)+x108));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	static int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 1646;

	t25 = (x109&((x110/x111)+x112));

	if (t25 != -16909568) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -9;
	volatile int64_t x120 = -2799028803576562LL;
	static volatile uint64_t t26 = 64667970207LLU;

	t26 = (x117&((x118/x119)+x120));

	if (t26 != 18443945053420191744LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = UINT32_MAX;
	volatile uint64_t t27 = 316LLU;

	t27 = (x121&((x122/x123)+x124));

	if (t27 != 2147483649LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	uint32_t t28 = 3U;

	t28 = (x125&((x126/x127)+x128));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = -1LL;
	static int16_t x131 = -1;

	t29 = (x129&((x130/x131)+x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = 76;
	int8_t x135 = 7;
	static int64_t x136 = -1LL;
	static volatile int64_t t30 = 68LL;

	t30 = (x133&((x134/x135)+x136));

	if (t30 != 76LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	static int64_t x139 = INT64_MAX;
	static int32_t x140 = 3171423;
	int64_t t31 = -2211614761393771LL;

	t31 = (x137&((x138/x139)+x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x141 = -3;
	uint8_t x142 = 109U;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = 1649;

	t32 = (x141&((x142/x143)+x144));

	if (t32 != 1649) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 1;
	static uint64_t x147 = UINT64_MAX;
	int8_t x148 = 1;
	uint64_t t33 = 1727LLU;

	t33 = (x145&((x146/x147)+x148));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = 11U;
	uint8_t x150 = 2U;
	int8_t x152 = INT8_MIN;

	t34 = (x149&((x150/x151)+x152));

	if (t34 != 10LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x154 = UINT64_MAX;
	static uint64_t x155 = 60LLU;
	static int64_t x156 = INT64_MAX;
	uint64_t t35 = 1173105150358080LLU;

	t35 = (x153&((x154/x155)+x156));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 3U;
	uint8_t x158 = 2U;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t36 = 132543830U;

	t36 = (x157&((x158/x159)+x160));

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = -22;
	uint64_t x164 = 108LLU;
	uint64_t t37 = 3347675431766570LLU;

	t37 = (x161&((x162/x163)+x164));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t38 = 23008374133328LLU;

	t38 = (x165&((x166/x167)+x168));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = INT8_MAX;
	uint64_t x171 = 1990LLU;
	volatile uint64_t t39 = 60912556036LLU;

	t39 = (x169&((x170/x171)+x172));

	if (t39 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x174 = 12U;
	int32_t x175 = -1;
	volatile uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t40 = 355484117LLU;

	t40 = (x173&((x174/x175)+x176));

	if (t40 != 1539LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = INT64_MIN;
	volatile int64_t x179 = INT64_MAX;
	uint64_t t41 = 1856401LLU;

	t41 = (x177&((x178/x179)+x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	volatile int64_t x182 = 2400255951LL;
	int64_t x183 = INT64_MIN;

	t42 = (x181&((x182/x183)+x184));

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x185 = 15443962LLU;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	uint64_t t43 = 4LLU;

	t43 = (x185&((x186/x187)+x188));

	if (t43 != 65536LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 3U;
	uint32_t x194 = 73U;
	static int16_t x195 = -1685;
	static int8_t x196 = INT8_MAX;
	volatile uint32_t t44 = 1415U;

	t44 = (x193&((x194/x195)+x196));

	if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 126;
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = -84LL;
	static int32_t x200 = -1;
	int64_t t45 = -1034LL;

	t45 = (x197&((x198/x199)+x200));

	if (t45 != 114LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x201 = 26U;
	uint32_t x202 = UINT32_MAX;
	uint16_t x203 = 17272U;
	int16_t x204 = -1;
	uint32_t t46 = 28946U;

	t46 = (x201&((x202/x203)+x204));

	if (t46 != 24U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x205 = 1U;
	int32_t x206 = INT32_MAX;
	uint32_t x207 = 5567830U;
	uint64_t x208 = 2534799870650247LLU;
	uint64_t t47 = 135936120538LLU;

	t47 = (x205&((x206/x207)+x208));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	static uint32_t x212 = 372U;
	static int64_t t48 = -16302423288087747LL;

	t48 = (x209&((x210/x211)+x212));

	if (t48 != 372LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t49 = -1LL;

	t49 = (x213&((x214/x215)+x216));

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	volatile int8_t x219 = 28;
	static volatile uint16_t x220 = 14355U;
	volatile int64_t t50 = -845265446266LL;

	t50 = (x217&((x218/x219)+x220));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	uint16_t x222 = 2U;
	static int16_t x223 = INT16_MIN;
	volatile uint32_t x224 = 184557U;
	int64_t t51 = -291272473822094187LL;

	t51 = (x221&((x222/x223)+x224));

	if (t51 != 184557LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	uint64_t t52 = 6677839136755LLU;

	t52 = (x225&((x226/x227)+x228));

	if (t52 != 1664LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x229 = 2U;
	volatile uint8_t x230 = 14U;
	volatile uint32_t x231 = 8U;
	static volatile int32_t x232 = INT32_MAX;
	volatile uint32_t t53 = 12U;

	t53 = (x229&((x230/x231)+x232));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = INT8_MIN;
	static uint8_t x234 = 0U;
	static volatile uint32_t x235 = UINT32_MAX;
	uint32_t t54 = 5906336U;

	t54 = (x233&((x234/x235)+x236));

	if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = 0;
	static int64_t x238 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = -216;
	uint64_t t55 = 119984582262162272LLU;

	t55 = (x237&((x238/x239)+x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = -9609038033856849LL;
	int8_t x242 = 2;
	volatile int64_t x243 = -1LL;
	uint32_t x244 = 671U;
	int64_t t56 = 239713190LL;

	t56 = (x241&((x242/x243)+x244));

	if (t56 != 653LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MAX;
	static volatile uint32_t x246 = 148U;
	uint64_t x247 = 133229LLU;
	int16_t x248 = INT16_MAX;

	t57 = (x245&((x246/x247)+x248));

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MAX;
	static int16_t x250 = -1;
	static int64_t x251 = 364296137640LL;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t58 = 818843LLU;

	t58 = (x249&((x250/x251)+x252));

	if (t58 != 32767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int32_t x255 = INT32_MIN;
	uint32_t x256 = 161376U;
	uint64_t t59 = 14142LLU;

	t59 = (x253&((x254/x255)+x256));

	if (t59 != 161376LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x257 = -1LL;
	int32_t x259 = INT32_MAX;
	static uint16_t x260 = UINT16_MAX;
	volatile int64_t t60 = 285305261LL;

	t60 = (x257&((x258/x259)+x260));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x261 = 49451U;
	int8_t x262 = -1;
	uint64_t x264 = 80190205049LLU;
	volatile uint64_t t61 = 40LLU;

	t61 = (x261&((x262/x263)+x264));

	if (t61 != 16425LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	static uint8_t x267 = 13U;
	uint64_t t62 = 813969360032LLU;

	t62 = (x265&((x266/x267)+x268));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = INT8_MIN;
	int64_t t63 = -1355LL;

	t63 = (x269&((x270/x271)+x272));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 57;
	static int16_t x275 = INT16_MIN;
	static int32_t x276 = 1;
	uint64_t t64 = 2234526690792851LLU;

	t64 = (x273&((x274/x275)+x276));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = -1;
	uint16_t x278 = 8U;
	uint8_t x279 = 2U;
	int16_t x280 = INT16_MIN;
	int32_t t65 = -1;

	t65 = (x277&((x278/x279)+x280));

	if (t65 != -32764) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int64_t x282 = 13026411LL;
	uint64_t x283 = UINT64_MAX;
	volatile int16_t x284 = -1;

	t66 = (x281&((x282/x283)+x284));

	if (t66 != 255LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -286888019280986369LL;
	volatile uint64_t t67 = 152220290467965LLU;

	t67 = (x285&((x286/x287)+x288));

	if (t67 != 18159856054428565246LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x290 = 7609;
	int16_t x291 = INT16_MIN;
	int64_t t68 = -118912519LL;

	t68 = (x289&((x290/x291)+x292));

	if (t68 != 246LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x294 = UINT32_MAX;
	int16_t x295 = 1;
	uint32_t t69 = 1894U;

	t69 = (x293&((x294/x295)+x296));

	if (t69 != 230U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 0;
	uint16_t x298 = 1U;
	int64_t x299 = 43747768063266LL;
	static volatile uint32_t x300 = 2U;
	volatile int64_t t70 = -28LL;

	t70 = (x297&((x298/x299)+x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = 0LL;
	uint64_t t71 = 398758LLU;

	t71 = (x301&((x302/x303)+x304));

	if (t71 != 7869016578893889LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x309 = UINT8_MAX;
	int64_t x310 = -1LL;
	uint32_t x311 = UINT32_MAX;
	static volatile int64_t t72 = -57777502LL;

	t72 = (x309&((x310/x311)+x312));

	if (t72 != 9LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 12362786695LLU;
	int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = -1LL;
	static uint64_t t73 = 216090761LLU;

	t73 = (x313&((x314/x315)+x316));

	if (t73 != 12362786695LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x318 = 56135382637409937LLU;
	volatile int16_t x319 = -1;
	int8_t x320 = INT8_MAX;

	t74 = (x317&((x318/x319)+x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = 109038;
	int64_t x323 = INT64_MIN;
	int64_t x324 = -77951794489686598LL;
	int64_t t75 = -16654919405LL;

	t75 = (x321&((x322/x323)+x324));

	if (t75 != 1152LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = INT64_MAX;
	volatile int64_t x327 = 9595141LL;
	int8_t x328 = -3;

	t76 = (x325&((x326/x327)+x328));

	if (t76 != 961254455440LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = 3;
	static volatile int8_t x331 = INT8_MIN;
	int64_t x332 = -211477593222LL;
	static int64_t t77 = -5929203555LL;

	t77 = (x329&((x330/x331)+x332));

	if (t77 != -212600881152LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x334 = INT8_MIN;
	static volatile int16_t x335 = 1;
	static volatile int32_t t78 = 6987975;

	t78 = (x333&((x334/x335)+x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x337 = 2704377439151956311LLU;
	int64_t x338 = -2504459LL;
	volatile uint32_t x339 = 634616072U;
	int64_t x340 = -1LL;
	uint64_t t79 = 1LLU;

	t79 = (x337&((x338/x339)+x340));

	if (t79 != 2704377439151956311LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x346 = -1;
	uint16_t x347 = 1U;
	uint64_t x348 = 26LLU;
	static volatile uint64_t t80 = 131878LLU;

	t80 = (x345&((x346/x347)+x348));

	if (t80 != 25LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x351 = -727417;
	volatile int64_t t81 = 42220634LL;

	t81 = (x349&((x350/x351)+x352));

	if (t81 != 12678743457792LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = UINT8_MAX;
	volatile uint64_t t82 = 484153726LLU;

	t82 = (x353&((x354/x355)+x356));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	static int8_t x359 = -1;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x357&((x358/x359)+x360));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = -221431855;
	static uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	int32_t t84 = -635283;

	t84 = (x361&((x362/x363)+x364));

	if (t84 != 1926051328) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -1;
	static int8_t x367 = 55;
	int64_t x368 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (x365&((x366/x367)+x368));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -30265168;
	int8_t x371 = -1;
	uint32_t t86 = 2U;

	t86 = (x369&((x370/x371)+x372));

	if (t86 != 30265169U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = -2;
	static int8_t x374 = 18;
	static int16_t x375 = 3;
	uint64_t x376 = 166126960000412279LLU;

	t87 = (x373&((x374/x375)+x376));

	if (t87 != 166126960000412284LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x378 = 1878U;
	static int32_t x379 = INT32_MAX;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t88 = -4333;

	t88 = (x377&((x378/x379)+x380));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	int16_t x383 = -15;
	static volatile int16_t x384 = INT16_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x381&((x382/x383)+x384));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int32_t x387 = -1;
	int16_t x388 = INT16_MAX;
	volatile int32_t t90 = -7141537;

	t90 = (x385&((x386/x387)+x388));

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	static volatile int32_t x391 = -1;
	static int32_t x392 = INT32_MIN;
	int32_t t91 = INT32_MIN;

	t91 = (x389&((x390/x391)+x392));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -1;
	volatile int32_t x395 = INT32_MIN;
	int8_t x396 = -34;

	t92 = (x393&((x394/x395)+x396));

	if (t92 != -34) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x397 = 26U;
	static int16_t x398 = 2;
	static uint32_t x399 = UINT32_MAX;
	volatile uint64_t x400 = 38133437LLU;
	uint64_t t93 = 20046626022137231LLU;

	t93 = (x397&((x398/x399)+x400));

	if (t93 != 24LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x402 = 46U;
	int64_t x403 = INT64_MAX;
	int16_t x404 = -1;

	t94 = (x401&((x402/x403)+x404));

	if (t94 != 340LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = 544188;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = 37850344;
	int32_t x408 = INT32_MIN;
	int64_t t95 = -108095249874LL;

	t95 = (x405&((x406/x407)+x408));

	if (t95 != 19844LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x409 = INT16_MAX;
	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = 266U;
	volatile int64_t t96 = 2LL;

	t96 = (x409&((x410/x411)+x412));

	if (t96 != 267LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x413 = 115U;
	int64_t x414 = -1LL;
	uint8_t x415 = 4U;
	volatile int64_t t97 = -3358LL;

	t97 = (x413&((x414/x415)+x416));

	if (t97 != 18LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x417 = 7U;
	int32_t x418 = -1;
	int8_t x419 = 1;
	int8_t x420 = INT8_MIN;
	int32_t t98 = -586193;

	t98 = (x417&((x418/x419)+x420));

	if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	static int16_t x422 = -4;
	static int64_t x423 = INT64_MAX;
	int64_t x424 = INT64_MAX;
	volatile int64_t t99 = -10509286252LL;

	t99 = (x421&((x422/x423)+x424));

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

