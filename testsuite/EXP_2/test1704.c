#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 17;
volatile int64_t t0 = 77940379578291395LL;
static volatile uint64_t t2 = 250081308LLU;
uint16_t x13 = UINT16_MAX;
static uint64_t x16 = UINT64_MAX;
int8_t x17 = -5;
int64_t x21 = 1LL;
volatile int64_t t5 = -416815239662LL;
static uint32_t x25 = 2932U;
volatile uint8_t x27 = 62U;
volatile uint32_t t6 = 24262904U;
uint16_t x32 = UINT16_MAX;
volatile uint64_t t7 = 23724LLU;
int32_t x39 = INT32_MAX;
int32_t x44 = INT32_MIN;
static volatile uint16_t x54 = UINT16_MAX;
volatile uint64_t t12 = 5559726094871472LLU;
uint64_t x58 = UINT64_MAX;
static uint64_t t13 = 13835120902618025LLU;
int8_t x67 = INT8_MAX;
uint16_t x77 = 2965U;
uint8_t x81 = 33U;
static uint32_t x88 = 294U;
uint32_t x94 = UINT32_MAX;
uint8_t x96 = 100U;
volatile uint32_t t20 = 23U;
uint32_t x97 = 31U;
uint64_t t22 = 11335612115803LLU;
static volatile int64_t x106 = -4207305918631LL;
volatile int64_t x107 = 338496LL;
static volatile int64_t t23 = -3878548LL;
volatile int64_t x122 = INT64_MIN;
int32_t x129 = 646897;
volatile int8_t x135 = INT8_MIN;
int64_t x136 = 13323987LL;
volatile int64_t t29 = 2184154LL;
int64_t t30 = -5473307LL;
uint8_t x159 = UINT8_MAX;
int8_t x163 = 40;
int32_t t36 = -1276607;
uint32_t x169 = UINT32_MAX;
uint32_t t37 = 984U;
int16_t x173 = INT16_MAX;
uint16_t x175 = UINT16_MAX;
int64_t x187 = INT64_MAX;
int64_t x194 = 553LL;
int32_t x198 = INT32_MAX;
int8_t x209 = INT8_MIN;
volatile int64_t x211 = -53014222LL;
int8_t x212 = 1;
static uint32_t x213 = UINT32_MAX;
static uint8_t x216 = 11U;
static volatile int64_t t48 = -16293555296528260LL;
uint16_t x230 = 2U;
static volatile int64_t t49 = -301LL;
static uint16_t x233 = UINT16_MAX;
uint8_t x237 = 21U;
int32_t x244 = INT32_MIN;
volatile int64_t t54 = -47493367LL;
volatile int64_t t58 = 0LL;
int64_t t60 = 1885LL;
int16_t x281 = -1;
static int8_t x287 = -39;
int8_t x288 = -1;
uint16_t x300 = 7850U;
int32_t x301 = -1;
volatile int64_t x303 = INT64_MIN;
int16_t x305 = INT16_MAX;
volatile uint32_t t66 = 42U;
int8_t x316 = INT8_MIN;
volatile int64_t t67 = 171LL;
uint32_t x318 = 43016U;
volatile uint32_t t68 = 33861862U;
uint32_t x330 = 1453554521U;
static volatile int32_t x332 = INT32_MIN;
int16_t x335 = -11824;
uint64_t x337 = 11836930LLU;
volatile uint16_t x338 = 468U;
volatile int16_t x339 = INT16_MAX;
static int64_t x342 = 8315168LL;
static uint32_t x350 = 19305090U;
static int16_t x352 = INT16_MIN;
int16_t x359 = INT16_MIN;
int16_t x362 = -6189;
uint8_t x364 = UINT8_MAX;
volatile uint32_t t76 = 15U;
uint64_t t77 = 186LLU;
int64_t t80 = 1LL;
int8_t x381 = 0;
static volatile int64_t x386 = INT64_MAX;
static int8_t x390 = INT8_MIN;
uint64_t x396 = 5443869580LLU;
static uint8_t x398 = 121U;
int8_t x400 = INT8_MIN;
uint16_t x403 = 54U;
uint8_t x405 = 65U;
int8_t x407 = INT8_MAX;
int32_t x415 = -38;
uint64_t x416 = 481033651430709LLU;
static int8_t x437 = INT8_MIN;
int64_t t90 = -66506503034841412LL;
int16_t x443 = INT16_MIN;
volatile int64_t x448 = -34434942006154638LL;
static int64_t t92 = -3620703881LL;
int8_t x449 = INT8_MIN;
int64_t x455 = 906182490944LL;
static int8_t x457 = -7;
int8_t x458 = INT8_MIN;
int8_t x460 = 6;
int64_t t95 = -780LL;
volatile int8_t x461 = INT8_MIN;
int16_t x462 = INT16_MIN;
int32_t x463 = INT32_MIN;
static int16_t x470 = INT16_MAX;
volatile uint64_t t98 = 1LLU;


void f0(void) {
	int16_t x1 = -1;
	volatile uint16_t x2 = UINT16_MAX;
	int64_t x3 = -1LL;

	t0 = ((x1-(x2&x3))+x4);

	if (t0 != -65519LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1393950LL;
	int32_t x6 = -122231905;
	volatile uint16_t x7 = 16682U;
	int8_t x8 = INT8_MAX;
	volatile int64_t t1 = -62LL;

	t1 = ((x5-(x6&x7))+x8);

	if (t1 != -1410473LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	static int16_t x10 = INT16_MAX;
	volatile uint64_t x11 = 4483751362328509LLU;
	static uint64_t x12 = 1048868254289018522LLU;

	t2 = ((x9-(x10&x11))+x12);

	if (t2 != 1048868252141504221LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 3957617240246728LLU;
	volatile int16_t x15 = -1;
	static uint64_t t3 = 50402325685LLU;

	t3 = ((x13-(x14&x15))+x16);

	if (t3 != 18442786456469370422LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	volatile int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = 3335466900LL;

	t4 = ((x17-(x18&x19))+x20);

	if (t4 != -2147483525LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static int16_t x23 = INT16_MAX;
	static int8_t x24 = INT8_MAX;

	t5 = ((x21-(x22&x23))+x24);

	if (t5 != -32512LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1500;
	volatile int8_t x28 = INT8_MIN;

	t6 = ((x25-(x26&x27))+x28);

	if (t6 != 2768U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	volatile uint64_t x30 = 186233851974266LLU;
	static int16_t x31 = 7;

	t7 = ((x29-(x30&x31))+x32);

	if (t7 != 65532LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 144U;
	static volatile int64_t x34 = 2913745533102LL;
	int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	int64_t t8 = 6743541109352264LL;

	t8 = ((x33-(x34&x35))+x36);

	if (t8 != 9223369123109242895LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int32_t x38 = 19000983;
	int8_t x40 = -1;
	volatile int32_t t9 = -31028026;

	t9 = ((x37-(x38&x39))+x40);

	if (t9 != -19000984) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 0U;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 31508U;
	uint64_t t10 = 6LLU;

	t10 = ((x41-(x42&x43))+x44);

	if (t10 != 18446744071562036460LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	int16_t x52 = -1;
	uint64_t t11 = 29309LLU;

	t11 = ((x49-(x50&x51))+x52);

	if (t11 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 227607006260683LLU;
	volatile int32_t x55 = 0;
	volatile int64_t x56 = INT64_MAX;

	t12 = ((x53-(x54&x55))+x56);

	if (t12 != 9223599643861036490LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int8_t x59 = -56;
	static uint64_t x60 = 12763LLU;

	t13 = ((x57-(x58&x59))+x60);

	if (t13 != 12691LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = 24;
	int64_t x62 = -175592951540LL;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 0U;
	volatile int64_t t14 = -986181566884LL;

	t14 = ((x61-(x62&x63))+x64);

	if (t14 != 175592964120LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	volatile int8_t x66 = INT8_MIN;
	int64_t x68 = -1LL;
	int64_t t15 = -363232399411LL;

	t15 = ((x65-(x66&x67))+x68);

	if (t15 != -32769LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 5136781233761415LLU;
	static uint64_t x79 = 3908LLU;
	int32_t x80 = INT32_MIN;
	uint64_t t16 = 11176869571971LLU;

	t16 = ((x77-(x78&x79))+x80);

	if (t16 != 18446744071562067857LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = 2053LLU;
	uint64_t t17 = 3LLU;

	t17 = ((x81-(x82&x83))+x84);

	if (t17 != 18446744073709488294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 413;
	int32_t x86 = 8171219;
	uint32_t x87 = UINT32_MAX;
	uint32_t t18 = 308397594U;

	t18 = ((x85-(x86&x87))+x88);

	if (t18 != 4286796784U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 1U;
	static uint32_t x90 = UINT32_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	static uint32_t x92 = 0U;
	static uint32_t t19 = 1U;

	t19 = ((x89-(x90&x91))+x92);

	if (t19 != 4294901762U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = 8;
	static uint8_t x95 = 12U;

	t20 = ((x93-(x94&x95))+x96);

	if (t20 != 96U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 296455087779074LLU;
	static int16_t x100 = -1;
	uint64_t t21 = 39383050LLU;

	t21 = ((x97-(x98&x99))+x100);

	if (t21 != 28LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -21;
	int64_t x102 = 0LL;
	uint64_t x103 = UINT64_MAX;
	static volatile int8_t x104 = 1;

	t22 = ((x101-(x102&x103))+x104);

	if (t22 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = INT16_MAX;
	volatile int8_t x108 = 0;

	t23 = ((x105-(x106&x107))+x108);

	if (t23 != -238145LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MAX;
	int8_t x111 = -53;
	uint16_t x112 = 1604U;
	int32_t t24 = -2997982;

	t24 = ((x109-(x110&x111))+x112);

	if (t24 != 1656) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x113 = 3U;
	volatile uint8_t x114 = UINT8_MAX;
	int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MIN;
	static volatile int32_t t25 = -8076;

	t25 = ((x113-(x114&x115))+x116);

	if (t25 != -125) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 667893U;
	uint8_t x118 = 104U;
	static int64_t x119 = INT64_MIN;
	uint8_t x120 = 0U;
	int64_t t26 = -2355LL;

	t26 = ((x117-(x118&x119))+x120);

	if (t26 != 667893LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = -1;
	int32_t x124 = INT32_MIN;
	int64_t t27 = -220446647LL;

	t27 = ((x121-(x122&x123))+x124);

	if (t27 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x130 = 893006241502717393LLU;
	static int64_t x131 = INT64_MAX;
	int16_t x132 = INT16_MIN;
	uint64_t t28 = 114637LLU;

	t28 = ((x129-(x130&x131))+x132);

	if (t28 != 17553737832207448352LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = INT8_MIN;
	uint16_t x134 = 3U;

	t29 = ((x133-(x134&x135))+x136);

	if (t29 != 13323859LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 968080302;
	int64_t x140 = -1LL;

	t30 = ((x137-(x138&x139))+x140);

	if (t30 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = 94U;
	uint32_t x142 = 0U;
	static volatile uint32_t x143 = UINT32_MAX;
	static uint16_t x144 = 1142U;
	static volatile uint32_t t31 = 1796014U;

	t31 = ((x141-(x142&x143))+x144);

	if (t31 != 1236U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = INT64_MAX;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MAX;
	int32_t x148 = -1;
	static volatile uint64_t t32 = 233172LLU;

	t32 = ((x145-(x146&x147))+x148);

	if (t32 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 236;
	static int32_t x150 = -32742889;
	uint8_t x151 = UINT8_MAX;
	int64_t x152 = INT64_MIN;
	volatile int64_t t33 = 8100228170638535LL;

	t33 = ((x149-(x150&x151))+x152);

	if (t33 != -9223372036854775595LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x157 = 1619819U;
	int8_t x158 = 8;
	int8_t x160 = 3;
	static uint32_t t34 = 6U;

	t34 = ((x157-(x158&x159))+x160);

	if (t34 != 1619814U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	volatile int16_t x164 = -1;
	int64_t t35 = -3109632244LL;

	t35 = ((x161-(x162&x163))+x164);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 1636U;
	int16_t x166 = INT16_MIN;
	static int16_t x167 = -1;
	static int16_t x168 = 59;

	t36 = ((x165-(x166&x167))+x168);

	if (t36 != 34463) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = INT32_MIN;
	static int8_t x171 = INT8_MIN;
	volatile int8_t x172 = 28;

	t37 = ((x169-(x170&x171))+x172);

	if (t37 != 2147483675U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x174 = 290;
	int16_t x176 = 11;
	static int32_t t38 = -1;

	t38 = ((x173-(x174&x175))+x176);

	if (t38 != 32488) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 11293;
	uint32_t x178 = 503U;
	static uint8_t x179 = 59U;
	int16_t x180 = 119;
	uint32_t t39 = 772U;

	t39 = ((x177-(x178&x179))+x180);

	if (t39 != 11361U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -2429;
	int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = -1;
	int32_t t40 = 470378355;

	t40 = ((x181-(x182&x183))+x184);

	if (t40 != -2430) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = INT16_MIN;
	static int64_t x186 = 11354639163672LL;
	uint16_t x188 = 22044U;
	volatile int64_t t41 = 50054LL;

	t41 = ((x185-(x186&x187))+x188);

	if (t41 != -11354639174396LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 1307601U;
	int8_t x195 = 1;
	int8_t x196 = INT8_MIN;
	volatile int64_t t42 = 909568128LL;

	t42 = ((x193-(x194&x195))+x196);

	if (t42 != 1307472LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -437941278995LL;
	uint64_t x199 = 9634562LLU;
	volatile int16_t x200 = 1858;
	uint64_t t43 = 399696909766784LLU;

	t43 = ((x197-(x198&x199))+x200);

	if (t43 != 18446743635758639917LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 11U;
	uint32_t x202 = 1U;
	static uint8_t x203 = 1U;
	volatile uint8_t x204 = UINT8_MAX;
	static volatile uint32_t t44 = 983544U;

	t44 = ((x201-(x202&x203))+x204);

	if (t44 != 265U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = 0U;
	volatile uint64_t x206 = 8418399638056LLU;
	int64_t x207 = -1LL;
	static int64_t x208 = -1LL;
	volatile uint64_t t45 = 3024328194LLU;

	t45 = ((x205-(x206&x207))+x208);

	if (t45 != 18446735655309913559LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x210 = 961LLU;
	uint64_t t46 = 103042575LLU;

	t46 = ((x209-(x210&x211))+x212);

	if (t46 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MIN;
	uint8_t x215 = UINT8_MAX;
	uint32_t t47 = 95646454U;

	t47 = ((x213-(x214&x215))+x216);

	if (t47 != 4294967178U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x221 = -645559405LL;
	static int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MAX;
	int32_t x224 = 757765;

	t48 = ((x221-(x222&x223))+x224);

	if (t48 != -644801640LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;

	t49 = ((x229-(x230&x231))+x232);

	if (t49 != 4295032830LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x234 = 60613U;
	static int16_t x235 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;
	static volatile uint32_t t50 = 297U;

	t50 = ((x233-(x234&x235))+x236);

	if (t50 != 33022U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x238 = 99LLU;
	int32_t x239 = 4272751;
	int32_t x240 = 1;
	uint64_t t51 = 77421LLU;

	t51 = ((x237-(x238&x239))+x240);

	if (t51 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -23;
	int64_t x242 = -208341619092LL;
	static uint32_t x243 = 1228338561U;
	static volatile int64_t t52 = -34534028289LL;

	t52 = ((x241-(x242&x243))+x244);

	if (t52 != -3373671447LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = 1281U;
	static int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	static volatile int64_t t53 = -1112196308228LL;

	t53 = ((x245-(x246&x247))+x248);

	if (t53 != -31487LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 1U;
	int8_t x250 = INT8_MIN;
	static int64_t x251 = -19592178LL;
	int16_t x252 = INT16_MAX;

	t54 = ((x249-(x250&x251))+x252);

	if (t54 != 19624960LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = -1789;
	uint32_t x255 = 100801842U;
	static int64_t x256 = INT64_MIN;
	volatile uint64_t t55 = 318822349812500LLU;

	t55 = ((x253-(x254&x255))+x256);

	if (t55 != 9223372036753975037LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x257 = 1748U;
	static uint8_t x258 = 1U;
	uint8_t x259 = UINT8_MAX;
	volatile uint8_t x260 = 1U;
	int32_t t56 = -124;

	t56 = ((x257-(x258&x259))+x260);

	if (t56 != 1748) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MIN;
	static volatile int64_t x262 = 194636LL;
	int16_t x263 = INT16_MIN;
	volatile uint8_t x264 = 44U;
	volatile int64_t t57 = -110049963LL;

	t57 = ((x261-(x262&x263))+x264);

	if (t57 != -2147647444LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = 1207;
	int64_t x266 = 1918520708395663810LL;
	volatile int64_t x267 = -1LL;
	volatile int8_t x268 = 0;

	t58 = ((x265-(x266&x267))+x268);

	if (t58 != -1918520708395662603LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = -1LL;
	int16_t x274 = -1;
	int32_t x275 = INT32_MIN;
	static volatile int8_t x276 = INT8_MAX;
	static int64_t t59 = 649LL;

	t59 = ((x273-(x274&x275))+x276);

	if (t59 != 2147483774LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = 0U;
	uint8_t x278 = 76U;
	static uint8_t x279 = 1U;
	int64_t x280 = -1LL;

	t60 = ((x277-(x278&x279))+x280);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x282 = 6073;
	volatile int32_t x283 = INT32_MAX;
	volatile int8_t x284 = -1;
	static volatile int32_t t61 = 0;

	t61 = ((x281-(x282&x283))+x284);

	if (t61 != -6075) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -1LL;
	volatile int64_t x286 = INT64_MIN;
	volatile int64_t t62 = 2417804LL;

	t62 = ((x285-(x286&x287))+x288);

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = -81;
	static int16_t x294 = -1;
	int16_t x295 = 12086;
	volatile int16_t x296 = INT16_MAX;
	static volatile int32_t t63 = -30;

	t63 = ((x293-(x294&x295))+x296);

	if (t63 != 20600) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = -1LL;
	volatile int32_t x299 = -631838;
	volatile int64_t t64 = 16039424270224838LL;

	t64 = ((x297-(x298&x299))+x300);

	if (t64 != 2148123335LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x302 = 66;
	static volatile int32_t x304 = INT32_MAX;
	volatile int64_t t65 = 680339925258304LL;

	t65 = ((x301-(x302&x303))+x304);

	if (t65 != 2147483646LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x306 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	static uint16_t x308 = UINT16_MAX;

	t66 = ((x305-(x306&x307))+x308);

	if (t66 != 98430U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = 358;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MAX;

	t67 = ((x313-(x314&x315))+x316);

	if (t67 != 230LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	uint16_t x319 = 3118U;
	uint16_t x320 = UINT16_MAX;

	t68 = ((x317-(x318&x319))+x320);

	if (t68 != 63606U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 3U;
	int32_t x322 = -110;
	static volatile int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t69 = -1871940835780LL;

	t69 = ((x321-(x322&x323))+x324);

	if (t69 != -9223372036854743037LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = INT64_MAX;
	int64_t x331 = INT64_MIN;
	volatile int64_t t70 = 7LL;

	t70 = ((x329-(x330&x331))+x332);

	if (t70 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -1;
	static uint64_t x334 = 36741846628673LLU;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t71 = 240636LLU;

	t71 = ((x333-(x334&x335))+x336);

	if (t71 != 18446707334010416830LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x340 = 53204U;
	static uint64_t t72 = 32384LLU;

	t72 = ((x337-(x338&x339))+x340);

	if (t72 != 11889666LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = INT32_MIN;
	int32_t x343 = -179;
	int32_t x344 = -1;
	int64_t t73 = 122497019385941LL;

	t73 = ((x341-(x342&x343))+x344);

	if (t73 != -2155798785LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x349 = 0;
	uint16_t x351 = 3U;
	volatile uint32_t t74 = 9U;

	t74 = ((x349-(x350&x351))+x352);

	if (t74 != 4294934526U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x357 = 58024361406045LL;
	static int8_t x358 = -1;
	volatile int32_t x360 = -1;
	static int64_t t75 = 453LL;

	t75 = ((x357-(x358&x359))+x360);

	if (t75 != 58024361438812LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x361 = UINT32_MAX;
	volatile int8_t x363 = 17;

	t76 = ((x361-(x362&x363))+x364);

	if (t76 != 237U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MAX;
	static int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;

	t77 = ((x365-(x366&x367))+x368);

	if (t77 != 126LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = 13;
	int8_t x370 = -28;
	uint64_t x371 = 9891LLU;
	volatile int16_t x372 = INT16_MIN;
	uint64_t t78 = 59737271254145LLU;

	t78 = ((x369-(x370&x371))+x372);

	if (t78 != 18446744073709508973LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 113U;
	int16_t x374 = INT16_MAX;
	static int8_t x375 = INT8_MIN;
	volatile int16_t x376 = -1;
	volatile uint32_t t79 = 181020U;

	t79 = ((x373-(x374&x375))+x376);

	if (t79 != 4294934768U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -1;
	int64_t x378 = INT64_MIN;
	static volatile int16_t x379 = -1071;
	volatile int8_t x380 = -34;

	t80 = ((x377-(x378&x379))+x380);

	if (t80 != 9223372036854775773LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = 77860042LL;
	int32_t x384 = -1;
	volatile int64_t t81 = -259LL;

	t81 = ((x381-(x382&x383))+x384);

	if (t81 != -77856769LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint64_t x388 = 1487779003LLU;
	volatile uint64_t t82 = 106466061156223LLU;

	t82 = ((x385-(x386&x387))+x388);

	if (t82 != 9223372038342587579LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x389 = INT8_MIN;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x389-(x390&x391))+x392);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MIN;
	volatile int32_t x395 = -1;
	uint64_t t84 = 5867830905153132LLU;

	t84 = ((x393-(x394&x395))+x396);

	if (t84 != 9223372042298645387LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x397 = -3;
	uint16_t x399 = 42U;
	int32_t t85 = -26792;

	t85 = ((x397-(x398&x399))+x400);

	if (t85 != -171) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	static uint8_t x404 = 1U;
	uint64_t t86 = 25514641238818LLU;

	t86 = ((x401-(x402&x403))+x404);

	if (t86 != 18446744073709518795LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x406 = INT32_MIN;
	int16_t x408 = INT16_MIN;
	static int32_t t87 = 4397994;

	t87 = ((x405-(x406&x407))+x408);

	if (t87 != -32703) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x413 = 11U;
	volatile int16_t x414 = -1;
	uint64_t t88 = 38LLU;

	t88 = ((x413-(x414&x415))+x416);

	if (t88 != 481033651430758LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x417 = UINT8_MAX;
	int32_t x418 = INT32_MIN;
	int64_t x419 = INT64_MAX;
	static volatile int16_t x420 = INT16_MIN;
	volatile int64_t t89 = 13627503135LL;

	t89 = ((x417-(x418&x419))+x420);

	if (t89 != -9223372034707324673LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x438 = INT8_MIN;
	int64_t x439 = INT64_MIN;
	volatile int32_t x440 = INT32_MIN;

	t90 = ((x437-(x438&x439))+x440);

	if (t90 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x441 = 6;
	uint8_t x442 = UINT8_MAX;
	static uint16_t x444 = 11688U;
	int32_t t91 = 789718761;

	t91 = ((x441-(x442&x443))+x444);

	if (t91 != 11694) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x445 = 7401U;
	uint8_t x446 = 61U;
	static uint32_t x447 = UINT32_MAX;

	t92 = ((x445-(x446&x447))+x448);

	if (t92 != -34434942006147298LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x450 = INT64_MIN;
	volatile int16_t x451 = 2;
	uint64_t x452 = 30772270LLU;
	static uint64_t t93 = 39529734LLU;

	t93 = ((x449-(x450&x451))+x452);

	if (t93 != 30772142LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x453 = 5;
	int64_t x454 = INT64_MAX;
	static int64_t x456 = -172133840976309LL;
	volatile int64_t t94 = 28684443715LL;

	t94 = ((x453-(x454&x455))+x456);

	if (t94 != -173040023467248LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x459 = -14014262140LL;

	t95 = ((x457-(x458&x459))+x460);

	if (t95 != 14014262143LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x464 = -42;
	volatile int32_t t96 = 6530;

	t96 = ((x461-(x462&x463))+x464);

	if (t96 != 2147483478) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = -1LL;
	int32_t x466 = INT32_MAX;
	uint64_t x467 = 17812696934LLU;
	static int32_t x468 = INT32_MAX;
	volatile uint64_t t97 = 1294421726LLU;

	t97 = ((x465-(x466&x467))+x468);

	if (t97 != 1514655896LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x469 = 1U;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = 939044549123LLU;

	t98 = ((x469-(x470&x471))+x472);

	if (t98 != 939044516484LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x477 = -1LL;
	int16_t x478 = INT16_MIN;
	static uint64_t x479 = UINT64_MAX;
	int64_t x480 = -1LL;
	uint64_t t99 = 2LLU;

	t99 = ((x477-(x478&x479))+x480);

	if (t99 != 32766LLU) { NG(); } else { ; }
	
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

