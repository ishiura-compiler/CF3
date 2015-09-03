#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
int16_t x6 = INT16_MIN;
int8_t x9 = INT8_MIN;
int32_t t2 = 175979;
int64_t t3 = 166712643276685LL;
static int32_t x17 = -39379181;
int16_t x23 = INT16_MIN;
static volatile int32_t t6 = -14731;
int8_t x35 = 7;
volatile int32_t t8 = -31;
uint32_t x50 = 58964884U;
uint32_t x51 = 71555U;
int8_t x55 = INT8_MIN;
static int16_t x58 = INT16_MAX;
volatile int32_t t14 = 301654142;
uint16_t x65 = 3U;
uint64_t x70 = 142863078283980058LLU;
volatile int64_t x74 = INT64_MIN;
uint8_t x75 = 10U;
volatile uint64_t x76 = UINT64_MAX;
static int8_t x77 = -1;
int64_t x80 = 552442669753740272LL;
volatile uint64_t x81 = 499LLU;
uint64_t x96 = 410930671LLU;
static int32_t t24 = 41907;
int32_t x104 = INT32_MAX;
static int64_t x105 = INT64_MAX;
uint16_t x110 = 891U;
static uint16_t x116 = 2U;
int32_t x117 = -29;
static int64_t t30 = -79205267694132872LL;
volatile int64_t x125 = -1LL;
int32_t t31 = 1616;
volatile uint32_t x132 = UINT32_MAX;
static volatile uint32_t t32 = 168122U;
int32_t x136 = 14943066;
static volatile int32_t t33 = 18;
static int64_t x146 = INT64_MIN;
volatile int32_t x148 = INT32_MAX;
static int32_t t36 = -27;
static volatile int32_t x150 = INT32_MIN;
volatile int16_t x151 = INT16_MAX;
int16_t x155 = 13061;
int32_t t38 = 249854;
int32_t x161 = INT32_MIN;
uint32_t x163 = 479401729U;
static volatile int64_t x164 = INT64_MIN;
static uint8_t x165 = 50U;
static uint64_t x166 = 1149679765247935LLU;
volatile int16_t x168 = 0;
int32_t t44 = 0;
uint16_t x187 = UINT16_MAX;
int16_t x190 = -1;
volatile int32_t t47 = -637233434;
int16_t x193 = -11;
uint8_t x203 = 34U;
int32_t t50 = -216;
int32_t x215 = -1;
volatile int64_t t53 = -1641234LL;
int8_t x223 = -1;
int32_t t55 = -32738977;
uint32_t x226 = 2228U;
volatile uint32_t x227 = 3476323U;
uint16_t x232 = 2U;
volatile uint8_t x241 = 3U;
int8_t x253 = -1;
int16_t x262 = INT16_MIN;
static uint64_t t66 = 10232995LLU;
static int32_t x269 = 50288;
int32_t x283 = INT32_MAX;
volatile uint16_t x285 = UINT16_MAX;
uint32_t x287 = UINT32_MAX;
static volatile int64_t x288 = -1LL;
int32_t x296 = -1;
int32_t t74 = 0;
int64_t x305 = -1LL;
uint64_t x306 = UINT64_MAX;
uint16_t x307 = 1491U;
int8_t x313 = INT8_MIN;
int32_t x315 = INT32_MIN;
int64_t x320 = 97LL;
static int16_t x322 = 15;
uint16_t x323 = 5947U;
int32_t x324 = INT32_MIN;
volatile int32_t x330 = -54184597;
uint32_t x331 = 372952628U;
static uint16_t x337 = UINT16_MAX;
int32_t t84 = 247679;
static int32_t x341 = INT32_MIN;
int8_t x343 = 3;
int32_t x350 = INT32_MAX;
int32_t x351 = INT32_MAX;
volatile int16_t x367 = INT16_MIN;
int64_t x368 = -879879702173LL;
static volatile int64_t t91 = -44021LL;
int64_t x370 = INT64_MIN;
int32_t t92 = -20468390;
int8_t x374 = INT8_MIN;
uint32_t x376 = 16411399U;
int64_t x388 = INT64_MIN;
int16_t x389 = -1;
int64_t x390 = -37497455150705LL;
uint16_t x397 = 51U;
static uint16_t x399 = 37U;


void f0(void) {
	static int16_t x1 = -6203;
	uint32_t x2 = UINT32_MAX;
	uint64_t x3 = 11LLU;
	uint64_t t0 = 67713928158LLU;

	t0 = (((x1==x2)==x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x7 = 1136;
	static int16_t x8 = -1386;
	int32_t t1 = -3777;

	t1 = (((x5==x6)==x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	int32_t x11 = -2119337;
	volatile int32_t x12 = INT32_MAX;

	t2 = (((x9==x10)==x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int8_t x15 = -1;
	int64_t x16 = -1LL;

	t3 = (((x13==x14)==x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int8_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -13852562;

	t4 = (((x17==x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int8_t x22 = -1;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = -55;

	t5 = (((x21==x22)==x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static volatile int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	int32_t x28 = INT32_MIN;

	t6 = (((x25==x26)==x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MIN;
	int32_t x31 = -382688;
	int64_t x32 = -1LL;
	int64_t t7 = -8684739323203786LL;

	t7 = (((x29==x30)==x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	int32_t x34 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;

	t8 = (((x33==x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = -14756449LL;

	t9 = (((x37==x38)==x39)*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = -1;
	uint8_t x44 = 3U;
	int32_t t10 = -30851939;

	t10 = (((x41==x42)==x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = 52LL;
	static int64_t x47 = -1LL;
	volatile int64_t x48 = -1LL;
	int64_t t11 = 30738033075325835LL;

	t11 = (((x45==x46)==x47)*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 19U;
	uint8_t x52 = 0U;
	static volatile int32_t t12 = 1294;

	t12 = (((x49==x50)==x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 1847;
	int32_t x54 = -1;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -6015988;

	t13 = (((x53==x54)==x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 55607763U;
	static int16_t x59 = INT16_MAX;
	int8_t x60 = 1;

	t14 = (((x57==x58)==x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	volatile uint8_t x63 = 1U;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -14;

	t15 = (((x61==x62)==x63)*x64);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 7802U;
	int64_t x67 = 0LL;
	static int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x65==x66)==x67)*x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 237;

	t17 = (((x69==x70)==x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	uint64_t t18 = 11864776LLU;

	t18 = (((x73==x74)==x75)*x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MAX;
	volatile int64_t t19 = -6885107451262353LL;

	t19 = (((x77==x78)==x79)*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 9079481LL;
	volatile int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t20 = -6058789356726345LL;

	t20 = (((x81==x82)==x83)*x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	int64_t x86 = -1LL;
	uint16_t x87 = 5U;
	uint64_t x88 = 2974966965210LLU;
	volatile uint64_t t21 = 292291273177449LLU;

	t21 = (((x85==x86)==x87)*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile int8_t x90 = INT8_MIN;
	static int32_t x91 = INT32_MIN;
	static volatile uint8_t x92 = 1U;
	static int32_t t22 = -64761673;

	t22 = (((x89==x90)==x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 17U;
	volatile uint16_t x94 = 7U;
	static int8_t x95 = INT8_MIN;
	static volatile uint64_t t23 = 304297207254LLU;

	t23 = (((x93==x94)==x95)*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 184U;
	int16_t x99 = 1914;
	static volatile int32_t x100 = -97901;

	t24 = (((x97==x98)==x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 128237065LLU;
	volatile int32_t x102 = INT32_MAX;
	static int64_t x103 = INT64_MAX;
	volatile int32_t t25 = -8;

	t25 = (((x101==x102)==x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x106 = 0LL;
	int64_t x107 = 474879707LL;
	static int32_t x108 = -1;
	int32_t t26 = -28952;

	t26 = (((x105==x106)==x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 30U;
	volatile int16_t x111 = -12;
	volatile uint32_t x112 = 487U;
	volatile uint32_t t27 = 7112U;

	t27 = (((x109==x110)==x111)*x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -5;
	volatile int16_t x114 = -1;
	static volatile int32_t x115 = INT32_MAX;
	volatile int32_t t28 = 1471;

	t28 = (((x113==x114)==x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x118 = 11U;
	static int64_t x119 = 33387435LL;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -6584756791270529LL;

	t29 = (((x117==x118)==x119)*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 66762950426132057LL;
	int16_t x122 = 17;
	uint32_t x123 = 1U;
	int64_t x124 = -1LL;

	t30 = (((x121==x122)==x123)*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = -1;
	volatile uint64_t x127 = UINT64_MAX;
	int8_t x128 = -1;

	t31 = (((x125==x126)==x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;

	t32 = (((x129==x130)==x131)*x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 170;
	volatile int32_t x134 = -1;
	int8_t x135 = INT8_MAX;

	t33 = (((x133==x134)==x135)*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	static volatile int64_t x138 = INT64_MAX;
	static int64_t x139 = INT64_MIN;
	static volatile int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -217765LL;

	t34 = (((x137==x138)==x139)*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = UINT32_MAX;
	int64_t x142 = 0LL;
	int32_t x143 = -1;
	static int32_t x144 = INT32_MIN;
	int32_t t35 = -536;

	t35 = (((x141==x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MAX;
	uint16_t x147 = UINT16_MAX;

	t36 = (((x145==x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	uint32_t x152 = UINT32_MAX;
	uint32_t t37 = 1666U;

	t37 = (((x149==x150)==x151)*x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 2102;
	uint64_t x154 = UINT64_MAX;
	volatile int8_t x156 = 24;

	t38 = (((x153==x154)==x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 6U;
	static uint8_t x158 = UINT8_MAX;
	int16_t x159 = -193;
	int8_t x160 = 1;
	int32_t t39 = -1374;

	t39 = (((x157==x158)==x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1;
	volatile int64_t t40 = -128014LL;

	t40 = (((x161==x162)==x163)*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x167 = UINT16_MAX;
	int32_t t41 = -556;

	t41 = (((x165==x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 7581746658637652LLU;
	uint8_t x170 = 25U;
	int16_t x171 = 15248;
	int8_t x172 = -1;
	int32_t t42 = -25827;

	t42 = (((x169==x170)==x171)*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 5;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 311924;

	t43 = (((x173==x174)==x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 42U;
	volatile uint16_t x180 = 29U;

	t44 = (((x177==x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	volatile int8_t x182 = INT8_MAX;
	int16_t x183 = 1;
	static int64_t x184 = INT64_MIN;
	volatile int64_t t45 = -6244658775285LL;

	t45 = (((x181==x182)==x183)*x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 0;
	volatile int16_t x186 = INT16_MIN;
	int8_t x188 = -1;
	int32_t t46 = 109917;

	t46 = (((x185==x186)==x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = 87U;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;

	t47 = (((x189==x190)==x191)*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x194 = 1;
	uint32_t x195 = UINT32_MAX;
	volatile int16_t x196 = INT16_MIN;
	int32_t t48 = 3;

	t48 = (((x193==x194)==x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 998U;
	int64_t x198 = 4815LL;
	static int32_t x199 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t49 = 2765249616676483LLU;

	t49 = (((x197==x198)==x199)*x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int8_t x202 = 43;
	int32_t x204 = INT32_MAX;

	t50 = (((x201==x202)==x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = -1;
	int16_t x207 = 783;
	volatile uint32_t x208 = 1828U;
	uint32_t t51 = 28567652U;

	t51 = (((x205==x206)==x207)*x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	static int8_t x210 = 2;
	int64_t x211 = INT64_MAX;
	static uint16_t x212 = 6U;
	static int32_t t52 = 99601266;

	t52 = (((x209==x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 186486U;
	int64_t x216 = INT64_MIN;

	t53 = (((x213==x214)==x215)*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -810606664974665LL;
	uint32_t x218 = 26033963U;
	volatile uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 21U;
	int32_t t54 = -50499180;

	t54 = (((x217==x218)==x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 2048686LLU;
	int32_t x224 = -1;

	t55 = (((x221==x222)==x223)*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	static int16_t x228 = INT16_MAX;
	int32_t t56 = 267685;

	t56 = (((x225==x226)==x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 18;
	int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MAX;
	volatile int32_t t57 = -136725;

	t57 = (((x229==x230)==x231)*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = 6107;
	static int64_t x235 = INT64_MIN;
	volatile uint8_t x236 = 2U;
	static int32_t t58 = 56;

	t58 = (((x233==x234)==x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = 85;
	int32_t t59 = 4110;

	t59 = (((x237==x238)==x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x242 = 714LLU;
	static volatile int32_t x243 = -75090666;
	static uint8_t x244 = 7U;
	volatile int32_t t60 = 12;

	t60 = (((x241==x242)==x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	volatile uint16_t x246 = 0U;
	uint8_t x247 = 62U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = -148583547LL;

	t61 = (((x245==x246)==x247)*x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	uint32_t x252 = 20910U;
	volatile uint32_t t62 = 534051567U;

	t62 = (((x249==x250)==x251)*x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = 7677;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t x256 = 13787;
	volatile int32_t t63 = 2;

	t63 = (((x253==x254)==x255)*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	volatile uint64_t x259 = 13972LLU;
	uint16_t x260 = 27U;
	int32_t t64 = 188;

	t64 = (((x257==x258)==x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -15;
	int64_t x263 = INT64_MIN;
	static int32_t x264 = INT32_MIN;
	int32_t t65 = -122;

	t65 = (((x261==x262)==x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	uint64_t x267 = 3774077086448069109LLU;
	volatile uint64_t x268 = 478786751773LLU;

	t66 = (((x265==x266)==x267)*x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	int32_t x272 = -8201;
	volatile int32_t t67 = 21166155;

	t67 = (((x269==x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 6U;
	int64_t x274 = INT64_MIN;
	uint8_t x275 = 1U;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t68 = 122235790066LLU;

	t68 = (((x273==x274)==x275)*x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile int64_t x278 = -3723611LL;
	int16_t x279 = -1;
	int32_t x280 = 0;
	static int32_t t69 = 2;

	t69 = (((x277==x278)==x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 94534328;
	int32_t x282 = -1;
	volatile int16_t x284 = INT16_MAX;
	int32_t t70 = 8113;

	t70 = (((x281==x282)==x283)*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MAX;
	volatile int64_t t71 = -41010023LL;

	t71 = (((x285==x286)==x287)*x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = 3988;
	uint16_t x290 = 204U;
	volatile int32_t x291 = 117;
	int16_t x292 = -2743;
	int32_t t72 = -473726135;

	t72 = (((x289==x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 17154071;
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	int32_t t73 = 1;

	t73 = (((x293==x294)==x295)*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -787891949;
	int64_t x298 = -1080999101205LL;
	int16_t x299 = -1;
	int32_t x300 = INT32_MAX;

	t74 = (((x297==x298)==x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 628665214U;
	static int32_t x302 = INT32_MAX;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = INT32_MAX;
	volatile int32_t t75 = 24990414;

	t75 = (((x301==x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x308 = UINT32_MAX;
	uint32_t t76 = 10U;

	t76 = (((x305==x306)==x307)*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 49859790U;
	int8_t x310 = INT8_MIN;
	int8_t x311 = 2;
	static uint8_t x312 = UINT8_MAX;
	int32_t t77 = 3995;

	t77 = (((x309==x310)==x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 56LLU;
	static int8_t x316 = INT8_MIN;
	int32_t t78 = 1;

	t78 = (((x313==x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -4930126002LL;
	int8_t x318 = -1;
	volatile int8_t x319 = -34;
	int64_t t79 = 1424818966455368133LL;

	t79 = (((x317==x318)==x319)*x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 1;
	volatile int32_t t80 = 627;

	t80 = (((x321==x322)==x323)*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x325 = -241;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = 613211774U;
	volatile uint32_t t81 = 1880850033U;

	t81 = (((x325==x326)==x327)*x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = 729168256683200LL;

	t82 = (((x329==x330)==x331)*x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	static int64_t t83 = 106754411546881LL;

	t83 = (((x333==x334)==x335)*x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = 4;
	int64_t x339 = INT64_MIN;
	static volatile int32_t x340 = -237;

	t84 = (((x337==x338)==x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -418;
	int64_t x344 = -1LL;
	int64_t t85 = -399LL;

	t85 = (((x341==x342)==x343)*x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 43782949212645071LLU;
	int64_t x346 = INT64_MAX;
	uint16_t x347 = 372U;
	volatile int16_t x348 = -1;
	volatile int32_t t86 = -6971;

	t86 = (((x345==x346)==x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 21U;
	uint64_t x352 = 24LLU;
	volatile uint64_t t87 = 7269LLU;

	t87 = (((x349==x350)==x351)*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -3;
	int8_t x354 = INT8_MIN;
	int16_t x355 = 402;
	static int32_t x356 = -1;
	volatile int32_t t88 = 189276065;

	t88 = (((x353==x354)==x355)*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 12;
	volatile int64_t x358 = INT64_MIN;
	volatile int64_t x359 = INT64_MIN;
	volatile int16_t x360 = 0;
	int32_t t89 = -104403;

	t89 = (((x357==x358)==x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	int16_t x364 = 4925;
	int32_t t90 = 180818600;

	t90 = (((x361==x362)==x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MIN;
	volatile int16_t x366 = -12109;

	t91 = (((x365==x366)==x367)*x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 7U;
	volatile int64_t x371 = INT64_MAX;
	int16_t x372 = -1;

	t92 = (((x369==x370)==x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	uint8_t x375 = 0U;
	volatile uint32_t t93 = 76505707U;

	t93 = (((x373==x374)==x375)*x376);

	if (t93 != 16411399U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	int64_t x379 = 0LL;
	volatile int64_t x380 = INT64_MIN;
	static int64_t t94 = INT64_MIN;

	t94 = (((x377==x378)==x379)*x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	uint16_t x382 = 2917U;
	static volatile uint32_t x383 = UINT32_MAX;
	volatile int32_t x384 = INT32_MAX;
	static volatile int32_t t95 = 2015002;

	t95 = (((x381==x382)==x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 16U;
	uint32_t x386 = 123498U;
	volatile int32_t x387 = INT32_MIN;
	int64_t t96 = 31795734099608LL;

	t96 = (((x385==x386)==x387)*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 6876U;
	static volatile int32_t t97 = 726436862;

	t97 = (((x389==x390)==x391)*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int64_t x394 = -6923475LL;
	uint8_t x395 = 5U;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -90;

	t98 = (((x393==x394)==x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	int32_t x400 = 56;
	volatile int32_t t99 = 6;

	t99 = (((x397==x398)==x399)*x400);

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

