#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 30262261U;
int8_t x4 = INT8_MAX;
int32_t x10 = INT32_MAX;
volatile int32_t t2 = 496;
int8_t x13 = INT8_MAX;
int64_t x31 = INT64_MIN;
uint8_t x32 = 0U;
int8_t x33 = INT8_MAX;
volatile int32_t x36 = INT32_MIN;
volatile uint32_t t9 = 61486U;
int32_t x47 = -689680;
static int64_t x48 = INT64_MIN;
volatile uint64_t x52 = UINT64_MAX;
static volatile uint16_t x53 = 317U;
int64_t x54 = 978LL;
volatile int8_t x61 = INT8_MAX;
int32_t x65 = -213;
int16_t x71 = -12;
uint32_t x73 = 14687850U;
int16_t x74 = -1;
uint64_t x79 = 2751581792910643LLU;
volatile uint64_t t19 = 308254563010LLU;
static volatile int32_t t20 = -3574;
uint32_t x85 = 34878U;
uint64_t t21 = 4976106878LLU;
volatile uint64_t t22 = 838LLU;
volatile int8_t x93 = INT8_MAX;
int32_t x97 = INT32_MAX;
static uint8_t x101 = 85U;
int32_t x107 = -1;
volatile int8_t x110 = 1;
int8_t x124 = -44;
volatile uint64_t t28 = 17044388958637041LLU;
static volatile int16_t x127 = 1;
volatile uint64_t t29 = 9LLU;
int64_t x134 = -1LL;
int16_t x140 = INT16_MIN;
int64_t x143 = INT64_MAX;
uint64_t x149 = UINT64_MAX;
volatile int64_t x158 = INT64_MAX;
volatile int64_t t38 = -7690LL;
volatile int16_t x167 = INT16_MIN;
static uint8_t x174 = UINT8_MAX;
volatile uint64_t t41 = 1678980978939011LLU;
int8_t x195 = -8;
int8_t x201 = INT8_MAX;
int16_t x204 = INT16_MIN;
int32_t t46 = 363459;
volatile int64_t x208 = INT64_MAX;
static volatile uint64_t t49 = 67998LLU;
int8_t x221 = INT8_MIN;
int16_t x222 = -1;
static int32_t x223 = INT32_MIN;
int8_t x226 = 1;
volatile int32_t x229 = -3954431;
int64_t t53 = -48475LL;
int8_t x236 = -1;
uint64_t x238 = 14LLU;
int16_t x247 = -1;
static int32_t x255 = -697092;
int64_t t59 = 26468LL;
volatile uint32_t x262 = UINT32_MAX;
int32_t x268 = INT32_MAX;
uint64_t t62 = 10LLU;
uint8_t x269 = 53U;
int64_t x275 = -1091515711245LL;
int8_t x277 = -2;
volatile int64_t x278 = INT64_MIN;
int64_t x288 = -1LL;
static int64_t t67 = 1LL;
volatile uint8_t x297 = UINT8_MAX;
int16_t x303 = 26;
uint16_t x304 = 6770U;
int16_t x313 = -1;
int8_t x314 = INT8_MIN;
uint8_t x326 = UINT8_MAX;
static volatile int16_t x328 = 60;
int32_t x329 = -117647;
uint64_t x330 = 18LLU;
static int64_t x341 = -63751508176532425LL;
int8_t x342 = -1;
uint32_t x344 = 4400452U;
int64_t t80 = 2LL;
volatile uint16_t x346 = 46U;
int64_t x355 = INT64_MIN;
volatile int64_t t83 = 27604147491LL;
int16_t x360 = -4670;
uint8_t x375 = 26U;
static uint16_t x378 = UINT16_MAX;
volatile uint32_t x384 = UINT32_MAX;
volatile int32_t x385 = 237636;
int64_t x396 = INT64_MIN;
uint64_t t93 = 96907429LLU;
int64_t x397 = -831233LL;
int32_t x401 = -1;
uint16_t x402 = 43U;
static volatile int32_t t96 = -24;
uint32_t x410 = UINT32_MAX;
volatile int64_t t97 = 5LL;
uint8_t x413 = 13U;
uint16_t x415 = 12U;
int64_t t98 = 190LL;
static int64_t t99 = -467503446802LL;


void f0(void) {
	int16_t x1 = -1;
	static int8_t x2 = INT8_MIN;
	volatile uint32_t t0 = 4089709U;

	t0 = (x1-((x2|x3)|x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static volatile uint16_t x6 = 1984U;
	int64_t x7 = 0LL;
	int32_t x8 = -1;
	int64_t t1 = -388519396LL;

	t1 = (x5-((x6|x7)|x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	static int16_t x11 = 6027;
	static uint16_t x12 = UINT16_MAX;

	t2 = (x9-((x10|x11)|x12));

	if (t2 != -2147483392) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 0;
	static volatile uint32_t x15 = 3380113U;
	uint32_t x16 = 1812176198U;
	volatile uint32_t t3 = 98637944U;

	t3 = (x13-((x14|x15)|x16));

	if (t3 != 2479644840U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int8_t x18 = -1;
	int32_t x19 = INT32_MAX;
	static int8_t x20 = -1;
	static volatile uint64_t t4 = 515432423672LLU;

	t4 = (x17-((x18|x19)|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	int32_t x23 = INT32_MIN;
	int64_t x24 = 32228846600LL;
	volatile int64_t t5 = -102374826867152671LL;

	t5 = (x21-((x22|x23)|x24));

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 5125LLU;
	uint64_t x26 = 909443854797350535LLU;
	uint64_t x27 = 158LLU;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 812412LLU;

	t6 = (x25-((x26|x27)|x28));

	if (t6 != 8313928182057430374LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	static volatile int64_t t7 = -49118LL;

	t7 = (x29-((x30|x31)|x32));

	if (t7 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 2U;
	int64_t x35 = INT64_MAX;
	int64_t t8 = 312505546981934887LL;

	t8 = (x33-((x34|x35)|x36));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	static uint32_t x38 = 1U;
	volatile uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 29U;

	t9 = (x37-((x38|x39)|x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MAX;
	int64_t x42 = -1LL;
	int32_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	volatile int64_t t10 = -4865LL;

	t10 = (x41-((x42|x43)|x44));

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 47376622U;
	static volatile int64_t t11 = -5054865016507LL;

	t11 = (x45-((x46|x47)|x48));

	if (t11 != 9223372032560399873LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	volatile int16_t x50 = -1546;
	int16_t x51 = INT16_MIN;
	static volatile uint64_t t12 = 143717LLU;

	t12 = (x49-((x50|x51)|x52));

	if (t12 != 128LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = INT8_MIN;
	static volatile int8_t x56 = -6;
	int64_t t13 = 20084137LL;

	t13 = (x53-((x54|x55)|x56));

	if (t13 != 323LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 20935359063LL;

	t14 = (x57-((x58|x59)|x60));

	if (t14 != 2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int32_t x63 = 46;
	int64_t x64 = -1LL;
	volatile int64_t t15 = 45102888LL;

	t15 = (x61-((x62|x63)|x64));

	if (t15 != 128LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 1U;
	static uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 12936720LLU;
	volatile uint64_t t16 = 677207995LLU;

	t16 = (x65-((x66|x67)|x68));

	if (t16 != 18446744073709551404LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = 24;
	int16_t x72 = -31;
	uint32_t t17 = 940733889U;

	t17 = (x69-((x70|x71)|x72));

	if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = INT64_MIN;
	static uint8_t x76 = 0U;
	volatile int64_t t18 = 3116174400897150LL;

	t18 = (x73-((x74|x75)|x76));

	if (t18 != 14687851LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint8_t x78 = 3U;
	volatile int64_t x80 = -527LL;

	t19 = (x77-((x78|x79)|x80));

	if (t19 != 9223372036854776333LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -12237;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;
	int8_t x84 = -3;

	t20 = (x81-((x82|x83)|x84));

	if (t20 != -12236) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x86 = -1;
	static uint64_t x87 = 698LLU;
	volatile int8_t x88 = -8;

	t21 = (x85-((x86|x87)|x88));

	if (t21 != 34879LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 872525387LLU;
	uint32_t x90 = 4301U;
	int64_t x91 = 2336LL;
	int8_t x92 = INT8_MIN;

	t22 = (x89-((x90|x91)|x92));

	if (t22 != 872525406LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -1;
	int8_t x95 = -1;
	int64_t x96 = -1LL;
	static int64_t t23 = 3LL;

	t23 = (x93-((x94|x95)|x96));

	if (t23 != 128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	volatile int64_t x99 = -1051210604059393812LL;
	volatile int32_t x100 = -1;
	volatile int64_t t24 = 14837945075928LL;

	t24 = (x97-((x98|x99)|x100));

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = INT8_MIN;
	static int32_t t25 = -1;

	t25 = (x101-((x102|x103)|x104));

	if (t25 != 213) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 51U;
	static uint32_t x106 = UINT32_MAX;
	uint8_t x108 = 31U;
	volatile uint32_t t26 = 3095037U;

	t26 = (x105-((x106|x107)|x108));

	if (t26 != 52U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = INT16_MAX;
	static uint8_t x111 = UINT8_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 1LLU;

	t27 = (x109-((x110|x111)|x112));

	if (t27 != 32768LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 2533583U;
	int16_t x123 = INT16_MIN;

	t28 = (x121-((x122|x123)|x124));

	if (t28 != 18446744069414584352LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -1;
	uint64_t x126 = 25826521LLU;
	int32_t x128 = INT32_MIN;

	t29 = (x125-((x126|x127)|x128));

	if (t29 != 2121657126LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 0U;
	int32_t x130 = -8089321;
	static volatile int16_t x131 = INT16_MAX;
	uint64_t x132 = 257675075471LLU;
	uint64_t t30 = 14992223664625LLU;

	t30 = (x129-((x130|x131)|x132));

	if (t30 != 5898241LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x133 = UINT64_MAX;
	uint32_t x135 = 4126U;
	uint16_t x136 = UINT16_MAX;
	volatile uint64_t t31 = 12014098642LLU;

	t31 = (x133-((x134|x135)|x136));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 0;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t32 = 30110527;

	t32 = (x137-((x138|x139)|x140));

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	int16_t x142 = INT16_MIN;
	int32_t x144 = INT32_MAX;
	volatile int64_t t33 = -1088206998309288776LL;

	t33 = (x141-((x142|x143)|x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x145 = 3U;
	uint64_t x146 = 16947914972662293LLU;
	int64_t x147 = 1851583471093968LL;
	int8_t x148 = -8;
	uint64_t t34 = 1062826919781LLU;

	t34 = (x145-((x146|x147)|x148));

	if (t34 != 6LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x150 = 0U;
	volatile int64_t x151 = -77141521542663LL;
	static volatile uint32_t x152 = UINT32_MAX;
	static volatile uint64_t t35 = 10LLU;

	t35 = (x149-((x150|x151)|x152));

	if (t35 != 77137612636160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 112701;
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int64_t t36 = 19824237LL;

	t36 = (x153-((x154|x155)|x156));

	if (t36 != 112702LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	static uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x157-((x158|x159)|x160));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	static int32_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = -1LL;

	t38 = (x161-((x162|x163)|x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = INT16_MIN;
	static int32_t x166 = INT32_MIN;
	uint64_t x168 = 1LLU;
	uint64_t t39 = UINT64_MAX;

	t39 = (x165-((x166|x167)|x168));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 6391;
	volatile int32_t x170 = -126987320;
	uint64_t x171 = 2492LLU;
	int64_t x172 = INT64_MIN;
	static volatile uint64_t t40 = 3478828LLU;

	t40 = (x169-((x170|x171)|x172));

	if (t40 != 126991611LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	static volatile uint8_t x176 = 0U;

	t41 = (x173-((x174|x175)|x176));

	if (t41 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 20575U;
	int32_t x179 = -1;
	int32_t x180 = INT32_MIN;
	uint32_t t42 = 252320U;

	t42 = (x177-((x178|x179)|x180));

	if (t42 != 65536U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = INT8_MAX;
	volatile int32_t t43 = -4800;

	t43 = (x189-((x190|x191)|x192));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 237328U;
	volatile int32_t x196 = 0;
	volatile uint32_t t44 = 1U;

	t44 = (x193-((x194|x195)|x196));

	if (t44 != 4294967176U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	int64_t x198 = -10187LL;
	int32_t x199 = INT32_MAX;
	static volatile int16_t x200 = -1;
	volatile int64_t t45 = -27LL;

	t45 = (x197-((x198|x199)|x200));

	if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x202 = 2405U;
	static uint16_t x203 = UINT16_MAX;

	t46 = (x201-((x202|x203)|x204));

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	static volatile int16_t x206 = 2;
	static int16_t x207 = INT16_MIN;
	volatile int64_t t47 = -227154LL;

	t47 = (x205-((x206|x207)|x208));

	if (t47 != -2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	static int16_t x210 = 7693;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t48 = -838352;

	t48 = (x209-((x210|x211)|x212));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = 1;
	static int16_t x214 = INT16_MAX;
	int32_t x215 = 177982;
	uint64_t x216 = 131353627046485052LLU;

	t49 = (x213-((x214|x215)|x216));

	if (t49 != 18315390446662909954LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x217 = UINT16_MAX;
	static volatile int32_t x218 = 23762475;
	int16_t x219 = -1;
	volatile uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t50 = 47504250215833020LLU;

	t50 = (x217-((x218|x219)|x220));

	if (t50 != 65536LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t51 = 3;

	t51 = (x221-((x222|x223)|x224));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x225 = INT8_MAX;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = 1034223LL;
	int64_t t52 = 22977185159LL;

	t52 = (x225-((x226|x227)|x228));

	if (t52 != -1048448LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x230 = INT16_MIN;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;

	t53 = (x229-((x230|x231)|x232));

	if (t53 != -3954430LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = -300;
	int16_t x234 = 996;
	static int8_t x235 = INT8_MIN;
	volatile int32_t t54 = 68836;

	t54 = (x233-((x234|x235)|x236));

	if (t54 != -299) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 150LLU;
	volatile int64_t x239 = INT64_MAX;
	int64_t x240 = 407LL;
	volatile uint64_t t55 = 15700815952365197LLU;

	t55 = (x237-((x238|x239)|x240));

	if (t55 != 9223372036854775959LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = 23U;
	volatile int16_t x244 = -1;
	int32_t t56 = -108;

	t56 = (x241-((x242|x243)|x244));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = 11;
	int32_t x246 = -1;
	static int16_t x248 = -1938;
	int32_t t57 = -240;

	t57 = (x245-((x246|x247)|x248));

	if (t57 != 12) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x249 = 25233977LL;
	volatile uint32_t x250 = 4589U;
	int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MAX;
	static int64_t t58 = -526165385763882230LL;

	t58 = (x249-((x250|x251)|x252));

	if (t58 != -4269733318LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	static int64_t x254 = 725313131318LL;
	volatile uint16_t x256 = UINT16_MAX;

	t59 = (x253-((x254|x255)|x256));

	if (t59 != -9223372036854644735LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 26U;
	int32_t x259 = -1;
	int32_t x260 = INT32_MAX;
	int32_t t60 = 3;

	t60 = (x257-((x258|x259)|x260));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 11134LL;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;
	int64_t t61 = -44088LL;

	t61 = (x261-((x262|x263)|x264));

	if (t61 != 11135LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MAX;

	t62 = (x265-((x266|x267)|x268));

	if (t62 != 4294967296LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 11U;
	uint64_t x272 = 346096919347LLU;
	volatile uint64_t t63 = 49946706LLU;

	t63 = (x269-((x270|x271)|x272));

	if (t63 != 9223371690757856506LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = -2207544124259LL;
	int32_t x274 = INT32_MIN;
	static int64_t x276 = -1LL;
	int64_t t64 = 0LL;

	t64 = (x273-((x274|x275)|x276));

	if (t64 != -2207544124258LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x279 = 1U;
	volatile int16_t x280 = INT16_MIN;
	volatile int64_t t65 = -17LL;

	t65 = (x277-((x278|x279)|x280));

	if (t65 != 32765LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = 15;
	int16_t x283 = -1992;
	int16_t x284 = INT16_MIN;
	volatile int32_t t66 = -394518;

	t66 = (x281-((x282|x283)|x284));

	if (t66 != 2240) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x285 = INT32_MAX;
	static int16_t x286 = INT16_MIN;
	volatile int8_t x287 = INT8_MIN;

	t67 = (x285-((x286|x287)|x288));

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x293 = 729U;
	volatile uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 621722720U;
	volatile uint32_t t68 = 228872122U;

	t68 = (x293-((x294|x295)|x296));

	if (t68 != 3673245146U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x298 = INT16_MIN;
	static volatile int64_t x299 = -1LL;
	uint16_t x300 = 440U;
	volatile int64_t t69 = -284972615897LL;

	t69 = (x297-((x298|x299)|x300));

	if (t69 != 256LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 179;
	volatile uint16_t x302 = 110U;
	int32_t t70 = -31759023;

	t70 = (x301-((x302|x303)|x304));

	if (t70 != -6603) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	static int16_t x306 = INT16_MIN;
	static volatile int16_t x307 = INT16_MIN;
	volatile uint32_t x308 = 32U;
	uint32_t t71 = 11U;

	t71 = (x305-((x306|x307)|x308));

	if (t71 != 2147516383U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -1;
	int16_t x310 = -1;
	uint16_t x311 = 55U;
	volatile int32_t x312 = -140794698;
	volatile int32_t t72 = -5276286;

	t72 = (x309-((x310|x311)|x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MAX;
	uint64_t t73 = 27LLU;

	t73 = (x313-((x314|x315)|x316));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x317 = 1U;
	int8_t x318 = 0;
	int32_t x319 = 944200;
	volatile int64_t x320 = INT64_MAX;
	int64_t t74 = -490335351244448LL;

	t74 = (x317-((x318|x319)|x320));

	if (t74 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x321 = 293704LLU;
	int16_t x322 = -1;
	uint32_t x323 = 516198103U;
	int32_t x324 = -1;
	volatile uint64_t t75 = 3019698154359855LLU;

	t75 = (x321-((x322|x323)|x324));

	if (t75 != 18446744069414878025LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	volatile int32_t t76 = -585572592;

	t76 = (x325-((x326|x327)|x328));

	if (t76 != 32385) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x331 = INT32_MAX;
	static uint32_t x332 = 0U;
	volatile uint64_t t77 = 467459931LLU;

	t77 = (x329-((x330|x331)|x332));

	if (t77 != 18446744071561950322LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x333 = UINT16_MAX;
	static int16_t x334 = INT16_MIN;
	static volatile int32_t x335 = 179161;
	uint8_t x336 = 5U;
	int32_t t78 = 5;

	t78 = (x333-((x334|x335)|x336));

	if (t78 != 82978) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	static uint32_t x338 = 133824U;
	int32_t x339 = INT32_MIN;
	volatile uint32_t x340 = 443U;
	uint32_t t79 = 10502U;

	t79 = (x337-((x338|x339)|x340));

	if (t79 != 2147316741U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x343 = INT16_MAX;

	t80 = (x341-((x342|x343)|x344));

	if (t80 != -63751512471499720LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = 11;
	int64_t t81 = -3501LL;

	t81 = (x345-((x346|x347)|x348));

	if (t81 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = 24;
	int16_t x350 = INT16_MIN;
	volatile int8_t x351 = -1;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t82 = 449280LL;

	t82 = (x349-((x350|x351)|x352));

	if (t82 != 25LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x354 = INT8_MIN;
	static volatile int16_t x356 = INT16_MIN;

	t83 = (x353-((x354|x355)|x356));

	if (t83 != -32640LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = 2370436259968LLU;
	uint64_t x358 = 12LLU;
	volatile int32_t x359 = 6;
	volatile uint64_t t84 = 1107214729315328LLU;

	t84 = (x357-((x358|x359)|x360));

	if (t84 != 2370436264626LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	uint16_t x362 = 2U;
	int64_t x363 = -1LL;
	volatile int64_t x364 = 4909849374182LL;
	int64_t t85 = -1497089LL;

	t85 = (x361-((x362|x363)|x364));

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -1LL;
	static volatile int16_t x366 = INT16_MAX;
	static int64_t x367 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;
	int64_t t86 = 51950371136210182LL;

	t86 = (x365-((x366|x367)|x368));

	if (t86 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x369 = UINT32_MAX;
	volatile uint64_t x370 = 590685003057184369LLU;
	volatile int64_t x371 = INT64_MAX;
	static uint16_t x372 = 3962U;
	static uint64_t t87 = 45219208760509LLU;

	t87 = (x369-((x370|x371)|x372));

	if (t87 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = 23213U;
	static volatile int64_t x374 = -7878274918269LL;
	static int64_t x376 = 1815604LL;
	volatile int64_t t88 = -5677LL;

	t88 = (x373-((x374|x375)|x376));

	if (t88 != 7878274735598LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = -18;
	uint8_t x379 = 33U;
	static int64_t x380 = 1LL;
	volatile int64_t t89 = -580760169281LL;

	t89 = (x377-((x378|x379)|x380));

	if (t89 != -65553LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = 79;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;
	volatile uint32_t t90 = 3592U;

	t90 = (x381-((x382|x383)|x384));

	if (t90 != 80U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x386 = INT64_MAX;
	static int32_t x387 = -11106844;
	static int8_t x388 = INT8_MAX;
	volatile int64_t t91 = 3732717593LL;

	t91 = (x385-((x386|x387)|x388));

	if (t91 != 237637LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = -3025;
	volatile uint16_t x391 = 577U;
	volatile int64_t x392 = INT64_MAX;
	int64_t t92 = -892683504LL;

	t92 = (x389-((x390|x391)|x392));

	if (t92 != -2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = 27;
	uint64_t x394 = 19830519934LLU;
	uint64_t x395 = 5927887998110660592LLU;

	t93 = (x393-((x394|x395)|x396));

	if (t93 != 3295484019344408605LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = -703;
	static volatile int64_t x399 = -29664555293576874LL;
	int8_t x400 = INT8_MIN;
	volatile int64_t t94 = -77115302LL;

	t94 = (x397-((x398|x399)|x400));

	if (t94 != -831192LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x403 = INT16_MAX;
	int32_t x404 = -14636899;
	static volatile int32_t t95 = 1;

	t95 = (x401-((x402|x403)|x404));

	if (t95 != 14614528) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint8_t x406 = 62U;
	int8_t x407 = INT8_MAX;
	uint8_t x408 = UINT8_MAX;

	t96 = (x405-((x406|x407)|x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MAX;
	static volatile uint16_t x411 = 27U;
	int8_t x412 = INT8_MIN;

	t97 = (x409-((x410|x411)|x412));

	if (t97 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x414 = INT8_MIN;
	int64_t x416 = 140677731192832LL;

	t98 = (x413-((x414|x415)|x416));

	if (t98 != 129LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -1;
	uint16_t x418 = 12283U;
	int8_t x419 = 2;
	int64_t x420 = -1LL;

	t99 = (x417-((x418|x419)|x420));

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

