#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -34404899;
uint64_t x5 = 19016451685542319LLU;
volatile int64_t x7 = INT64_MIN;
uint64_t t1 = 260673794325787976LLU;
volatile int16_t x15 = 2;
int32_t x20 = -1;
uint64_t t5 = 8903796923LLU;
int16_t x37 = -1;
volatile int64_t x41 = -7153998854707808LL;
uint32_t x42 = 36U;
static int64_t x52 = INT64_MAX;
uint64_t t18 = 29154915157725LLU;
volatile int32_t x91 = INT32_MAX;
static uint64_t t22 = 7737LLU;
static volatile uint8_t x94 = UINT8_MAX;
int64_t t23 = 365LL;
volatile uint64_t x103 = 268152951489606LLU;
int64_t x108 = 1410196373465239502LL;
int32_t x110 = INT32_MIN;
int16_t x121 = -7;
static uint16_t x122 = 3U;
int64_t x124 = INT64_MIN;
int16_t x131 = INT16_MIN;
volatile int64_t t32 = INT64_MIN;
volatile int64_t t34 = -689063246453424004LL;
int32_t x142 = INT32_MAX;
volatile uint64_t t38 = 109043124379360873LLU;
int32_t x159 = -1;
int64_t t39 = -14538255050509957LL;
uint32_t x163 = 50936310U;
static int64_t x169 = -1LL;
int16_t x173 = 1;
static volatile uint64_t x176 = 3859675113LLU;
uint64_t t43 = 87LLU;
uint32_t x179 = UINT32_MAX;
uint32_t t44 = 67378U;
int16_t x181 = INT16_MAX;
volatile uint64_t x183 = 3703431997LLU;
int16_t x185 = -1;
int64_t t46 = 43797118054LL;
volatile int64_t x191 = INT64_MAX;
static uint64_t x192 = UINT64_MAX;
static int64_t x196 = 20042261798LL;
int32_t x198 = INT32_MIN;
uint32_t x208 = UINT32_MAX;
static uint8_t x213 = 6U;
volatile int8_t x215 = 0;
uint32_t x217 = UINT32_MAX;
volatile int64_t t54 = -191722144134894LL;
int8_t x224 = INT8_MAX;
uint64_t x226 = 112LLU;
uint8_t x233 = UINT8_MAX;
uint8_t x240 = 0U;
int64_t x248 = INT64_MAX;
volatile uint64_t t61 = 158097684LLU;
int16_t x254 = INT16_MIN;
int16_t x256 = INT16_MIN;
uint8_t x257 = 25U;
static int8_t x259 = -1;
int16_t x261 = INT16_MIN;
uint16_t x263 = 88U;
volatile int32_t x267 = INT32_MIN;
int8_t x268 = INT8_MIN;
int64_t x283 = INT64_MIN;
volatile uint32_t x285 = 7244017U;
int16_t x287 = -1;
static uint32_t t71 = 182805U;
int64_t x290 = -1LL;
static uint32_t x298 = 207165U;
int32_t x300 = INT32_MAX;
uint32_t t74 = 1018171621U;
int16_t x304 = INT16_MAX;
int64_t t77 = 3LL;
volatile uint32_t t78 = 6U;
uint8_t x318 = 0U;
int8_t x327 = INT8_MAX;
uint8_t x328 = UINT8_MAX;
uint32_t x329 = UINT32_MAX;
static uint8_t x332 = UINT8_MAX;
volatile uint64_t x342 = 1LLU;
int64_t t87 = 958LL;
uint8_t x353 = 32U;
volatile int64_t t88 = 17167LL;
uint64_t x363 = 1384769733LLU;
static volatile uint64_t t90 = 11403131LLU;
uint64_t x366 = UINT64_MAX;
int8_t x372 = 0;
int32_t x375 = -1;
uint64_t x377 = 0LLU;
int8_t x379 = INT8_MAX;
int16_t x386 = INT16_MIN;
volatile int16_t x389 = 2809;
volatile uint16_t x396 = 974U;
static uint8_t x399 = UINT8_MAX;
volatile uint32_t t99 = 66673U;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = UINT8_MAX;
	volatile int8_t x3 = 0;
	int32_t x4 = INT32_MAX;

	t0 = (x1&(x2|(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint32_t x8 = 1519205714U;

	t1 = (x5&(x6|(x7&x8)));

	if (t1 != 19016450886860800LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 1U;
	int64_t x11 = INT64_MAX;
	static int16_t x12 = -1;
	int64_t t2 = 1LL;

	t2 = (x9&(x10|(x11&x12)));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int16_t x14 = 7;
	int32_t x16 = -3;
	int32_t t3 = 2555;

	t3 = (x13&(x14|(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile uint64_t x18 = 2225270LLU;
	uint8_t x19 = 67U;
	uint64_t t4 = 225LLU;

	t4 = (x17&(x18|(x19&x20)));

	if (t4 != 2195456LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -230613713;
	int16_t x22 = -2854;
	uint64_t x23 = 63640694851656976LLU;
	int32_t x24 = INT32_MAX;

	t5 = (x21&(x22|(x23&x24)));

	if (t5 != 18446744073478937866LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1767;
	static volatile int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MAX;
	int32_t x28 = -1;
	volatile int32_t t6 = -958;

	t6 = (x25&(x26|(x27&x28)));

	if (t6 != -1767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int64_t x30 = 413LL;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 258770U;
	int64_t t7 = 7098296LL;

	t7 = (x29&(x30|(x31&x32)));

	if (t7 != 62431LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -24;

	t8 = (x33&(x34|(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	uint16_t x39 = 3U;
	volatile int64_t x40 = -30LL;
	int64_t t9 = INT64_MAX;

	t9 = (x37&(x38|(x39&x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -213525358260671LL;

	t10 = (x41&(x42|(x43&x44)));

	if (t10 != 2147483680LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = 13;
	volatile int64_t x47 = 13407608235LL;
	static int16_t x48 = INT16_MIN;
	int64_t t11 = 12695592496LL;

	t11 = (x45&(x46|(x47&x48)));

	if (t11 != 13LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 48;
	static int64_t x50 = INT64_MIN;
	int64_t x51 = -2673LL;
	int64_t t12 = 1LL;

	t12 = (x49&(x50|(x51&x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = 50;
	volatile int32_t x55 = -2439365;
	volatile int32_t x56 = INT32_MAX;
	int64_t t13 = 806580618184355220LL;

	t13 = (x53&(x54|(x55&x56)));

	if (t13 != 2145044283LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	volatile uint32_t x59 = UINT32_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 87302LLU;

	t14 = (x57&(x58|(x59&x60)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 30697U;
	int64_t x62 = INT64_MAX;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	volatile int64_t t15 = 80383458686LL;

	t15 = (x61&(x62|(x63&x64)));

	if (t15 != 30697LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -5540147859778LL;
	static int64_t x66 = -1LL;
	static uint64_t x67 = UINT64_MAX;
	int64_t x68 = 63122529159813069LL;
	uint64_t t16 = 55900820LLU;

	t16 = (x65&(x66|(x67&x68)));

	if (t16 != 18446738533561691838LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int64_t x70 = -1LL;
	int32_t x71 = -1;
	uint16_t x72 = 1455U;
	volatile int64_t t17 = -127457380079641LL;

	t17 = (x69&(x70|(x71&x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint64_t x74 = 136086929391571639LLU;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = UINT8_MAX;

	t18 = (x73&(x74|(x75&x76)));

	if (t18 != 21247LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 33812956631325LLU;
	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile uint64_t t19 = 228080LLU;

	t19 = (x77&(x78|(x79&x80)));

	if (t19 != 53533LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 2574U;
	static int8_t x82 = -1;
	int32_t x83 = -3612089;
	int16_t x84 = 1585;
	volatile int32_t t20 = 0;

	t20 = (x81&(x82|(x83&x84)));

	if (t20 != 2574) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MIN;
	static volatile int8_t x87 = -20;
	static int64_t x88 = -1671LL;
	volatile int64_t t21 = -1895LL;

	t21 = (x85&(x86|(x87&x88)));

	if (t21 != 104LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	int16_t x90 = INT16_MIN;
	uint64_t x92 = 70074993LLU;

	t22 = (x89&(x90|(x91&x92)));

	if (t22 != 18446744073709535857LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = -254LL;

	t23 = (x93&(x94|(x95&x96)));

	if (t23 != -32640LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 3541764242599290317LLU;
	uint64_t x98 = 3795857LLU;
	int64_t x99 = 87952908469051342LL;
	int8_t x100 = INT8_MIN;
	static volatile uint64_t t24 = 9765LLU;

	t24 = (x97&(x98|(x99&x100)));

	if (t24 != 81162169903457665LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	static int64_t x104 = -1LL;
	volatile uint64_t t25 = 11641880339039657LLU;

	t25 = (x101&(x102|(x103&x104)));

	if (t25 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static uint16_t x106 = 0U;
	int16_t x107 = INT16_MIN;
	volatile int64_t t26 = 55995LL;

	t26 = (x105&(x106|(x107&x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 13;
	volatile int32_t x111 = -1;
	volatile int16_t x112 = 7;
	volatile int32_t t27 = 53197421;

	t27 = (x109&(x110|(x111&x112)));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 23731U;
	uint8_t x114 = 51U;
	int8_t x115 = INT8_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = 2;

	t28 = (x113&(x114|(x115&x116)));

	if (t28 != 51) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 61U;
	volatile int64_t x118 = INT64_MIN;
	uint32_t x119 = 48U;
	int16_t x120 = INT16_MIN;
	volatile int64_t t29 = -5192965LL;

	t29 = (x117&(x118|(x119&x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = INT8_MAX;
	static int64_t t30 = -9299813799LL;

	t30 = (x121&(x122|(x123&x124)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = INT32_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	uint64_t t31 = 23968744765LLU;

	t31 = (x125&(x126|(x127&x128)));

	if (t31 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	int16_t x132 = 0;

	t32 = (x129&(x130|(x131&x132)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MIN;
	static volatile int8_t x135 = -7;
	int8_t x136 = INT8_MIN;
	volatile int64_t t33 = -2259146054638284LL;

	t33 = (x133&(x134|(x135&x136)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 3LL;
	int32_t x138 = INT32_MAX;
	volatile int64_t x139 = -2LL;
	int8_t x140 = -1;

	t34 = (x137&(x138|(x139&x140)));

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static volatile int32_t x143 = INT32_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = 15705723;

	t35 = (x141&(x142|(x143&x144)));

	if (t35 != 2147483520) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 7212LLU;
	int64_t x146 = -2505684LL;
	uint8_t x147 = 0U;
	int8_t x148 = INT8_MAX;
	static volatile uint64_t t36 = 1624424533LLU;

	t36 = (x145&(x146|(x147&x148)));

	if (t36 != 1068LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 23;
	uint16_t x150 = 2068U;
	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = 992;
	volatile int32_t t37 = -1;

	t37 = (x149&(x150|(x151&x152)));

	if (t37 != 20) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 1831U;
	volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;

	t38 = (x153&(x154|(x155&x156)));

	if (t38 != 39LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 6U;
	int64_t x158 = 7LL;
	volatile uint8_t x160 = 13U;

	t39 = (x157&(x158|(x159&x160)));

	if (t39 != 6LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -23416;
	int32_t x162 = 11;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 118162LL;

	t40 = (x161&(x162|(x163&x164)));

	if (t40 != 8LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = 778238805628LLU;
	static int8_t x168 = INT8_MAX;
	volatile uint64_t t41 = 267482887231893LLU;

	t41 = (x165&(x166|(x167&x168)));

	if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = 4;
	uint16_t x172 = 0U;
	volatile int64_t t42 = 6664060LL;

	t42 = (x169&(x170|(x171&x172)));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -1;
	int64_t x175 = -3LL;

	t43 = (x173&(x174|(x175&x176)));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	int8_t x180 = -10;

	t44 = (x177&(x178|(x179&x180)));

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 2656096U;
	volatile int64_t x184 = -1351044294LL;
	uint64_t t45 = 4345029689590LLU;

	t45 = (x181&(x182|(x183&x184)));

	if (t45 != 10104LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	static int32_t x188 = -1;

	t46 = (x185&(x186|(x187&x188)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 0U;
	uint16_t x190 = UINT16_MAX;
	uint64_t t47 = 2783696559894840790LLU;

	t47 = (x189&(x190|(x191&x192)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	volatile int64_t x194 = INT64_MIN;
	uint8_t x195 = 12U;
	volatile int64_t t48 = 3246356LL;

	t48 = (x193&(x194|(x195&x196)));

	if (t48 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int64_t x199 = 40616673241LL;
	int8_t x200 = INT8_MIN;
	int64_t t49 = -114485LL;

	t49 = (x197&(x198|(x199&x200)));

	if (t49 != 128LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = -252154949705790LL;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	static volatile uint64_t t50 = 1251495752352109645LLU;

	t50 = (x201&(x202|(x203&x204)));

	if (t50 != 18446491918759845826LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -13;
	uint16_t x206 = 0U;
	uint32_t x207 = UINT32_MAX;
	volatile uint32_t t51 = 6U;

	t51 = (x205&(x206|(x207&x208)));

	if (t51 != 4294967283U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 9917815442802LLU;
	int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t52 = 141546835235087LLU;

	t52 = (x209&(x210|(x211&x212)));

	if (t52 != 9917815442802LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	uint8_t x216 = 14U;
	volatile int64_t t53 = 6127114385936LL;

	t53 = (x213&(x214|(x215&x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	static int32_t x219 = INT32_MAX;
	volatile uint16_t x220 = 8U;

	t54 = (x217&(x218|(x219&x220)));

	if (t54 != 8LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 1U;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MIN;
	static volatile int32_t t55 = 247;

	t55 = (x221&(x222|(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 650U;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = 19639927663895592LLU;

	t56 = (x225&(x226|(x227&x228)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	int8_t x230 = 8;
	int8_t x231 = 53;
	uint32_t x232 = 17656152U;
	volatile uint32_t t57 = 10U;

	t57 = (x229&(x230|(x231&x232)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = 29;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = 7865;

	t58 = (x233&(x234|(x235&x236)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -485;
	int8_t x238 = -1;
	volatile int64_t x239 = -1LL;
	int64_t t59 = -55870114023067LL;

	t59 = (x237&(x238|(x239&x240)));

	if (t59 != -485LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	static volatile uint32_t x243 = 1U;
	static uint64_t x244 = UINT64_MAX;
	uint64_t t60 = 99LLU;

	t60 = (x241&(x242|(x243&x244)));

	if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static volatile uint64_t x246 = 7LLU;
	int64_t x247 = 8718183938208378LL;

	t61 = (x245&(x246|(x247&x248)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -10;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = INT16_MIN;
	int32_t x252 = -2;
	int32_t t62 = -386878076;

	t62 = (x249&(x250|(x251&x252)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (x253&(x254|(x255&x256)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x258 = UINT16_MAX;
	volatile uint32_t x260 = 329656U;
	uint32_t t64 = 135994507U;

	t64 = (x257&(x258|(x259&x260)));

	if (t64 != 25U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 1461401490799451561LLU;
	static volatile int32_t x264 = 27857119;
	volatile uint64_t t65 = 87930245832447657LLU;

	t65 = (x261&(x262|(x263&x264)));

	if (t65 != 1461401490799427584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 13U;
	uint64_t x266 = UINT64_MAX;
	static volatile uint64_t t66 = 80790476148971699LLU;

	t66 = (x265&(x266|(x267&x268)));

	if (t66 != 13LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MIN;
	int32_t x270 = INT32_MAX;
	int64_t x271 = -1LL;
	int16_t x272 = 127;
	int64_t t67 = 3667602667517LL;

	t67 = (x269&(x270|(x271&x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 5580U;
	uint32_t x274 = 1U;
	int16_t x275 = 10;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t68 = 5U;

	t68 = (x273&(x274|(x275&x276)));

	if (t68 != 8U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t69 = -7841194691554660LL;

	t69 = (x277&(x278|(x279&x280)));

	if (t69 != 32640LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MAX;
	int64_t t70 = -5288457516051397LL;

	t70 = (x281&(x282|(x283&x284)));

	if (t70 != 4294934528LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MAX;
	uint8_t x288 = 2U;

	t71 = (x285&(x286|(x287&x288)));

	if (t71 != 113U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 156U;
	static int8_t x291 = INT8_MIN;
	uint8_t x292 = 15U;
	int64_t t72 = -5050898LL;

	t72 = (x289&(x290|(x291&x292)));

	if (t72 != 156LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	uint16_t x294 = 1U;
	int32_t x295 = INT32_MIN;
	static volatile int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 1;

	t73 = (x293&(x294|(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint16_t x299 = 16U;

	t74 = (x297&(x298|(x299&x300)));

	if (t74 != 207165U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 622282555106LLU;
	uint64_t t75 = 79116LLU;

	t75 = (x301&(x302|(x303&x304)));

	if (t75 != 18446744073709534946LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1;
	int8_t x306 = 0;
	uint8_t x307 = 95U;
	static uint8_t x308 = 12U;
	volatile int32_t t76 = -309;

	t76 = (x305&(x306|(x307&x308)));

	if (t76 != 12) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 4U;
	static volatile int64_t x310 = INT64_MIN;
	int16_t x311 = 0;
	int16_t x312 = INT16_MAX;

	t77 = (x309&(x310|(x311&x312)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	uint32_t x314 = 0U;
	int8_t x315 = -1;
	volatile uint8_t x316 = UINT8_MAX;

	t78 = (x313&(x314|(x315&x316)));

	if (t78 != 255U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = INT8_MIN;
	int32_t x319 = -1;
	int8_t x320 = INT8_MAX;
	int32_t t79 = -278198037;

	t79 = (x317&(x318|(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile uint64_t x322 = 3410107696LLU;
	int64_t x323 = INT64_MAX;
	static int16_t x324 = -931;
	volatile uint64_t t80 = 113071621522LLU;

	t80 = (x321&(x322|(x323&x324)));

	if (t80 != 9223372036854775040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	volatile int32_t t81 = 1;

	t81 = (x325&(x326|(x327&x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = 12;
	uint64_t x331 = 2LLU;
	volatile uint64_t t82 = 10164564390859936LLU;

	t82 = (x329&(x330|(x331&x332)));

	if (t82 != 14LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 0U;
	static int8_t x334 = INT8_MIN;
	volatile int64_t x335 = 0LL;
	int64_t x336 = 2561506157414242LL;
	int64_t t83 = 0LL;

	t83 = (x333&(x334|(x335&x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 13902LL;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	static uint32_t x340 = UINT32_MAX;
	volatile int64_t t84 = -1654100092LL;

	t84 = (x337&(x338|(x339&x340)));

	if (t84 != 13902LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t85 = 44287994670LLU;

	t85 = (x341&(x342|(x343&x344)));

	if (t85 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x345 = 425381U;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	static uint16_t x348 = 759U;
	static uint32_t t86 = 4U;

	t86 = (x345&(x346|(x347&x348)));

	if (t86 != 165U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	static int64_t x351 = 16201915818LL;
	int16_t x352 = 2;

	t87 = (x349&(x350|(x351&x352)));

	if (t87 != 255LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MAX;
	static int16_t x355 = INT16_MAX;
	uint16_t x356 = 1000U;

	t88 = (x353&(x354|(x355&x356)));

	if (t88 != 32LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -44;
	uint16_t x358 = UINT16_MAX;
	static int64_t x359 = 97LL;
	int32_t x360 = INT32_MAX;
	volatile int64_t t89 = -14697899518LL;

	t89 = (x357&(x358|(x359&x360)));

	if (t89 != 65492LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = 3;
	int64_t x364 = 1375823266839281LL;

	t90 = (x361&(x362|(x363&x364)));

	if (t90 != 1342302336LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int8_t x367 = -34;
	int16_t x368 = INT16_MIN;
	uint64_t t91 = 44297182LLU;

	t91 = (x365&(x366|(x367&x368)));

	if (t91 != 32767LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 6U;
	volatile int32_t x370 = INT32_MAX;
	int64_t x371 = -6623LL;
	static int64_t t92 = 24924LL;

	t92 = (x369&(x370|(x371&x372)));

	if (t92 != 6LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = -1;
	int64_t x376 = INT64_MIN;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x373&(x374|(x375&x376)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = UINT8_MAX;
	int16_t x380 = 502;
	volatile uint64_t t94 = 164691115497002LLU;

	t94 = (x377&(x378|(x379&x380)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x382 = -1;
	int64_t x383 = 80LL;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t95 = -9454842987423LL;

	t95 = (x381&(x382|(x383&x384)));

	if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 109;
	int8_t x387 = -11;
	volatile int16_t x388 = -1;
	volatile int32_t t96 = 1070819052;

	t96 = (x385&(x386|(x387&x388)));

	if (t96 != 101) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	volatile uint32_t x391 = 240432U;
	uint32_t x392 = 5801U;
	int64_t t97 = -258016LL;

	t97 = (x389&(x390|(x391&x392)));

	if (t97 != 2809LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -568838054966279LL;
	static uint64_t x394 = UINT64_MAX;
	static uint8_t x395 = UINT8_MAX;
	static uint64_t t98 = 33952541448LLU;

	t98 = (x393&(x394|(x395&x396)));

	if (t98 != 18446175235654585337LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -6788;
	static uint32_t x398 = 4079U;
	uint32_t x400 = 120323U;

	t99 = (x397&(x398|(x399&x400)));

	if (t99 != 1388U) { NG(); } else { ; }
	
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

