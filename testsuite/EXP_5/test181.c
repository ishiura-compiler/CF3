#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x9 = 2243410231870LLU;
int32_t x20 = INT32_MAX;
static volatile uint32_t t2 = 344U;
volatile int32_t x23 = -1;
static uint64_t t5 = 1LLU;
int8_t x35 = INT8_MIN;
volatile int64_t x36 = -1LL;
static int16_t x46 = INT16_MIN;
int16_t x48 = INT16_MAX;
int64_t x57 = -5636LL;
volatile uint64_t t11 = 8988880161072486852LLU;
int16_t x65 = INT16_MIN;
static uint64_t x71 = 262LLU;
volatile int64_t x75 = INT64_MIN;
int64_t t14 = -27706421860819LL;
uint8_t x77 = UINT8_MAX;
volatile uint32_t x78 = 2U;
int16_t x79 = INT16_MAX;
static int64_t t16 = -2906LL;
static volatile uint8_t x93 = 21U;
static int8_t x99 = 0;
int64_t x106 = -3786571860213461101LL;
int8_t x111 = INT8_MIN;
uint64_t t23 = 19LLU;
int8_t x119 = INT8_MAX;
static int64_t t24 = 248944677989LL;
uint8_t x125 = UINT8_MAX;
int8_t x129 = INT8_MAX;
int8_t x133 = INT8_MIN;
volatile uint16_t x134 = 901U;
volatile uint64_t t28 = 763053893379LLU;
volatile int32_t t29 = 26911;
static int16_t x154 = INT16_MAX;
uint32_t x170 = UINT32_MAX;
int16_t x173 = INT16_MAX;
uint16_t x174 = 9249U;
int32_t x175 = 17362;
int64_t x186 = -229582033LL;
uint32_t x192 = 950U;
uint8_t x195 = 0U;
int32_t x198 = 1363142;
volatile uint64_t x200 = UINT64_MAX;
uint32_t x202 = 633104657U;
volatile int8_t x206 = -1;
int64_t x226 = INT64_MIN;
volatile uint64_t t44 = 3052909LLU;
uint8_t x233 = UINT8_MAX;
static volatile int64_t x242 = INT64_MIN;
volatile int64_t t48 = -917262522LL;
volatile int64_t x248 = 1LL;
int8_t x260 = -1;
uint8_t x262 = 54U;
volatile uint32_t t52 = 492U;
static volatile int16_t x265 = INT16_MIN;
volatile uint8_t x266 = UINT8_MAX;
uint8_t x269 = 6U;
volatile int8_t x273 = 22;
volatile int64_t t55 = 117110137LL;
int32_t x277 = -825875;
uint32_t x282 = UINT32_MAX;
volatile int64_t t57 = -15839263LL;
uint16_t x289 = UINT16_MAX;
static int32_t x291 = 214291;
volatile int8_t x292 = INT8_MIN;
volatile int32_t x305 = -122;
volatile uint64_t t67 = 266968930089385860LLU;
static volatile int64_t t68 = INT64_MAX;
int16_t x338 = INT16_MIN;
static int32_t x339 = 10803492;
uint16_t x341 = 293U;
static int8_t x352 = 18;
static volatile int8_t x355 = INT8_MIN;
static int64_t x356 = INT64_MIN;
static volatile int64_t t75 = -24555LL;
int16_t x366 = INT16_MIN;
int16_t x368 = INT16_MIN;
static int32_t x378 = -6519432;
int32_t x381 = -1;
static int8_t x382 = INT8_MIN;
uint64_t x384 = 9786271953LLU;
static uint16_t x386 = 8150U;
static int32_t x396 = INT32_MIN;
static int16_t x398 = 185;
uint64_t t83 = 9LLU;
volatile int32_t x405 = INT32_MIN;
uint64_t t86 = UINT64_MAX;
int16_t x428 = -1;
static int8_t x431 = INT8_MIN;
int64_t t90 = -8944500931454605LL;
uint8_t x441 = 0U;
volatile int32_t t93 = 512;
volatile uint32_t t95 = 126U;
int16_t x469 = INT16_MIN;


void f0(void) {
	int64_t x10 = INT64_MAX;
	uint64_t x11 = 148892924LLU;
	volatile uint16_t x12 = 0U;
	static volatile uint64_t t0 = 261212184869397050LLU;

	t0 = (x9|((x10-x11)+x12));

	if (t0 != 9223372036715025215LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = 3532331LL;
	volatile uint32_t x15 = UINT32_MAX;
	volatile uint8_t x16 = 5U;
	volatile int64_t t1 = 3056005860673LL;

	t1 = (x13|((x14-x15)+x16));

	if (t1 != -6607LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 2U;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;

	t2 = (x17|((x18-x19)+x20));

	if (t2 != 2147483522U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x21 = INT32_MIN;
	static uint64_t x22 = 15733648141247LLU;
	int32_t x24 = INT32_MAX;
	volatile uint64_t t3 = 36282LLU;

	t3 = (x21|((x22-x23)+x24));

	if (t3 != 18446744072745003967LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = 0;
	int32_t x26 = INT32_MIN;
	static uint64_t x27 = 8434802079515234465LLU;
	volatile int32_t x28 = -160;
	volatile uint64_t t4 = 11005431LLU;

	t4 = (x25|((x26-x27)+x28));

	if (t4 != 10011941992046833343LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = 3LL;
	uint32_t x30 = UINT32_MAX;
	uint64_t x31 = 392043435082680117LLU;
	int32_t x32 = INT32_MIN;

	t5 = (x29|((x30-x31)+x32));

	if (t5 != 18054700640774355147LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	static int32_t x34 = -2;
	volatile int64_t t6 = 95421813986021841LL;

	t6 = (x33|((x34-x35)+x36));

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	volatile int16_t x38 = INT16_MAX;
	uint16_t x39 = 88U;
	int32_t x40 = INT32_MIN;
	int64_t t7 = -31853194378127761LL;

	t7 = (x37|((x38-x39)+x40));

	if (t7 != -2147450969LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = 21073842LL;
	int8_t x42 = 1;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 4058099LLU;
	volatile uint64_t t8 = 0LLU;

	t8 = (x41|((x42-x43)+x44));

	if (t8 != 25030647LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 1118290433019187LLU;
	static uint64_t x47 = 66650LLU;
	uint64_t t9 = 473833495642078LLU;

	t9 = (x45|((x46-x47)+x48));

	if (t9 != 18446744073709486007LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x58 = 69715941LL;
	int16_t x59 = -1;
	volatile int8_t x60 = INT8_MIN;
	static int64_t t10 = -45716937986901LL;

	t10 = (x57|((x58-x59)+x60));

	if (t10 != -4098LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = 79;
	uint64_t x62 = 38380523LLU;
	int32_t x63 = INT32_MAX;
	volatile int8_t x64 = INT8_MIN;

	t11 = (x61|((x62-x63)+x64));

	if (t11 != 18446744071600448367LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -1;
	int16_t x68 = -1642;
	static int32_t t12 = 313;

	t12 = (x65|((x66-x67)+x68));

	if (t12 != -1386) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x69 = -1;
	int32_t x70 = -1;
	static uint32_t x72 = 13U;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x69|((x70-x71)+x72));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -21;
	static int32_t x74 = INT32_MIN;
	int16_t x76 = INT16_MAX;

	t14 = (x73|((x74-x75)+x76));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x80 = INT16_MAX;
	uint32_t t15 = 354371U;

	t15 = (x77|((x78-x79)+x80));

	if (t15 != 255U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;

	t16 = (x81|((x82-x83)+x84));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 27U;
	static int8_t x86 = -2;
	volatile uint32_t x87 = 1553759U;
	int64_t x88 = INT64_MIN;
	volatile int64_t t17 = 2061775049701256951LL;

	t17 = (x85|((x86-x87)+x88));

	if (t17 != -9223372032561362273LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = INT64_MAX;
	int32_t x90 = 9;
	static int8_t x91 = INT8_MIN;
	int64_t x92 = -1LL;
	int64_t t18 = INT64_MAX;

	t18 = (x89|((x90-x91)+x92));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x94 = 15U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MAX;
	volatile uint32_t t19 = 225510456U;

	t19 = (x93|((x94-x95)+x96));

	if (t19 != 2147516447U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 19;
	static int16_t x98 = 48;
	int8_t x100 = INT8_MAX;
	volatile int32_t t20 = -12;

	t20 = (x97|((x98-x99)+x100));

	if (t20 != 191) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	int16_t x103 = 1672;
	int8_t x104 = INT8_MIN;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x101|((x102-x103)+x104));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = -1;
	int8_t x107 = INT8_MIN;
	volatile uint64_t x108 = 24900215924LLU;
	uint64_t t22 = UINT64_MAX;

	t22 = (x105|((x106-x107)+x108));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = -13;
	static volatile int8_t x110 = INT8_MIN;
	volatile uint64_t x112 = 831605651067LLU;

	t23 = (x109|((x110-x111)+x112));

	if (t23 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -264378482631LL;
	int64_t x118 = -3879521174713420029LL;
	int8_t x120 = INT8_MAX;

	t24 = (x117|((x118-x119)+x120));

	if (t24 != -223542134981LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -13857949461651LL;
	volatile uint16_t x122 = UINT16_MAX;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;
	uint64_t t25 = 116221951LLU;

	t25 = (x121|((x122-x123)+x124));

	if (t25 != 18446730215760122733LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x126 = UINT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MIN;
	uint64_t t26 = 28899900991839932LLU;

	t26 = (x125|((x126-x127)+x128));

	if (t26 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = -13;
	int64_t t27 = -3680636842670995877LL;

	t27 = (x129|((x130-x131)+x132));

	if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x135 = 1;
	uint64_t x136 = UINT64_MAX;

	t28 = (x133|((x134-x135)+x136));

	if (t28 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = -21;
	int8_t x146 = -6;
	volatile int8_t x147 = 5;
	int32_t x148 = -33;

	t29 = (x145|((x146-x147)+x148));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;
	uint32_t t30 = UINT32_MAX;

	t30 = (x149|((x150-x151)+x152));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MIN;
	static uint32_t x155 = 17662038U;
	int32_t x156 = -271;
	volatile int64_t t31 = -71721944989206LL;

	t31 = (x153|((x154-x155)+x156));

	if (t31 != -9223372032577438054LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x165 = -1;
	volatile int64_t x166 = 211255403LL;
	static int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;
	static int64_t t32 = 519072LL;

	t32 = (x165|((x166-x167)+x168));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = UINT64_MAX;
	static volatile int8_t x171 = INT8_MIN;
	int64_t x172 = 13LL;
	uint64_t t33 = UINT64_MAX;

	t33 = (x169|((x170-x171)+x172));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x176 = 8365LLU;
	volatile uint64_t t34 = 1603859681342944LLU;

	t34 = (x173|((x174-x175)+x176));

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = -1934;
	volatile uint64_t x183 = 31517494624814LLU;
	volatile int32_t x184 = 2381;
	uint64_t t35 = 1840LLU;

	t35 = (x181|((x182-x183)+x184));

	if (t35 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = INT64_MAX;
	uint32_t x187 = 751466948U;
	int32_t x188 = INT32_MIN;
	volatile int64_t t36 = 67009952426763886LL;

	t36 = (x185|((x186-x187)+x188));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = INT64_MAX;
	int16_t x190 = -1;
	int32_t x191 = 234;
	static int64_t t37 = INT64_MAX;

	t37 = (x189|((x190-x191)+x192));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MAX;
	static volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t38 = 170763735797292431LLU;

	t38 = (x193|((x194-x195)+x196));

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = 1634U;
	volatile uint64_t x199 = 756053231452LLU;
	static volatile uint64_t t39 = 67199945959145LLU;

	t39 = (x197|((x198-x199)+x200));

	if (t39 != 18446743317657683819LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MIN;
	static int32_t x203 = 0;
	int32_t x204 = INT32_MIN;
	uint32_t t40 = 816829U;

	t40 = (x201|((x202-x203)+x204));

	if (t40 != 2780588305U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	int64_t x208 = -95399LL;
	volatile int64_t t41 = -15412178010957738LL;

	t41 = (x205|((x206-x207)+x208));

	if (t41 != -95399LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -2;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = -565640311509422LL;
	int64_t x216 = INT64_MIN;
	int64_t t42 = -798792323866309LL;

	t42 = (x213|((x214-x215)+x216));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x221 = -118;
	volatile uint16_t x222 = 4U;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	volatile uint64_t t43 = 161551LLU;

	t43 = (x221|((x222-x223)+x224));

	if (t43 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	uint16_t x228 = UINT16_MAX;

	t44 = (x225|((x226-x227)+x228));

	if (t44 != 9223372036854906879LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x229 = 6U;
	volatile uint32_t x230 = 60149519U;
	int16_t x231 = -1;
	int32_t x232 = 2027293;
	uint32_t t45 = 3307194U;

	t45 = (x229|((x230-x231)+x232));

	if (t45 != 62176815U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = INT16_MIN;
	int32_t x235 = 7195;
	uint16_t x236 = 21208U;
	static int32_t t46 = 101;

	t46 = (x233|((x234-x235)+x236));

	if (t46 != -18689) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = 241;
	int64_t x238 = -1LL;
	int8_t x239 = INT8_MAX;
	int16_t x240 = -1;
	int64_t t47 = -1040315504LL;

	t47 = (x237|((x238-x239)+x240));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = -1;
	volatile int16_t x243 = -1;
	uint8_t x244 = 1U;

	t48 = (x241|((x242-x243)+x244));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x245 = 1776;
	int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	static volatile int64_t t49 = -9286016LL;

	t49 = (x245|((x246-x247)+x248));

	if (t49 != 2147485424LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = -3974721329LL;
	uint8_t x250 = 1U;
	static uint16_t x251 = UINT16_MAX;
	int64_t x252 = INT64_MAX;
	static int64_t t50 = -33303252LL;

	t50 = (x249|((x250-x251)+x252));

	if (t50 != -28465LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x257 = UINT32_MAX;
	uint64_t x258 = 3580LLU;
	uint32_t x259 = 629941266U;
	uint64_t t51 = UINT64_MAX;

	t51 = (x257|((x258-x259)+x260));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x261 = INT16_MIN;
	int32_t x263 = 1094;
	uint32_t x264 = 115251U;

	t52 = (x261|((x262-x263)+x264));

	if (t52 != 4294950435U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x267 = -1LL;
	int8_t x268 = INT8_MIN;
	int64_t t53 = 846258400659LL;

	t53 = (x265|((x266-x267)+x268));

	if (t53 != -32640LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x270 = -1;
	int32_t x271 = -1042;
	uint16_t x272 = 90U;
	volatile int32_t t54 = 253095292;

	t54 = (x269|((x270-x271)+x272));

	if (t54 != 1135) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x274 = INT8_MIN;
	volatile int32_t x275 = -194951242;
	int64_t x276 = 3608952719209LL;

	t55 = (x273|((x274-x275)+x276));

	if (t55 != 3609147670327LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x278 = 8;
	volatile int64_t x279 = -1LL;
	volatile int8_t x280 = 1;
	volatile int64_t t56 = 1LL;

	t56 = (x277|((x278-x279)+x280));

	if (t56 != -825873LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = -3LL;
	int8_t x283 = INT8_MAX;
	uint8_t x284 = 45U;

	t57 = (x281|((x282-x283)+x284));

	if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x285 = 0;
	uint16_t x286 = 141U;
	uint8_t x287 = 0U;
	static int8_t x288 = -17;
	volatile int32_t t58 = 3;

	t58 = (x285|((x286-x287)+x288));

	if (t58 != 124) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x290 = 0;
	static int32_t t59 = 75;

	t59 = (x289|((x290-x291)+x292));

	if (t59 != -196609) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = 218074U;
	static int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int64_t t60 = 25621148LL;

	t60 = (x293|((x294-x295)+x296));

	if (t60 != -9223372036854623269LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MAX;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 0U;
	volatile uint32_t x300 = UINT32_MAX;
	static uint64_t t61 = 217406882502575LLU;

	t61 = (x297|((x298-x299)+x300));

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x301 = 2U;
	static volatile int8_t x302 = INT8_MIN;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 124U;
	volatile uint32_t t62 = 2653U;

	t62 = (x301|((x302-x303)+x304));

	if (t62 != 4294901759U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x306 = -1;
	volatile int16_t x307 = 88;
	static int8_t x308 = INT8_MIN;
	int32_t t63 = -10;

	t63 = (x305|((x306-x307)+x308));

	if (t63 != -89) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x309 = 556;
	static uint64_t x310 = 545697681828LLU;
	static int16_t x311 = -1;
	volatile uint8_t x312 = 0U;
	uint64_t t64 = 5860668402731LLU;

	t64 = (x309|((x310-x311)+x312));

	if (t64 != 545697682349LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	uint32_t x316 = 19883U;
	static uint32_t t65 = 43U;

	t65 = (x313|((x314-x315)+x316));

	if (t65 != 2147536299U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = 12;
	int32_t x319 = -1;
	volatile int64_t x320 = 2421LL;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x317|((x318-x319)+x320));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = 1174190U;
	uint64_t x322 = 145888880923652LLU;
	int8_t x323 = INT8_MAX;
	uint16_t x324 = UINT16_MAX;

	t67 = (x321|((x322-x323)+x324));

	if (t67 != 145888882064302LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = INT64_MAX;
	uint32_t x326 = 3U;
	uint32_t x327 = 45576336U;
	uint32_t x328 = 117U;

	t68 = (x325|((x326-x327)+x328));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = -37;
	volatile int16_t x330 = INT16_MIN;
	volatile uint32_t x331 = 15U;
	int64_t x332 = 15524972540680155LL;
	static int64_t t69 = -3109LL;

	t69 = (x329|((x330-x331)+x332));

	if (t69 != -33LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = 7;
	static volatile uint32_t x334 = 4U;
	volatile int16_t x335 = -2;
	int64_t x336 = INT64_MIN;
	int64_t t70 = 166LL;

	t70 = (x333|((x334-x335)+x336));

	if (t70 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = INT64_MAX;
	int8_t x340 = 0;
	volatile int64_t t71 = -117352580602923335LL;

	t71 = (x337|((x338-x339)+x340));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x342 = -1;
	volatile int8_t x343 = INT8_MIN;
	static volatile int64_t x344 = INT64_MIN;
	int64_t t72 = 39613494163810075LL;

	t72 = (x341|((x342-x343)+x344));

	if (t72 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x345 = 0U;
	static uint8_t x346 = 1U;
	volatile int32_t x347 = -1;
	int64_t x348 = -2LL;
	volatile int64_t t73 = 2570371126735LL;

	t73 = (x345|((x346-x347)+x348));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x349 = 290790LL;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	static volatile int64_t t74 = -268041990221LL;

	t74 = (x349|((x350-x351)+x352));

	if (t74 != 290807LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int64_t x354 = -1LL;

	t75 = (x353|((x354-x355)+x356));

	if (t75 != -2147483521LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x357 = 463217;
	int32_t x358 = -145;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = -5;
	static int32_t t76 = -31536233;

	t76 = (x357|((x358-x359)+x360));

	if (t76 != -133) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x365 = -1;
	int8_t x367 = -52;
	volatile int32_t t77 = -284868;

	t77 = (x365|((x366-x367)+x368));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 90605LLU;
	uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = 179;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x373|((x374-x375)+x376));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = UINT32_MAX;
	static uint64_t x379 = 519571254LLU;
	static int8_t x380 = INT8_MIN;
	static volatile uint64_t t79 = UINT64_MAX;

	t79 = (x377|((x378-x379)+x380));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x383 = 40;
	uint64_t t80 = UINT64_MAX;

	t80 = (x381|((x382-x383)+x384));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x387 = -1;
	static int16_t x388 = INT16_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = (x385|((x386-x387)+x388));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = 499058380399LL;
	uint64_t t82 = 4371367547200LLU;

	t82 = (x393|((x394-x395)+x396));

	if (t82 != 18446743572503724031LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x397 = 217460LLU;
	static uint64_t x399 = 276LLU;
	int32_t x400 = INT32_MAX;

	t83 = (x397|((x398-x399)+x400));

	if (t83 != 2147483636LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x401 = -1;
	volatile int8_t x402 = -1;
	static int8_t x403 = -2;
	int32_t x404 = 76;
	int32_t t84 = 102532;

	t84 = (x401|((x402-x403)+x404));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x406 = 8962489082069LL;
	int8_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	static volatile int64_t t85 = 904LL;

	t85 = (x405|((x406-x407)+x408));

	if (t85 != -1107599147LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = -1;
	volatile uint8_t x414 = 1U;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MAX;

	t86 = (x413|((x414-x415)+x416));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x417 = 7960870LL;
	int8_t x418 = -1;
	uint8_t x419 = 4U;
	volatile int8_t x420 = -1;
	int64_t t87 = 5LL;

	t87 = (x417|((x418-x419)+x420));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x421 = INT32_MIN;
	volatile int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	volatile int64_t t88 = 8906LL;

	t88 = (x421|((x422-x423)+x424));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x425 = -1699352148464LL;
	uint64_t x426 = 78558961198769LLU;
	static uint64_t x427 = 236471445130015461LLU;
	volatile uint64_t t89 = 893861LLU;

	t89 = (x425|((x426-x427)+x428));

	if (t89 != 18446744058660026331LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = INT64_MAX;
	int16_t x430 = INT16_MIN;
	int8_t x432 = -1;

	t90 = (x429|((x430-x431)+x432));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x437 = UINT16_MAX;
	volatile uint32_t x438 = 79651061U;
	volatile int64_t x439 = -1LL;
	int32_t x440 = INT32_MAX;
	int64_t t91 = -1146560LL;

	t91 = (x437|((x438-x439)+x440));

	if (t91 != 2227175423LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x442 = -1961;
	int16_t x443 = INT16_MIN;
	int8_t x444 = 5;
	int32_t t92 = 242544305;

	t92 = (x441|((x442-x443)+x444));

	if (t92 != 30812) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = 2U;
	int32_t x446 = -1;
	int8_t x447 = -1;
	int32_t x448 = -1;

	t93 = (x445|((x446-x447)+x448));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = -37928;
	int32_t x450 = -1;
	static int64_t x451 = INT64_MAX;
	uint32_t x452 = UINT32_MAX;
	volatile int64_t t94 = -195398564LL;

	t94 = (x449|((x450-x451)+x452));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x453 = INT32_MIN;
	volatile int32_t x454 = 114990;
	uint32_t x455 = 101102U;
	uint16_t x456 = UINT16_MAX;

	t95 = (x453|((x454-x455)+x456));

	if (t95 != 2147563071U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x461 = INT16_MIN;
	int8_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	int32_t t96 = 13462;

	t96 = (x461|((x462-x463)+x464));

	if (t96 != -32641) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x465 = -1;
	int32_t x466 = INT32_MIN;
	uint64_t x467 = 6173698058LLU;
	static volatile int8_t x468 = -1;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x465|((x466-x467)+x468));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x470 = -7;
	uint16_t x471 = 14301U;
	uint64_t x472 = 0LLU;
	uint64_t t98 = 3714708960385496147LLU;

	t98 = (x469|((x470-x471)+x472));

	if (t98 != 18446744073709537308LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x473 = 284LLU;
	uint64_t x474 = 17086460266773746LLU;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MIN;
	volatile uint64_t t99 = 16794171908602LLU;

	t99 = (x473|((x474-x475)+x476));

	if (t99 != 9240458497121582590LLU) { NG(); } else { ; }
	
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

