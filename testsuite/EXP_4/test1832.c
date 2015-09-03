#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int16_t x4 = -1;
int8_t x9 = -13;
int64_t x14 = INT64_MIN;
static uint16_t x23 = 3532U;
int32_t t5 = -14;
static int64_t x26 = -1LL;
static int16_t x27 = INT16_MIN;
int32_t x33 = -1;
int8_t x38 = -3;
uint8_t x42 = 0U;
static int16_t x49 = -1;
static volatile int16_t x52 = -1;
static uint16_t x54 = UINT16_MAX;
uint64_t x60 = 39492381LLU;
static volatile int64_t x62 = -1LL;
static int8_t x65 = INT8_MAX;
int32_t x71 = -1;
uint64_t x77 = 160475998679626943LLU;
int16_t x82 = 1534;
static int16_t x84 = INT16_MIN;
int32_t x87 = INT32_MIN;
volatile uint64_t t21 = UINT64_MAX;
static volatile uint32_t x90 = 36935484U;
volatile int32_t x93 = INT32_MIN;
volatile int16_t x100 = 9376;
volatile int64_t x102 = INT64_MAX;
int64_t x103 = 714393130726892LL;
volatile uint64_t x104 = 123205LLU;
volatile uint64_t t29 = 2260839133048860607LLU;
volatile uint32_t x126 = 840730U;
uint32_t t31 = UINT32_MAX;
int8_t x133 = INT8_MIN;
uint8_t x139 = 0U;
uint64_t x143 = 63201LLU;
int32_t x147 = -849199;
static int16_t x150 = -1;
volatile int32_t t37 = 1;
int32_t x155 = INT32_MAX;
uint8_t x157 = 15U;
volatile uint64_t x160 = 73LLU;
int16_t x164 = INT16_MIN;
static int8_t x168 = -1;
int8_t x174 = -6;
uint32_t t43 = UINT32_MAX;
int64_t x180 = 19269932195976LL;
int32_t x182 = INT32_MIN;
int16_t x187 = INT16_MAX;
int16_t x189 = INT16_MAX;
static volatile uint64_t t47 = 20LLU;
uint16_t x193 = 44U;
uint32_t x199 = 375U;
int8_t x200 = -1;
static int8_t x201 = -1;
static int32_t x203 = 0;
static int32_t x206 = -1;
static int16_t x207 = -78;
uint32_t x211 = 12747U;
static uint64_t x214 = 1911862LLU;
int64_t t54 = -581LL;
int8_t x225 = INT8_MIN;
static volatile int8_t x232 = -1;
int32_t t57 = 842;
int64_t x236 = -1LL;
static int32_t t59 = 0;
static int16_t x243 = INT16_MIN;
int8_t x245 = INT8_MIN;
int16_t x248 = INT16_MIN;
static volatile int64_t t61 = 255LL;
uint16_t x255 = 6447U;
volatile uint64_t t64 = 136181LLU;
static volatile uint32_t t65 = UINT32_MAX;
int8_t x266 = -58;
int32_t x275 = INT32_MIN;
int64_t x281 = -2093684888293LL;
static volatile int16_t x288 = INT16_MIN;
int64_t x290 = -1LL;
volatile int64_t x292 = -5093565LL;
static int8_t x296 = -2;
volatile int16_t x298 = 737;
static int64_t x300 = -1LL;
int64_t t74 = -1627313921907688LL;
uint8_t x305 = 29U;
uint64_t x309 = UINT64_MAX;
int16_t x311 = INT16_MIN;
volatile uint64_t t77 = UINT64_MAX;
int64_t t80 = -125204LL;
volatile int64_t x325 = INT64_MAX;
int64_t t81 = INT64_MAX;
int8_t x332 = INT8_MIN;
static volatile uint64_t x335 = 2683434842651840LLU;
static int8_t x338 = INT8_MAX;
static int64_t x340 = INT64_MIN;
static uint32_t x348 = 17089430U;
int64_t x360 = 183836413447LL;
int32_t x372 = 82874;
static int64_t t92 = -3294LL;
int32_t x374 = -6689;
volatile int32_t t93 = -180585762;
int8_t x378 = -1;
int32_t x379 = INT32_MIN;
uint32_t x382 = UINT32_MAX;
int8_t x383 = -1;
uint8_t x390 = 4U;
int32_t x392 = 30043;
int32_t x393 = -10447566;
uint64_t x394 = 897090533658741182LLU;
int16_t x399 = 3;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	int64_t x2 = 12454LL;
	static volatile int64_t t0 = -102558295925528LL;

	t0 = (x1|(x2&(x3&x4)));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -23849LL;
	int32_t x6 = INT32_MIN;
	volatile int16_t x7 = 16232;
	static int8_t x8 = INT8_MAX;
	volatile int64_t t1 = 2030471328110LL;

	t1 = (x5|(x6&(x7&x8)));

	if (t1 != -23849LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = 0LL;
	int8_t x11 = -1;
	volatile int64_t x12 = -1LL;
	volatile int64_t t2 = 0LL;

	t2 = (x9|(x10&(x11&x12)));

	if (t2 != -13LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 6496135370881255LLU;
	int16_t x15 = 1;
	int64_t x16 = INT64_MIN;
	uint64_t t3 = 251087LLU;

	t3 = (x13|(x14&(x15&x16)));

	if (t3 != 6496135370881255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 342;
	int16_t x18 = 82;
	volatile int64_t x19 = -182886LL;
	int16_t x20 = INT16_MAX;
	volatile int64_t t4 = -7LL;

	t4 = (x17|(x18&(x19&x20)));

	if (t4 != 342LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 5;
	int32_t x22 = 365641908;
	int16_t x24 = INT16_MAX;

	t5 = (x21|(x22&(x23&x24)));

	if (t5 != 133) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint16_t x28 = 19282U;
	volatile int64_t t6 = -20416725963663760LL;

	t6 = (x25|(x26&(x27&x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint8_t x30 = UINT8_MAX;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 2098880LLU;
	volatile uint64_t t7 = 8090115075138049925LLU;

	t7 = (x29|(x30&(x31&x32)));

	if (t7 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	int32_t x35 = 0;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 0;

	t8 = (x33|(x34&(x35&x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int64_t x39 = INT64_MAX;
	int64_t x40 = 5049LL;
	int64_t t9 = 14815587252632LL;

	t9 = (x37|(x38&(x39&x40)));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 1LL;
	int32_t x43 = INT32_MIN;
	static int8_t x44 = -1;
	volatile int64_t t10 = 23229739801LL;

	t10 = (x41|(x42&(x43&x44)));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = 17;
	static uint64_t x47 = 31LLU;
	int8_t x48 = 7;
	volatile uint64_t t11 = 375LLU;

	t11 = (x45|(x46&(x47&x48)));

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MAX;
	int64_t t12 = -6169LL;

	t12 = (x49|(x50&(x51&x52)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	uint8_t x55 = 3U;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 396;

	t13 = (x53|(x54&(x55&x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 35U;
	uint16_t x58 = 922U;
	static int8_t x59 = -51;
	uint64_t t14 = 3LLU;

	t14 = (x57|(x58&(x59&x60)));

	if (t14 != 811LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 480347428LL;
	volatile uint16_t x63 = 20U;
	uint16_t x64 = UINT16_MAX;
	int64_t t15 = 27060617542759LL;

	t15 = (x61|(x62&(x63&x64)));

	if (t15 != 480347444LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = 1091661;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t16 = -1440861178LL;

	t16 = (x65|(x66&(x67&x68)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = 166U;
	static int16_t x72 = INT16_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (x69|(x70&(x71&x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = -1LL;
	static volatile uint16_t x75 = UINT16_MAX;
	int8_t x76 = -1;
	static volatile int64_t t18 = -122801597LL;

	t18 = (x73|(x74&(x75&x76)));

	if (t18 != 4294967295LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MIN;
	int8_t x79 = 3;
	uint32_t x80 = 1395105U;
	volatile uint64_t t19 = 3978477435331LLU;

	t19 = (x77|(x78&(x79&x80)));

	if (t19 != 160475998679626943LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x81 = 608U;
	int8_t x83 = -11;
	static int32_t t20 = 185;

	t20 = (x81|(x82&(x83&x84)));

	if (t20 != 608) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	int16_t x86 = INT16_MIN;
	uint64_t x88 = 4290823LLU;

	t21 = (x85|(x86&(x87&x88)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 0U;
	static int8_t x91 = -1;
	int64_t x92 = -9LL;
	volatile int64_t t22 = 4788LL;

	t22 = (x89|(x90&(x91&x92)));

	if (t22 != 36935476LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	volatile int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = 0;

	t23 = (x93|(x94&(x95&x96)));

	if (t23 != -2147418240) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = 193837772;
	volatile uint16_t x99 = 1110U;
	volatile int32_t t24 = INT32_MIN;

	t24 = (x97|(x98&(x99&x100)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1U;
	volatile uint64_t t25 = 1951661977340190LLU;

	t25 = (x101|(x102&(x103&x104)));

	if (t25 != 90437LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int8_t x106 = INT8_MIN;
	volatile int64_t x107 = -1LL;
	int16_t x108 = 2557;
	volatile int64_t t26 = 8144LL;

	t26 = (x105|(x106&(x107&x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 37420304LLU;
	static volatile int64_t x110 = -1483668369416LL;
	static int64_t x111 = -1LL;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t27 = 2828997010LLU;

	t27 = (x109|(x110&(x111&x112)));

	if (t27 != 18446742590041358224LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	uint16_t x114 = 2816U;
	static uint64_t x115 = 4297672LLU;
	uint64_t x116 = 444317687818LLU;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|(x114&(x115&x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MAX;
	static uint64_t x119 = UINT64_MAX;
	int16_t x120 = 3;

	t29 = (x117|(x118&(x119&x120)));

	if (t29 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	uint64_t x122 = 208330537LLU;
	int8_t x123 = 1;
	int16_t x124 = -1;
	volatile uint64_t t30 = 251792106LLU;

	t30 = (x121|(x122&(x123&x124)));

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	int32_t x127 = -1;
	int16_t x128 = -1;

	t31 = (x125|(x126&(x127&x128)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = 930157LL;
	volatile int64_t t32 = INT64_MAX;

	t32 = (x129|(x130&(x131&x132)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	volatile int32_t x136 = INT32_MIN;
	volatile int64_t t33 = 314633930LL;

	t33 = (x133|(x134&(x135&x136)));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = INT32_MIN;
	int16_t x140 = -1;
	volatile int32_t t34 = INT32_MIN;

	t34 = (x137|(x138&(x139&x140)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 2681285712LLU;
	volatile int64_t x142 = INT64_MIN;
	int16_t x144 = -583;
	volatile uint64_t t35 = 133452054470071861LLU;

	t35 = (x141|(x142&(x143&x144)));

	if (t35 != 2681285712LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MIN;
	volatile int16_t x148 = -1;
	static int64_t t36 = 4244LL;

	t36 = (x145|(x146&(x147&x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -746647884;
	static uint16_t x151 = 14861U;
	int8_t x152 = INT8_MAX;

	t37 = (x149|(x150&(x151&x152)));

	if (t37 != -746647875) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 19;
	static int32_t x154 = -47049697;
	int8_t x156 = 1;
	volatile int32_t t38 = 0;

	t38 = (x153|(x154&(x155&x156)));

	if (t38 != 19) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	int32_t x159 = -1;
	volatile uint64_t t39 = 24LLU;

	t39 = (x157|(x158&(x159&x160)));

	if (t39 != 79LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	volatile int64_t x162 = INT64_MIN;
	uint64_t x163 = 5303526031421468LLU;
	volatile uint64_t t40 = 334017872168LLU;

	t40 = (x161|(x162&(x163&x164)));

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 109U;
	static uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	uint64_t t41 = 2000741866227344LLU;

	t41 = (x165|(x166&(x167&x168)));

	if (t41 != 18446744071562068077LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = UINT64_MAX;
	static int64_t x171 = 33747LL;
	volatile uint64_t x172 = 1202688677955207926LLU;
	volatile uint64_t t42 = 2190111506400LLU;

	t42 = (x169|(x170&(x171&x172)));

	if (t42 != 33535LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = UINT32_MAX;
	static int8_t x175 = -1;
	int32_t x176 = -1;

	t43 = (x173|(x174&(x175&x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int64_t x178 = INT64_MAX;
	int8_t x179 = -1;
	int64_t t44 = 48820424LL;

	t44 = (x177|(x178&(x179&x180)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = 917528153;
	static int16_t x183 = INT16_MIN;
	volatile int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = 61603711;

	t45 = (x181|(x182&(x183&x184)));

	if (t45 != 917528153) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 9606495705LL;
	volatile int64_t x186 = INT64_MAX;
	int8_t x188 = INT8_MIN;
	volatile int64_t t46 = -4787LL;

	t46 = (x185|(x186&(x187&x188)));

	if (t46 != 9606496217LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x190 = INT8_MIN;
	volatile uint64_t x191 = 7660428302LLU;
	uint16_t x192 = UINT16_MAX;

	t47 = (x189|(x190&(x191&x192)));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 2U;
	int16_t x195 = INT16_MIN;
	volatile uint8_t x196 = 0U;
	static volatile int32_t t48 = -25816;

	t48 = (x193|(x194&(x195&x196)));

	if (t48 != 44) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	volatile uint32_t t49 = 4U;

	t49 = (x197|(x198&(x199&x200)));

	if (t49 != 2147483904U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = 184;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t50 = 147;

	t50 = (x201|(x202&(x203&x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -2175;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = -148087116;

	t51 = (x205|(x206&(x207&x208)));

	if (t51 != -2125) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = -1;
	static uint8_t x212 = 9U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x209|(x210&(x211&x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 21U;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -876;
	volatile uint64_t t53 = 931674894LLU;

	t53 = (x213|(x214&(x215&x216)));

	if (t53 != 1900565LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

	t54 = (x217|(x218&(x219&x220)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 20U;
	volatile int64_t x222 = INT64_MAX;
	int8_t x223 = -1;
	uint32_t x224 = UINT32_MAX;
	volatile int64_t t55 = -14457762004837LL;

	t55 = (x221|(x222&(x223&x224)));

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = INT16_MIN;
	volatile int16_t x227 = 6096;
	volatile int64_t x228 = -1LL;
	int64_t t56 = -23741950914LL;

	t56 = (x225|(x226&(x227&x228)));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 46U;
	int16_t x230 = -509;
	uint8_t x231 = 114U;

	t57 = (x229|(x230&(x231&x232)));

	if (t57 != 46) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -5125;
	static int8_t x234 = -1;
	int32_t x235 = 2003;
	volatile int64_t t58 = 1865355891LL;

	t58 = (x233|(x234&(x235&x236)));

	if (t58 != -4101LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = 2;
	static volatile int16_t x239 = INT16_MIN;
	static int8_t x240 = INT8_MAX;

	t59 = (x237|(x238&(x239&x240)));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	static uint32_t x242 = 1415868319U;
	static uint16_t x244 = 3158U;
	volatile uint32_t t60 = 866693669U;

	t60 = (x241|(x242&(x243&x244)));

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MAX;
	volatile int32_t x247 = -1;

	t61 = (x245|(x246&(x247&x248)));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 58U;
	volatile uint64_t x250 = 344703LLU;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = -1;
	uint64_t t62 = 1295435142743479680LLU;

	t62 = (x249|(x250&(x251&x252)));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1093;
	volatile int8_t x254 = -2;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 400;

	t63 = (x253|(x254&(x255&x256)));

	if (t63 != -1093) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = 31326LLU;
	uint32_t x258 = 6U;
	int32_t x259 = -21375;
	int8_t x260 = INT8_MIN;

	t64 = (x257|(x258&(x259&x260)));

	if (t64 != 31326LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -3;
	int8_t x262 = INT8_MAX;
	uint32_t x263 = 13705171U;
	int16_t x264 = 3;

	t65 = (x261|(x262&(x263&x264)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -14LL;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t66 = 2157166367528687073LL;

	t66 = (x265|(x266&(x267&x268)));

	if (t66 != -14LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile int64_t x270 = 517101893206880361LL;
	int64_t x271 = -1LL;
	int16_t x272 = -1;
	volatile int64_t t67 = -334194127207692370LL;

	t67 = (x269|(x270&(x271&x272)));

	if (t67 != -20375LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -13;
	int32_t x274 = INT32_MIN;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -84309660;

	t68 = (x273|(x274&(x275&x276)));

	if (t68 != -13) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = -1;
	static int32_t x279 = 226010;
	static volatile uint8_t x280 = 31U;
	volatile int32_t t69 = -91;

	t69 = (x277|(x278&(x279&x280)));

	if (t69 != -2147483622) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 7465329411307185114LLU;
	int64_t x284 = INT64_MIN;
	uint64_t t70 = 3953428LLU;

	t70 = (x281|(x282&(x283&x284)));

	if (t70 != 18446741980024663323LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 337834011467824LLU;
	uint64_t x286 = 119007576103LLU;
	static uint8_t x287 = 15U;
	static uint64_t t71 = 139114528398766LLU;

	t71 = (x285|(x286&(x287&x288)));

	if (t71 != 337834011467824LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x291 = -53;
	volatile int64_t t72 = -52LL;

	t72 = (x289|(x290&(x291&x292)));

	if (t72 != -5093565LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MAX;
	volatile int8_t x295 = -1;
	int32_t t73 = -65;

	t73 = (x293|(x294&(x295&x296)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x299 = -27314231166819LL;

	t74 = (x297|(x298&(x299&x300)));

	if (t74 != -127LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MAX;
	volatile int8_t x302 = INT8_MAX;
	volatile int32_t x303 = 148891654;
	int32_t x304 = INT32_MAX;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x301|(x302&(x303&x304)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MAX;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t76 = 182LLU;

	t76 = (x305|(x306&(x307&x308)));

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;

	t77 = (x309|(x310&(x311&x312)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 135982U;
	uint16_t x314 = 13U;
	volatile int8_t x315 = -1;
	volatile uint32_t x316 = UINT32_MAX;
	static volatile uint32_t t78 = 923594956U;

	t78 = (x313|(x314&(x315&x316)));

	if (t78 != 135983U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	static int64_t x318 = INT64_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint16_t x320 = 0U;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317|(x318&(x319&x320)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -5434;
	volatile int8_t x322 = -1;
	int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;

	t80 = (x321|(x322&(x323&x324)));

	if (t80 != -5434LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MIN;
	static uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;

	t81 = (x325|(x326&(x327&x328)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 28U;
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x331 = -1;
	volatile uint64_t t82 = 109070LLU;

	t82 = (x329|(x330&(x331&x332)));

	if (t82 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile int16_t x334 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	static volatile uint64_t t83 = 392666179616554700LLU;

	t83 = (x333|(x334&(x335&x336)));

	if (t83 != 2683433289515263LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 12U;
	int64_t x339 = INT64_MIN;
	volatile int64_t t84 = -259440925441LL;

	t84 = (x337|(x338&(x339&x340)));

	if (t84 != 12LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint16_t x342 = 6980U;
	static uint16_t x343 = 31U;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t85 = 27915198200459699LLU;

	t85 = (x341|(x342&(x343&x344)));

	if (t85 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	static uint64_t x347 = UINT64_MAX;
	volatile uint64_t t86 = 9094653LLU;

	t86 = (x345|(x346&(x347&x348)));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	static volatile int8_t x350 = INT8_MIN;
	int16_t x351 = 1;
	volatile int32_t x352 = -702336;
	static volatile int32_t t87 = INT32_MIN;

	t87 = (x349|(x350&(x351&x352)));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -4216397059345LL;
	uint64_t x354 = 23853370165203LLU;
	static uint64_t x355 = 41570LLU;
	int32_t x356 = INT32_MIN;
	uint64_t t88 = 63790LLU;

	t88 = (x353|(x354&(x355&x356)));

	if (t88 != 18446739857312492271LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = 0;
	int16_t x358 = INT16_MAX;
	volatile int32_t x359 = -3561880;
	volatile int64_t t89 = 548557514819890334LL;

	t89 = (x357|(x358&(x359&x360)));

	if (t89 != 1536LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MAX;
	static int64_t x364 = 13623563840LL;
	volatile int64_t t90 = 17422731LL;

	t90 = (x361|(x362&(x363&x364)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -2;
	uint64_t x366 = 15394254LLU;
	static uint64_t x367 = 6LLU;
	int64_t x368 = -1LL;
	uint64_t t91 = 10999785555LLU;

	t91 = (x365|(x366&(x367&x368)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = INT64_MIN;
	static int64_t x371 = INT64_MIN;

	t92 = (x369|(x370&(x371&x372)));

	if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	uint16_t x375 = 1U;
	volatile int8_t x376 = INT8_MAX;

	t93 = (x373|(x374&(x375&x376)));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -18;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = 7LLU;

	t94 = (x377|(x378&(x379&x380)));

	if (t94 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 142451U;
	uint8_t x384 = 21U;
	uint32_t t95 = 318302U;

	t95 = (x381|(x382&(x383&x384)));

	if (t95 != 142455U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 15494;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	static int8_t x388 = -1;
	volatile int64_t t96 = -61897826692920LL;

	t96 = (x385|(x386&(x387&x388)));

	if (t96 != 15615LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int16_t x391 = -1;
	int32_t t97 = -1283;

	t97 = (x389|(x390&(x391&x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x395 = 1031U;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t98 = 495529LLU;

	t98 = (x393|(x394&(x395&x396)));

	if (t98 != 18446744073699104054LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = 418952863U;

	t99 = (x397|(x398&(x399&x400)));

	if (t99 != 65535U) { NG(); } else { ; }
	
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

