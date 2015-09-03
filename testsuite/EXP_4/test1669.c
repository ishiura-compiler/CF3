#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = INT16_MAX;
uint64_t x11 = UINT64_MAX;
volatile uint8_t x15 = 6U;
uint32_t x16 = UINT32_MAX;
int32_t x26 = -1;
static volatile int16_t x27 = 508;
int32_t x28 = INT32_MIN;
volatile int32_t t6 = -1560418;
static volatile int64_t x34 = INT64_MAX;
int64_t x35 = 1980626719LL;
uint16_t x36 = 1413U;
volatile int64_t t8 = -63267914755789772LL;
uint8_t x38 = 2U;
int32_t x46 = INT32_MIN;
volatile int32_t t11 = 1;
static volatile int16_t x51 = 60;
volatile uint32_t x56 = 88018U;
volatile int8_t x57 = INT8_MIN;
static volatile int32_t x71 = 3385245;
volatile int8_t x75 = -1;
volatile int64_t x83 = INT64_MIN;
uint64_t x84 = 105299377987933794LLU;
int8_t x87 = -1;
volatile int64_t x92 = -1LL;
int64_t x95 = 96533035736382LL;
volatile uint64_t x96 = 155772LLU;
int64_t t22 = 22098LL;
int16_t x101 = INT16_MAX;
volatile int16_t x102 = INT16_MIN;
volatile int32_t t26 = 673924;
volatile uint32_t t28 = 14277729U;
volatile int16_t x128 = INT16_MIN;
uint8_t x131 = 0U;
int16_t x141 = INT16_MIN;
int16_t x149 = 0;
int32_t x151 = 614318;
int32_t t36 = 923237127;
static int32_t x154 = -1;
int16_t x156 = INT16_MIN;
volatile int32_t x157 = -2;
static uint32_t x158 = UINT32_MAX;
volatile int32_t t39 = 135468485;
int8_t x167 = 1;
int8_t x168 = INT8_MIN;
int64_t t42 = -129533715223891LL;
int16_t x178 = -10;
volatile int64_t x181 = INT64_MIN;
static volatile uint64_t x183 = UINT64_MAX;
int16_t x187 = INT16_MIN;
volatile int8_t x190 = -1;
static uint32_t x191 = 284434U;
static uint8_t x203 = 1U;
static uint32_t x206 = 0U;
uint32_t x209 = 131U;
int32_t x211 = INT32_MIN;
volatile int32_t t53 = 27;
volatile int64_t t54 = -7LL;
static uint64_t x225 = 729234LLU;
uint64_t t55 = 139332LLU;
int8_t x233 = -55;
volatile int32_t t57 = 27588587;
uint8_t x239 = 0U;
volatile uint16_t x245 = 6U;
static uint8_t x250 = 3U;
uint64_t x251 = 897061507551LLU;
uint64_t x254 = 604218645077706156LLU;
int8_t x255 = -1;
uint64_t x256 = UINT64_MAX;
uint64_t x258 = 3271042LLU;
int16_t x263 = 1;
int8_t x268 = INT8_MAX;
uint32_t x269 = 11495039U;
volatile int64_t t66 = 119162848LL;
int16_t x275 = -4;
int32_t x278 = INT32_MIN;
volatile uint32_t t74 = 305U;
uint8_t x316 = UINT8_MAX;
static int8_t x319 = 6;
volatile int64_t x340 = -19762LL;
uint8_t x347 = 30U;
static int16_t x348 = INT16_MAX;
int16_t x352 = -5685;
uint8_t x357 = 63U;
int16_t x363 = INT16_MAX;
int32_t x368 = -1;
int64_t x375 = INT64_MAX;
volatile int32_t t92 = -375;
static volatile uint16_t x379 = UINT16_MAX;
int16_t x380 = 26;
uint64_t t93 = 81667163LLU;
int32_t x381 = INT32_MIN;
int64_t x391 = -331697268LL;
static int16_t x392 = -1;
int64_t x397 = INT64_MIN;
int64_t x400 = 24072664698LL;
int64_t t98 = -1LL;
volatile uint32_t x403 = UINT32_MAX;


void f0(void) {
	volatile int64_t x2 = -1LL;
	static int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = -850LL;

	t0 = (x1%(x2|(x3<=x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int64_t x6 = -91078786406075959LL;
	static int32_t x7 = INT32_MIN;
	volatile int64_t x8 = 39350898268553750LL;
	volatile int64_t t1 = 84875841LL;

	t1 = (x5%(x6|(x7<=x8)));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = -1;
	int16_t x12 = -1;
	static int32_t t2 = -710;

	t2 = (x9%(x10|(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3533LLU;
	static uint32_t x14 = 8194384U;
	uint64_t t3 = 1487LLU;

	t3 = (x13%(x14|(x15<=x16)));

	if (t3 != 3533LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = 609;
	volatile uint64_t x19 = UINT64_MAX;
	static int64_t x20 = -1LL;
	int32_t t4 = -6936;

	t4 = (x17%(x18|(x19<=x20)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MAX;
	volatile uint8_t x23 = 3U;
	int16_t x24 = -986;
	volatile int64_t t5 = -12109414694506LL;

	t5 = (x21%(x22|(x23<=x24)));

	if (t5 != 7LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;

	t6 = (x25%(x26|(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint32_t x30 = 1954588448U;
	uint64_t x31 = 3LLU;
	int32_t x32 = INT32_MAX;
	uint32_t t7 = 455606360U;

	t7 = (x29%(x30|(x31<=x32)));

	if (t7 != 385790270U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;

	t8 = (x33%(x34|(x35<=x36)));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int16_t x39 = INT16_MAX;
	static int8_t x40 = -1;
	static int64_t t9 = 8078725106092286LL;

	t9 = (x37%(x38|(x39<=x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -58;
	static volatile uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MAX;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -211;

	t10 = (x41%(x42|(x43<=x44)));

	if (t10 != -58) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 29U;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;

	t11 = (x45%(x46|(x47<=x48)));

	if (t11 != 29) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 0;

	t12 = (x49%(x50|(x51<=x52)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 1023426209LLU;
	int32_t t13 = -39;

	t13 = (x53%(x54|(x55<=x56)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -11;
	int32_t x59 = 1;
	int8_t x60 = 0;
	int32_t t14 = 55118424;

	t14 = (x57%(x58|(x59<=x60)));

	if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int8_t x62 = 3;
	volatile uint8_t x63 = 14U;
	uint16_t x64 = 2U;
	int32_t t15 = -24;

	t15 = (x61%(x62|(x63<=x64)));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 6U;
	static int8_t x70 = 3;
	uint8_t x72 = 4U;
	volatile int32_t t16 = -200794;

	t16 = (x69%(x70|(x71<=x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	volatile int64_t t17 = -177871959LL;

	t17 = (x73%(x74|(x75<=x76)));

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x78 = 1;
	int8_t x79 = -28;
	volatile int8_t x80 = -1;
	int32_t t18 = -33;

	t18 = (x77%(x78|(x79<=x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -1;
	int64_t x82 = INT64_MIN;
	static int64_t t19 = 1LL;

	t19 = (x81%(x82|(x83<=x84)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = 14U;
	static int16_t x86 = INT16_MAX;
	int8_t x88 = -1;
	volatile int32_t t20 = 227355;

	t20 = (x85%(x86|(x87<=x88)));

	if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 695U;
	uint64_t x90 = 200LLU;
	int8_t x91 = -1;
	static uint64_t t21 = 21995698743LLU;

	t21 = (x89%(x90|(x91<=x92)));

	if (t21 != 92LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -2;
	static int64_t x94 = 519567849281LL;

	t22 = (x93%(x94|(x95<=x96)));

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t23 = 565255600LLU;

	t23 = (x97%(x98|(x99<=x100)));

	if (t23 != 65535LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x103 = -450211447448974LL;
	int32_t x104 = INT32_MIN;
	int32_t t24 = 85;

	t24 = (x101%(x102|(x103<=x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 114;
	int16_t x106 = INT16_MIN;
	int8_t x107 = 17;
	int8_t x108 = -1;
	static int32_t t25 = 10;

	t25 = (x105%(x106|(x107<=x108)));

	if (t25 != 114) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	int16_t x110 = -290;
	int32_t x111 = INT32_MAX;
	static int32_t x112 = INT32_MIN;

	t26 = (x109%(x110|(x111<=x112)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MAX;
	uint16_t x114 = 2475U;
	static volatile uint64_t x115 = 427744572LLU;
	int16_t x116 = -1;
	volatile int32_t t27 = -5;

	t27 = (x113%(x114|(x115<=x116)));

	if (t27 != 397) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 5877684U;
	volatile int8_t x118 = INT8_MIN;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = -451389386LL;

	t28 = (x117%(x118|(x119<=x120)));

	if (t28 != 5877684U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	int64_t x123 = 1991390669LL;
	static volatile int8_t x124 = INT8_MIN;
	volatile int32_t t29 = 236662;

	t29 = (x121%(x122|(x123<=x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static int32_t x126 = INT32_MAX;
	uint16_t x127 = 2U;
	int32_t t30 = -6525;

	t30 = (x125%(x126|(x127<=x128)));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = -1872;
	static uint64_t x132 = 518336807LLU;
	volatile int32_t t31 = 595323023;

	t31 = (x129%(x130|(x131<=x132)));

	if (t31 != 960) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 1;
	volatile uint64_t x134 = 945284537408281545LLU;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile uint64_t t32 = 816124LLU;

	t32 = (x133%(x134|(x135<=x136)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MIN;
	int64_t x138 = 14LL;
	int64_t x139 = 4108829778587LL;
	volatile int32_t x140 = -1707747;
	int64_t t33 = 0LL;

	t33 = (x137%(x138|(x139<=x140)));

	if (t33 != -8LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x142 = -82235904LL;
	int64_t x143 = -1799LL;
	int16_t x144 = INT16_MIN;
	int64_t t34 = -3869481850852LL;

	t34 = (x141%(x142|(x143<=x144)));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -412;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = INT64_MAX;
	volatile int64_t x148 = INT64_MAX;
	static volatile int32_t t35 = 27535;

	t35 = (x145%(x146|(x147<=x148)));

	if (t35 != -31) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = -3244;
	static volatile uint64_t x152 = 654655292396LLU;

	t36 = (x149%(x150|(x151<=x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int8_t x155 = -4;
	volatile int32_t t37 = 8792;

	t37 = (x153%(x154|(x155<=x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MAX;
	volatile uint32_t t38 = 1733514U;

	t38 = (x157%(x158|(x159<=x160)));

	if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -6727;
	static int16_t x162 = -9058;
	volatile int16_t x163 = -1;
	int16_t x164 = 11774;

	t39 = (x161%(x162|(x163<=x164)));

	if (t39 != -6727) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 2239921U;
	static int64_t t40 = 974172LL;

	t40 = (x165%(x166|(x167<=x168)));

	if (t40 != -1022329LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = -48;
	uint32_t x170 = 343406U;
	volatile int8_t x171 = INT8_MAX;
	uint32_t x172 = 438715596U;
	static volatile uint32_t t41 = 12760326U;

	t41 = (x169%(x170|(x171<=x172)));

	if (t41 != 319306U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MAX;
	int8_t x175 = 1;
	int32_t x176 = -1;

	t42 = (x173%(x174|(x175<=x176)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x179 = INT32_MIN;
	int64_t x180 = -17LL;
	int32_t t43 = 1533;

	t43 = (x177%(x178|(x179<=x180)));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x182 = 646008U;
	volatile int64_t x184 = -1LL;
	int64_t t44 = 3208469058LL;

	t44 = (x181%(x182|(x183<=x184)));

	if (t44 != -504967LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -28605259759LL;
	static uint32_t x188 = UINT32_MAX;
	static int64_t t45 = -62323968530LL;

	t45 = (x185%(x186|(x187<=x188)));

	if (t45 != -7807886515LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 97U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t46 = 152181585;

	t46 = (x189%(x190|(x191<=x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 1500;
	uint32_t x194 = 1526310U;
	int64_t x195 = INT64_MAX;
	static uint32_t x196 = 3066099U;
	volatile uint32_t t47 = 508505470U;

	t47 = (x193%(x194|(x195<=x196)));

	if (t47 != 1500U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	volatile int64_t x198 = -27LL;
	static uint8_t x199 = UINT8_MAX;
	int32_t x200 = -1;
	int64_t t48 = 129542846541125LL;

	t48 = (x197%(x198|(x199<=x200)));

	if (t48 != 25LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	int32_t x204 = INT32_MAX;
	uint64_t t49 = 3LLU;

	t49 = (x201%(x202|(x203<=x204)));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x205 = -1LL;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	static volatile int64_t t50 = -45008882696LL;

	t50 = (x205%(x206|(x207<=x208)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x210 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	volatile uint32_t t51 = 948U;

	t51 = (x209%(x210|(x211<=x212)));

	if (t51 != 131U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	int64_t x215 = -1LL;
	static volatile int8_t x216 = -1;
	int32_t t52 = 172;

	t52 = (x213%(x214|(x215<=x216)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -17;
	static uint8_t x218 = 58U;
	int32_t x219 = 41854;
	volatile int64_t x220 = INT64_MAX;

	t53 = (x217%(x218|(x219<=x220)));

	if (t53 != -17) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = 211989553LL;
	static uint16_t x222 = 25U;
	int8_t x223 = 0;
	static uint16_t x224 = 64U;

	t54 = (x221%(x222|(x223<=x224)));

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	static volatile uint8_t x228 = 3U;

	t55 = (x225%(x226|(x227<=x228)));

	if (t55 != 729234LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 6U;
	volatile int16_t x230 = INT16_MIN;
	int32_t x231 = -2419523;
	volatile uint8_t x232 = 10U;
	int32_t t56 = -4033;

	t56 = (x229%(x230|(x231<=x232)));

	if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x234 = 15U;
	int64_t x235 = -6221056856836527LL;
	static int32_t x236 = INT32_MIN;

	t57 = (x233%(x234|(x235<=x236)));

	if (t57 != -10) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 371101U;
	int64_t x238 = INT64_MAX;
	volatile int32_t x240 = INT32_MAX;
	static int64_t t58 = 134771588084987935LL;

	t58 = (x237%(x238|(x239<=x240)));

	if (t58 != 371101LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -2008355;
	int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MIN;
	static int64_t x244 = -250019LL;
	int32_t t59 = 7;

	t59 = (x241%(x242|(x243<=x244)));

	if (t59 != -9568) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = 1386U;
	int32_t x248 = -3149441;
	volatile int32_t t60 = -518329742;

	t60 = (x245%(x246|(x247<=x248)));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = -927;
	uint16_t x252 = 2066U;
	int32_t t61 = 3813;

	t61 = (x249%(x250|(x251<=x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -80950;
	volatile uint64_t t62 = 1712757105LLU;

	t62 = (x253%(x254|(x255<=x256)));

	if (t62 != 320184721378285956LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MAX;
	static uint32_t x259 = 1471678911U;
	uint16_t x260 = UINT16_MAX;
	uint64_t t63 = 897648350363LLU;

	t63 = (x257%(x258|(x259<=x260)));

	if (t63 != 2816261LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	int64_t x264 = INT64_MIN;
	uint64_t t64 = 3362LLU;

	t64 = (x261%(x262|(x263<=x264)));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = 15441820;
	int16_t x266 = INT16_MIN;
	volatile uint16_t x267 = UINT16_MAX;
	int32_t t65 = 1282936;

	t65 = (x265%(x266|(x267<=x268)));

	if (t65 != 8092) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x270 = INT64_MAX;
	int64_t x271 = INT64_MAX;
	int8_t x272 = -2;

	t66 = (x269%(x270|(x271<=x272)));

	if (t66 != 11495039LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	int16_t x274 = INT16_MIN;
	static volatile int8_t x276 = -1;
	static int32_t t67 = -957964851;

	t67 = (x273%(x274|(x275<=x276)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 172406LL;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	volatile int64_t t68 = -538707269206348LL;

	t68 = (x277%(x278|(x279<=x280)));

	if (t68 != 172406LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MAX;
	int32_t t69 = -2;

	t69 = (x281%(x282|(x283<=x284)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = 3;
	uint32_t x286 = UINT32_MAX;
	volatile uint8_t x287 = 17U;
	int8_t x288 = -1;
	uint32_t t70 = 9374818U;

	t70 = (x285%(x286|(x287<=x288)));

	if (t70 != 3U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = -33;
	uint8_t x291 = 18U;
	int16_t x292 = -902;
	static volatile int32_t t71 = 11;

	t71 = (x289%(x290|(x291<=x292)));

	if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -1LL;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = INT8_MAX;
	static int64_t t72 = 5718LL;

	t72 = (x293%(x294|(x295<=x296)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x297 = -1;
	uint8_t x298 = 11U;
	int8_t x299 = -23;
	int64_t x300 = INT64_MIN;
	int32_t t73 = -10950892;

	t73 = (x297%(x298|(x299<=x300)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MAX;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = -1LL;
	volatile int8_t x304 = 0;

	t74 = (x301%(x302|(x303<=x304)));

	if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = -2263813;
	volatile int8_t x307 = 6;
	static int32_t x308 = -39548092;
	int32_t t75 = 355446;

	t75 = (x305%(x306|(x307<=x308)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	static uint16_t x310 = 1196U;
	volatile int64_t x311 = INT64_MIN;
	volatile int32_t x312 = -1;
	volatile int32_t t76 = 506660;

	t76 = (x309%(x310|(x311<=x312)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x313 = INT32_MIN;
	int16_t x314 = 406;
	int8_t x315 = -1;
	volatile int32_t t77 = 0;

	t77 = (x313%(x314|(x315<=x316)));

	if (t77 != -244) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 0;
	int64_t x318 = INT64_MIN;
	volatile uint8_t x320 = 16U;
	volatile int64_t t78 = -237380582LL;

	t78 = (x317%(x318|(x319<=x320)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x321 = UINT32_MAX;
	static uint64_t x322 = 192290029215LLU;
	volatile int64_t x323 = 8810345LL;
	static int64_t x324 = 22819009941LL;
	static volatile uint64_t t79 = 491176802918LLU;

	t79 = (x321%(x322|(x323<=x324)));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 195LL;
	static uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	volatile int64_t x328 = -1283765216418765558LL;
	int64_t t80 = 3686235LL;

	t80 = (x325%(x326|(x327<=x328)));

	if (t80 != 195LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = UINT16_MAX;
	int64_t x330 = -14776767LL;
	uint8_t x331 = 6U;
	uint32_t x332 = 3877667U;
	volatile int64_t t81 = -137723051573746723LL;

	t81 = (x329%(x330|(x331<=x332)));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 25LL;
	uint64_t x334 = 858684319693997975LLU;
	int16_t x335 = INT16_MIN;
	uint16_t x336 = 3226U;
	uint64_t t82 = 150767485697129LLU;

	t82 = (x333%(x334|(x335<=x336)));

	if (t82 != 25LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int64_t x338 = 1441LL;
	static int16_t x339 = INT16_MAX;
	volatile int64_t t83 = -1LL;

	t83 = (x337%(x338|(x339<=x340)));

	if (t83 != 509LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x341 = UINT32_MAX;
	volatile int64_t x342 = INT64_MAX;
	uint32_t x343 = 121023U;
	static uint64_t x344 = UINT64_MAX;
	int64_t t84 = 563231803LL;

	t84 = (x341%(x342|(x343<=x344)));

	if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	static int64_t x346 = INT64_MIN;
	volatile int64_t t85 = 2887631221619LL;

	t85 = (x345%(x346|(x347<=x348)));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = -91;
	int32_t x351 = INT32_MIN;
	int32_t t86 = -1238;

	t86 = (x349%(x350|(x351<=x352)));

	if (t86 != -37) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = UINT8_MAX;
	static int32_t x356 = INT32_MIN;
	int32_t t87 = 960257;

	t87 = (x353%(x354|(x355<=x356)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x358 = 4U;
	static uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	int32_t t88 = 1;

	t88 = (x357%(x358|(x359<=x360)));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = 2U;
	uint8_t x362 = 104U;
	static volatile int64_t x364 = INT64_MIN;
	int32_t t89 = 77;

	t89 = (x361%(x362|(x363<=x364)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x366 = 461416540464231940LL;
	static int32_t x367 = INT32_MIN;
	volatile int64_t t90 = -671915LL;

	t90 = (x365%(x366|(x367<=x368)));

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MAX;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = -43;
	static volatile int64_t t91 = 81843LL;

	t91 = (x369%(x370|(x371<=x372)));

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x373 = 50U;
	int8_t x374 = 3;
	static int32_t x376 = -293607;

	t92 = (x373%(x374|(x375<=x376)));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 307625328222LLU;
	int64_t x378 = INT64_MAX;

	t93 = (x377%(x378|(x379<=x380)));

	if (t93 != 307625328222LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x382 = -420339369780LL;
	volatile int64_t x383 = INT64_MIN;
	uint16_t x384 = 19U;
	int64_t t94 = -3LL;

	t94 = (x381%(x382|(x383<=x384)));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MAX;
	volatile int32_t x387 = 106245;
	volatile int8_t x388 = -12;
	int32_t t95 = -1;

	t95 = (x385%(x386|(x387<=x388)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 4232U;
	int64_t x390 = 2815511LL;
	volatile int64_t t96 = -53900LL;

	t96 = (x389%(x390|(x391<=x392)));

	if (t96 != 4232LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = -1;
	volatile int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	volatile int8_t x396 = INT8_MIN;
	int32_t t97 = -1366507;

	t97 = (x393%(x394|(x395<=x396)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x398 = -1LL;
	int32_t x399 = -1;

	t98 = (x397%(x398|(x399<=x400)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	int64_t x404 = INT64_MIN;
	static volatile int32_t t99 = -17;

	t99 = (x401%(x402|(x403<=x404)));

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

