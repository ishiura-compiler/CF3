#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
static uint8_t x10 = 64U;
uint8_t x17 = 3U;
static int32_t x24 = -29408;
int16_t x30 = INT16_MIN;
int16_t x33 = -13944;
int8_t x40 = INT8_MIN;
int8_t x43 = INT8_MAX;
static int16_t x46 = 67;
volatile int16_t x48 = -1;
int16_t x59 = -1;
uint16_t x66 = 15U;
int32_t x76 = INT32_MAX;
volatile uint16_t x77 = UINT16_MAX;
int64_t x83 = 22757829LL;
int64_t t19 = -36LL;
static volatile int8_t x87 = INT8_MIN;
volatile uint32_t t20 = 678231504U;
int8_t x93 = -1;
int64_t x94 = INT64_MIN;
int16_t x96 = -1;
int32_t x98 = INT32_MIN;
volatile int64_t t23 = 9837632LL;
volatile int8_t x103 = INT8_MIN;
volatile int16_t x105 = INT16_MIN;
static int64_t x106 = INT64_MAX;
int16_t x108 = -1;
int16_t x109 = -1;
static int16_t x112 = 28;
static uint64_t x115 = 26293476447612402LLU;
uint16_t x122 = 29336U;
static int64_t x127 = -974777LL;
int8_t x130 = INT8_MIN;
static int8_t x150 = -62;
uint16_t x153 = UINT16_MAX;
static uint32_t x154 = 1U;
volatile int64_t x161 = -6711LL;
int16_t x162 = 5423;
int8_t x166 = -1;
volatile uint64_t x169 = 839150LLU;
uint32_t x178 = UINT32_MAX;
uint64_t t43 = 1LLU;
uint32_t x192 = 1U;
uint64_t x193 = UINT64_MAX;
uint32_t x196 = UINT32_MAX;
uint8_t x201 = UINT8_MAX;
volatile int64_t x204 = -277451273780437031LL;
static volatile int32_t x215 = -1;
volatile int16_t x227 = -3274;
uint64_t x229 = 35713933552439LLU;
int64_t x233 = INT64_MAX;
static int64_t t54 = -742048430893867119LL;
uint32_t x237 = UINT32_MAX;
int32_t x249 = INT32_MIN;
uint64_t x250 = 2095LLU;
volatile uint64_t t58 = 2573892580650LLU;
uint8_t x255 = UINT8_MAX;
static int16_t x257 = INT16_MIN;
uint64_t x258 = 1769LLU;
volatile int64_t x271 = INT64_MIN;
uint16_t x274 = UINT16_MAX;
uint32_t x275 = 848469096U;
int32_t x280 = 4864120;
int8_t x288 = INT8_MAX;
uint16_t x289 = 24549U;
uint8_t x291 = UINT8_MAX;
static uint32_t x292 = 3058U;
uint16_t x297 = UINT16_MAX;
uint8_t x307 = 0U;
volatile int64_t x308 = -1LL;
uint32_t x312 = 41U;
int32_t x321 = INT32_MAX;
int8_t x323 = -1;
int32_t x324 = -1;
int32_t x336 = INT32_MIN;
int32_t x340 = INT32_MIN;
static uint64_t t79 = 2179788080611123LLU;
int16_t x341 = INT16_MIN;
uint64_t x347 = UINT64_MAX;
int64_t x351 = -12654831936173LL;
static uint32_t x361 = UINT32_MAX;
int32_t t88 = -14252280;
int64_t x378 = INT64_MIN;
uint64_t x382 = 1LLU;
volatile int16_t x386 = INT16_MAX;
uint64_t x387 = UINT64_MAX;
int8_t x388 = -1;
volatile uint32_t x390 = UINT32_MAX;
int8_t x393 = -1;
static uint32_t x395 = 0U;
static uint32_t x398 = 1484U;
static uint32_t x399 = 106U;
uint32_t t94 = 0U;
uint8_t x407 = 56U;
int32_t t96 = -7541416;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint8_t x2 = 12U;
	uint8_t x3 = 0U;
	uint8_t x4 = 0U;
	volatile int32_t t0 = 7;

	t0 = ((x1%x2)-(x3^x4));

	if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	static int16_t x7 = 1;
	int32_t t1 = -3417;

	t1 = ((x5%x6)-(x7^x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 0U;
	static volatile int32_t t2 = 19944;

	t2 = ((x9%x10)-(x11^x12));

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -1;
	volatile int16_t x15 = -162;
	int32_t x16 = INT32_MIN;
	static volatile int64_t t3 = 222973170LL;

	t3 = ((x13%x14)-(x15^x16));

	if (t3 != -2147483486LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x18 = 1160171LLU;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t4 = 6858510641367936136LLU;

	t4 = ((x17%x18)-(x19^x20));

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	int16_t x23 = 179;
	int32_t t5 = -14;

	t5 = ((x21%x22)-(x23^x24));

	if (t5 != 29293) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint16_t x26 = 1916U;
	int16_t x27 = INT16_MIN;
	volatile int8_t x28 = INT8_MAX;
	uint32_t t6 = 1373973U;

	t6 = ((x25%x26)-(x27^x28));

	if (t6 != 33024U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -3;
	static volatile int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -811;

	t7 = ((x29%x30)-(x31^x32));

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = 50928480051645LLU;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	volatile uint64_t t8 = 3LLU;

	t8 = ((x33%x34)-(x35^x36));

	if (t8 != 41169015821865LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MAX;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = -264587887;

	t9 = ((x37%x38)-(x39^x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 114LLU;
	int16_t x42 = 1;
	volatile uint16_t x44 = 0U;
	uint64_t t10 = 13LLU;

	t10 = ((x41%x42)-(x43^x44));

	if (t10 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int64_t x47 = 1LL;
	uint64_t t11 = 1869392910016577LLU;

	t11 = ((x45%x46)-(x47^x48));

	if (t11 != 18LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MAX;
	uint8_t x55 = 4U;
	int64_t x56 = -2862071628429852713LL;
	int64_t t12 = 1908707262LL;

	t12 = ((x53%x54)-(x55^x56));

	if (t12 != 2862071628429918252LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	volatile int8_t x60 = -3;
	volatile int32_t t13 = 1328;

	t13 = ((x57%x58)-(x59^x60));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -6047030809273481LL;
	int64_t x64 = INT64_MAX;
	volatile int64_t t14 = 5551LL;

	t14 = ((x61%x62)-(x63^x64));

	if (t14 != 9217325003898018680LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 8U;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 15277878LLU;
	volatile uint64_t t15 = 603832LLU;

	t15 = ((x65%x66)-(x67^x68));

	if (t15 != 18446744073694256959LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 17U;
	int16_t x70 = -1;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MAX;
	int64_t t16 = -221852283479333LL;

	t16 = ((x69%x70)-(x71^x72));

	if (t16 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MAX;
	static uint64_t x75 = 417846571LLU;
	volatile uint64_t t17 = 965363114LLU;

	t17 = ((x73%x74)-(x75^x76));

	if (t17 != 18446744071979914539LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x78 = -10478479LL;
	int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MIN;
	volatile int64_t t18 = 44032295487LL;

	t18 = ((x77%x78)-(x79^x80));

	if (t18 != -9223372036854710145LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = -7;
	static int64_t x84 = -104488575LL;

	t19 = ((x81%x82)-(x83^x84));

	if (t19 != 123805629LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = UINT32_MAX;
	int16_t x86 = -1;
	volatile int16_t x88 = -2;

	t20 = ((x85%x86)-(x87^x88));

	if (t20 != 4294967170U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -53;
	int32_t x90 = -1;
	int32_t x91 = 0;
	static uint32_t x92 = 12U;
	static volatile uint32_t t21 = 1U;

	t21 = ((x89%x90)-(x91^x92));

	if (t21 != 4294967284U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x95 = 133474455LLU;
	uint64_t t22 = 90137415494117107LLU;

	t22 = ((x93%x94)-(x95^x96));

	if (t22 != 133474455LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int16_t x99 = -510;
	int64_t x100 = -1LL;

	t23 = ((x97%x98)-(x99^x100));

	if (t23 != -637LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	int16_t x104 = 4;
	int64_t t24 = 10595026LL;

	t24 = ((x101%x102)-(x103^x104));

	if (t24 != 124LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x107 = INT8_MIN;
	int64_t t25 = 1LL;

	t25 = ((x105%x106)-(x107^x108));

	if (t25 != -32895LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x110 = 272940835541959LLU;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t t26 = 7138285516998371LLU;

	t26 = ((x109%x110)-(x111^x112));

	if (t26 != 37703606252373LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MIN;
	int64_t x114 = 8450785005LL;
	uint8_t x116 = 15U;
	volatile uint64_t t27 = 25LLU;

	t27 = ((x113%x114)-(x115^x116));

	if (t27 != 18420450589874613015LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = -1;
	uint32_t x120 = 912623U;
	static int64_t t28 = 1082LL;

	t28 = ((x117%x118)-(x119^x120));

	if (t28 != -4294054545LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int16_t x123 = 3688;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t29 = 1028727125596446LLU;

	t29 = ((x121%x122)-(x123^x124));

	if (t29 != 18446744071562083320LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 245841U;
	volatile uint8_t x126 = 1U;
	int64_t x128 = -1LL;
	static int64_t t30 = -1883795LL;

	t30 = ((x125%x126)-(x127^x128));

	if (t30 != -974776LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = -1;
	volatile uint64_t t31 = 554225445317586LLU;

	t31 = ((x129%x130)-(x131^x132));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MAX;
	static volatile int16_t x138 = -1;
	int32_t x139 = -1;
	int16_t x140 = 1;
	int32_t t32 = -834332;

	t32 = ((x137%x138)-(x139^x140));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 3752491U;
	volatile int8_t x142 = -23;
	static int16_t x143 = INT16_MAX;
	volatile uint64_t x144 = 970281LLU;
	static volatile uint64_t t33 = 254659859LLU;

	t33 = ((x141%x142)-(x143^x144));

	if (t33 != 2789461LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -170913;
	volatile int32_t x146 = 1748;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = 24U;
	static volatile int64_t t34 = -152699LL;

	t34 = ((x145%x146)-(x147^x148));

	if (t34 != 9223372036854774427LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 2755199U;
	static int8_t x151 = -1;
	int64_t x152 = 1822787630203LL;
	volatile int64_t t35 = 4113LL;

	t35 = ((x149%x150)-(x151^x152));

	if (t35 != 1822790385403LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x155 = INT64_MIN;
	uint64_t x156 = 88LLU;
	static volatile uint64_t t36 = 127LLU;

	t36 = ((x153%x154)-(x155^x156));

	if (t36 != 9223372036854775720LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x157 = INT32_MAX;
	volatile int32_t x158 = 6986640;
	static int8_t x159 = -1;
	uint32_t x160 = 7U;
	uint32_t t37 = 1335061702U;

	t37 = ((x157%x158)-(x159^x160));

	if (t37 != 2585175U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x163 = -1;
	int16_t x164 = 245;
	int64_t t38 = 11069840285441LL;

	t38 = ((x161%x162)-(x163^x164));

	if (t38 != -1042LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int32_t x167 = -1;
	int8_t x168 = INT8_MAX;
	int32_t t39 = -44;

	t39 = ((x165%x166)-(x167^x168));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = INT64_MIN;
	volatile int8_t x171 = 15;
	uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 13389970LLU;

	t40 = ((x169%x170)-(x171^x172));

	if (t40 != 839166LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 353U;
	int32_t x176 = INT32_MAX;
	int32_t t41 = 4198896;

	t41 = ((x173%x174)-(x175^x176));

	if (t41 != -2147483294) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 0U;
	int32_t x179 = INT32_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	uint32_t t42 = 1299715038U;

	t42 = ((x177%x178)-(x179^x180));

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 0U;
	int64_t x182 = 7660293041940966LL;
	static uint64_t x183 = 4LLU;
	int32_t x184 = 426554613;

	t43 = ((x181%x182)-(x183^x184));

	if (t43 != 18446744073282997007LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	int16_t x191 = INT16_MAX;
	volatile uint32_t t44 = 14572U;

	t44 = ((x189%x190)-(x191^x192));

	if (t44 != 4294934530U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x194 = INT64_MIN;
	volatile int8_t x195 = 0;
	uint64_t t45 = 292LLU;

	t45 = ((x193%x194)-(x195^x196));

	if (t45 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MAX;
	volatile int32_t x198 = INT32_MAX;
	static uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t46 = -4199;

	t46 = ((x197%x198)-(x199^x200));

	if (t46 != 2147483520) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x202 = INT16_MAX;
	int32_t x203 = -38957520;
	int64_t t47 = 6452LL;

	t47 = ((x201%x202)-(x203^x204));

	if (t47 != -277451273819377898LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	int8_t x206 = -23;
	static uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = ((x205%x206)-(x207^x208));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 18U;
	int8_t x210 = -26;
	static volatile int16_t x211 = INT16_MIN;
	int8_t x212 = -55;
	uint32_t t49 = 148332U;

	t49 = ((x209%x210)-(x211^x212));

	if (t49 != 4294934601U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile uint64_t t50 = 2851252LLU;

	t50 = ((x213%x214)-(x215^x216));

	if (t50 != 65551LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	volatile int64_t x223 = INT64_MAX;
	uint8_t x224 = 1U;
	volatile int64_t t51 = -25LL;

	t51 = ((x221%x222)-(x223^x224));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 0U;
	int64_t x226 = INT64_MIN;
	int64_t x228 = -25LL;
	int64_t t52 = -117063LL;

	t52 = ((x225%x226)-(x227^x228));

	if (t52 != -3281LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x230 = 10049U;
	volatile uint8_t x231 = 0U;
	uint8_t x232 = 0U;
	volatile uint64_t t53 = 400465193LLU;

	t53 = ((x229%x230)-(x231^x232));

	if (t53 != 8397LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x234 = 1517296;
	int32_t x235 = INT32_MIN;
	int16_t x236 = 323;

	t54 = ((x233%x234)-(x235^x236));

	if (t54 != 2148475004LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x238 = 28U;
	static int64_t x239 = -1LL;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t55 = 3690700363LLU;

	t55 = ((x237%x238)-(x239^x240));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = 13689760LL;
	int8_t x242 = INT8_MIN;
	static int16_t x243 = INT16_MAX;
	static int32_t x244 = INT32_MAX;
	volatile int64_t t56 = -4916LL;

	t56 = ((x241%x242)-(x243^x244));

	if (t56 != -2147450848LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	static int32_t x246 = -1;
	static volatile int32_t x247 = INT32_MIN;
	volatile int16_t x248 = 109;
	int32_t t57 = 27134;

	t57 = ((x245%x246)-(x247^x248));

	if (t57 != 2147483539) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x251 = 15372LL;
	int16_t x252 = INT16_MIN;

	t58 = ((x249%x250)-(x251^x252));

	if (t58 != 19354LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x253 = 258945317U;
	int32_t x254 = INT32_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	volatile uint32_t t59 = 30930826U;

	t59 = ((x253%x254)-(x255^x256));

	if (t59 != 258945573U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x259 = UINT32_MAX;
	volatile int8_t x260 = -1;
	volatile uint64_t t60 = 5563LLU;

	t60 = ((x257%x258)-(x259^x260));

	if (t60 != 432LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 4U;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -13141;
	uint64_t x264 = 6552145229023LLU;
	volatile uint64_t t61 = 19121826522LLU;

	t61 = ((x261%x262)-(x263^x264));

	if (t61 != 6552145217424LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x265 = 428649562928LLU;
	int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;
	static volatile uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t62 = 1989008286874279951LLU;

	t62 = ((x265%x266)-(x267^x268));

	if (t62 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MAX;
	volatile int32_t x272 = -90799630;
	volatile int64_t t63 = 8781LL;

	t63 = ((x269%x270)-(x271^x272));

	if (t63 != -9223372036763976180LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x276 = 8977683740597167161LLU;
	uint64_t t64 = 665452224703LLU;

	t64 = ((x273%x274)-(x275^x276));

	if (t64 != 9469060332802852783LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 95U;
	int16_t x278 = 5779;
	int8_t x279 = -1;
	static uint32_t t65 = 408989101U;

	t65 = ((x277%x278)-(x279^x280));

	if (t65 != 4864216U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 2701U;
	static uint64_t x282 = 30504323LLU;
	static int16_t x283 = INT16_MIN;
	static volatile int8_t x284 = INT8_MIN;
	volatile uint64_t t66 = 32406LLU;

	t66 = ((x281%x282)-(x283^x284));

	if (t66 != 18446744073709521677LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	int64_t t67 = 11025074LL;

	t67 = ((x285%x286)-(x287^x288));

	if (t67 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x290 = 13U;
	uint32_t t68 = 249956292U;

	t68 = ((x289%x290)-(x291^x292));

	if (t68 != 4294964472U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = -1;
	uint64_t x294 = 2018784910236817184LLU;
	uint64_t x295 = 4791567LLU;
	int16_t x296 = -2;
	volatile uint64_t t69 = 359LLU;

	t69 = ((x293%x294)-(x295^x296));

	if (t69 != 277679881582988526LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x298 = INT8_MIN;
	uint64_t x299 = 258LLU;
	uint8_t x300 = 0U;
	uint64_t t70 = 534913208528LLU;

	t70 = ((x297%x298)-(x299^x300));

	if (t70 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 9765U;
	uint32_t x302 = UINT32_MAX;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MAX;
	volatile uint32_t t71 = 0U;

	t71 = ((x301%x302)-(x303^x304));

	if (t71 != 2147493669U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x305 = 1991U;
	volatile int8_t x306 = 1;
	static int64_t t72 = -49573LL;

	t72 = ((x305%x306)-(x307^x308));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = INT64_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = 41;
	int64_t t73 = INT64_MAX;

	t73 = ((x309%x310)-(x311^x312));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -81;
	static int16_t x314 = -1;
	uint32_t x315 = 11932U;
	uint64_t x316 = 22489297800LLU;
	uint64_t t74 = 437608950484589337LLU;

	t74 = ((x313%x314)-(x315^x316));

	if (t74 != 18446744051220259564LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = 24U;
	volatile int32_t t75 = -27324002;

	t75 = ((x321%x322)-(x323^x324));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 260706091534LLU;
	int32_t x326 = INT32_MIN;
	static int32_t x327 = INT32_MAX;
	uint16_t x328 = UINT16_MAX;
	uint64_t t76 = 15798LLU;

	t76 = ((x325%x326)-(x327^x328));

	if (t76 != 258558673422LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MAX;
	volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 750U;
	static int64_t x332 = INT64_MIN;
	static volatile int64_t t77 = 115477050485431391LL;

	t77 = ((x329%x330)-(x331^x332));

	if (t77 != 9223372036854775185LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MAX;
	static int16_t x335 = INT16_MIN;
	static int64_t t78 = -4230757547LL;

	t78 = ((x333%x334)-(x335^x336));

	if (t78 != -2147385345LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = 5269408761360830LLU;
	uint8_t x339 = 1U;

	t79 = ((x337%x338)-(x339^x340));

	if (t79 != 2147516414LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MAX;
	static int8_t x344 = INT8_MIN;
	int32_t t80 = 670228951;

	t80 = ((x341%x342)-(x343^x344));

	if (t80 != 2147483393) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	int8_t x348 = -1;
	static uint64_t t81 = 177LLU;

	t81 = ((x345%x346)-(x347^x348));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = INT16_MIN;
	static int8_t x350 = INT8_MIN;
	static uint16_t x352 = 1U;
	volatile int64_t t82 = 4304520112LL;

	t82 = ((x349%x350)-(x351^x352));

	if (t82 != 12654831936174LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x353 = 53U;
	static int64_t x354 = INT64_MAX;
	int16_t x355 = 1;
	int8_t x356 = -1;
	volatile int64_t t83 = -836402215367421415LL;

	t83 = ((x353%x354)-(x355^x356));

	if (t83 != 55LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;
	volatile uint16_t x358 = 187U;
	uint32_t x359 = UINT32_MAX;
	uint32_t x360 = 9821345U;
	volatile uint64_t t84 = 217791284258812LLU;

	t84 = ((x357%x358)-(x359^x360));

	if (t84 != 18446744069424405802LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x362 = -324613948739163422LL;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;
	static int64_t t85 = -291875140844LL;

	t85 = ((x361%x362)-(x363^x364));

	if (t85 != 4294967296LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -87;
	static int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t86 = 1;

	t86 = ((x365%x366)-(x367^x368));

	if (t86 != -2147450967) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = UINT16_MAX;
	uint16_t x372 = 2U;
	volatile int64_t t87 = 54LL;

	t87 = ((x369%x370)-(x371^x372));

	if (t87 != -65533LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x373 = INT16_MIN;
	static volatile int8_t x374 = -1;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = -3;

	t88 = ((x373%x374)-(x375^x376));

	if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x377 = 0U;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 2U;
	volatile int64_t t89 = -2LL;

	t89 = ((x377%x378)-(x379^x380));

	if (t89 != 126LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MAX;
	int64_t x383 = 2460LL;
	int64_t x384 = INT64_MAX;
	static volatile uint64_t t90 = 404149440898682LLU;

	t90 = ((x381%x382)-(x383^x384));

	if (t90 != 9223372036854778269LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -3164238046542LL;
	uint64_t t91 = 29LLU;

	t91 = ((x385%x386)-(x387^x388));

	if (t91 != 18446744073709525150LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 15U;
	volatile uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile uint32_t t92 = 5U;

	t92 = ((x389%x390)-(x391^x392));

	if (t92 != 2147483919U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x394 = INT16_MIN;
	int64_t x396 = -1LL;
	int64_t t93 = 19361170002218393LL;

	t93 = ((x393%x394)-(x395^x396));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x397 = -1;
	uint16_t x400 = UINT16_MAX;

	t94 = ((x397%x398)-(x399^x400));

	if (t94 != 4294903074U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	volatile int8_t x402 = 11;
	int16_t x403 = INT16_MIN;
	uint32_t x404 = 56U;
	static volatile uint32_t t95 = 26U;

	t95 = ((x401%x402)-(x403^x404));

	if (t95 != 32705U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x405 = 25582U;
	int16_t x406 = -1;
	volatile uint16_t x408 = 2U;

	t96 = ((x405%x406)-(x407^x408));

	if (t96 != -58) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = INT32_MAX;
	static int16_t x411 = INT16_MIN;
	int8_t x412 = 0;
	int32_t t97 = -377;

	t97 = ((x409%x410)-(x411^x412));

	if (t97 != 98303) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = UINT64_MAX;
	uint32_t x416 = UINT32_MAX;
	uint64_t t98 = 211LLU;

	t98 = ((x413%x414)-(x415^x416));

	if (t98 != 4294967296LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	uint8_t x418 = 7U;
	int8_t x419 = -1;
	int16_t x420 = INT16_MIN;
	volatile int64_t t99 = 433148032LL;

	t99 = ((x417%x418)-(x419^x420));

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

