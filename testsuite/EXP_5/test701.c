#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
uint8_t x12 = 8U;
int16_t x19 = INT16_MIN;
int64_t x29 = -1LL;
int16_t x30 = -1;
int64_t t7 = -77201742778689LL;
uint8_t x34 = 3U;
volatile int32_t t8 = -21784;
static int32_t t9 = 221250;
static int64_t x42 = -1LL;
int16_t x45 = INT16_MIN;
volatile uint64_t t11 = 2053704369581LLU;
int32_t t14 = -22855862;
int64_t x65 = INT64_MIN;
static int64_t t16 = 54707LL;
int32_t x69 = INT32_MIN;
volatile int64_t x70 = INT64_MIN;
volatile int32_t t19 = -53;
uint16_t x86 = 9U;
volatile uint16_t x87 = UINT16_MAX;
uint64_t x88 = UINT64_MAX;
uint8_t x94 = 1U;
int32_t x96 = 2;
static int8_t x100 = -1;
volatile uint64_t t25 = 798633684049575LLU;
int8_t x110 = 57;
uint64_t x114 = UINT64_MAX;
uint64_t x122 = 2093090299LLU;
static int32_t x123 = INT32_MAX;
static int16_t x126 = INT16_MIN;
int64_t t30 = 213686771LL;
int8_t x135 = 4;
volatile int8_t x139 = -1;
static int16_t x142 = INT16_MIN;
int8_t x145 = INT8_MIN;
volatile int32_t x146 = 2866;
int8_t x153 = INT8_MAX;
volatile int32_t t36 = 11743;
uint8_t x165 = 25U;
volatile int64_t x181 = INT64_MIN;
static int32_t x183 = INT32_MIN;
uint64_t x184 = UINT64_MAX;
volatile int16_t x185 = -1405;
static volatile uint16_t x188 = 9625U;
volatile int8_t x196 = INT8_MIN;
int64_t t45 = 336670469027019LL;
static int8_t x200 = INT8_MAX;
static uint16_t x208 = 22U;
int32_t x211 = INT32_MIN;
uint64_t t48 = UINT64_MAX;
int32_t x223 = -1;
volatile int32_t x224 = -17307084;
int8_t x226 = INT8_MIN;
uint32_t x227 = UINT32_MAX;
int16_t x228 = 5635;
volatile uint32_t t52 = 35U;
volatile int16_t x234 = -1;
static int64_t t55 = 463040442770LL;
static int16_t x244 = -1;
uint16_t x249 = 28U;
int8_t x250 = INT8_MIN;
static int8_t x254 = 2;
int16_t x256 = -6621;
static volatile uint16_t x266 = 285U;
uint32_t x267 = UINT32_MAX;
int32_t x268 = -1;
static int8_t x274 = INT8_MIN;
uint64_t x287 = 3064658925840407LLU;
uint16_t x288 = 1093U;
int16_t x290 = -73;
volatile int32_t t67 = 853211;
int8_t x299 = INT8_MIN;
static int32_t x306 = -4515736;
uint16_t x317 = 1562U;
volatile int16_t x322 = INT16_MIN;
uint64_t x323 = 785998LLU;
uint64_t x341 = 39806758865368046LLU;
int16_t x345 = INT16_MIN;
uint32_t x348 = UINT32_MAX;
volatile uint32_t t81 = 32711U;
volatile int8_t x359 = 2;
int16_t x361 = -4883;
int32_t x366 = INT32_MIN;
int64_t t86 = -96186655LL;
int64_t x369 = -699472042173211437LL;
volatile int64_t t87 = -181LL;
static int8_t x379 = INT8_MAX;
uint32_t x380 = UINT32_MAX;
int64_t x382 = -1LL;
int8_t x383 = 1;
int16_t x386 = INT16_MAX;
int16_t x387 = INT16_MIN;
volatile uint64_t x397 = UINT64_MAX;
static int8_t x399 = INT8_MAX;
int32_t x410 = -1;
int32_t t97 = 329408280;
int64_t x419 = -2802697534LL;
uint16_t x420 = 3016U;
uint8_t x422 = UINT8_MAX;
int64_t x423 = INT64_MIN;
volatile int8_t x424 = INT8_MAX;


void f0(void) {
	static volatile uint16_t x1 = 3U;
	int8_t x2 = INT8_MIN;
	int8_t x3 = -1;
	uint16_t x4 = 3U;
	int32_t t0 = 1;

	t0 = (x1|((x2%x3)-x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 7LLU;
	int64_t x7 = -1538633107397LL;
	int16_t x8 = INT16_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = (x5|((x6%x7)-x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	uint16_t x10 = 2U;
	static int8_t x11 = -48;
	static int32_t t2 = 27;

	t2 = (x9|((x10%x11)-x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MAX;
	uint32_t t3 = 27597241U;

	t3 = (x13|((x14%x15)-x16));

	if (t3 != 65535U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static int32_t x18 = INT32_MIN;
	int8_t x20 = -1;
	int32_t t4 = INT32_MAX;

	t4 = (x17|((x18%x19)-x20));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -1853351;
	uint64_t x22 = 629449852870662610LLU;
	static int8_t x23 = INT8_MIN;
	int64_t x24 = -719592308400010LL;
	uint64_t t5 = 22LLU;

	t5 = (x21|((x22%x23)-x24));

	if (t5 != 18446744073708763485LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x26 = 9940U;
	int32_t x27 = -35735557;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 5417;

	t6 = (x25|((x26%x27)-x28));

	if (t6 != 10111) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MAX;

	t7 = (x29|((x30%x31)-x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static uint16_t x35 = 83U;
	static int8_t x36 = -2;

	t8 = (x33|((x34%x35)-x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -35;
	int16_t x38 = INT16_MAX;
	volatile uint8_t x39 = 2U;
	int16_t x40 = INT16_MAX;

	t9 = (x37|((x38%x39)-x40));

	if (t9 != -33) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int32_t x43 = INT32_MIN;
	volatile int8_t x44 = INT8_MAX;
	volatile int64_t t10 = -45389581920663496LL;

	t10 = (x41|((x42%x43)-x44));

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	static uint64_t x47 = UINT64_MAX;
	int16_t x48 = INT16_MIN;

	t11 = (x45|((x46%x47)-x48));

	if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -49;
	uint64_t x50 = 23996293186259489LLU;
	uint16_t x51 = 1U;
	volatile int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 2LLU;

	t12 = (x49|((x50%x51)-x52));

	if (t12 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1132581033320LLU;
	static int32_t x54 = -45955;
	volatile int8_t x55 = 25;
	uint8_t x56 = 62U;
	uint64_t t13 = 10844798447009LLU;

	t13 = (x53|((x54%x55)-x56));

	if (t13 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = -1;
	int8_t x59 = 7;
	int32_t x60 = -21287285;

	t14 = (x57|((x58%x59)-x60));

	if (t14 != -2126196364) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	uint64_t x62 = 130362122117058750LLU;
	int16_t x63 = INT16_MIN;
	volatile int8_t x64 = INT8_MIN;
	static uint64_t t15 = 6900633839888LLU;

	t15 = (x61|((x62%x63)-x64));

	if (t15 != 9353734158971834686LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 5;
	int16_t x67 = 1898;
	int8_t x68 = INT8_MIN;

	t16 = (x65|((x66%x67)-x68));

	if (t16 != -9223372036854775675LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -699LL;

	t17 = (x69|((x70%x71)-x72));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	uint16_t x74 = UINT16_MAX;
	uint64_t x75 = UINT64_MAX;
	volatile int32_t x76 = 7528;
	uint64_t t18 = 935217800780956LLU;

	t18 = (x73|((x74%x75)-x76));

	if (t18 != 58007LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int32_t x78 = -1;
	static int8_t x79 = -1;
	static volatile int32_t x80 = -3683;

	t19 = (x77|((x78%x79)-x80));

	if (t19 != 3839) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	static uint32_t x82 = UINT32_MAX;
	volatile int8_t x83 = -1;
	int32_t x84 = INT32_MIN;
	volatile uint32_t t20 = 7709365U;

	t20 = (x81|((x82%x83)-x84));

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	static uint64_t t21 = 7LLU;

	t21 = (x85|((x86%x87)-x88));

	if (t21 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 14;
	uint32_t x95 = 108084782U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x93|((x94%x95)-x96));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = 795508992U;
	int16_t x99 = 2449;
	uint32_t t23 = 16623514U;

	t23 = (x97|((x98%x99)-x100));

	if (t23 != 4294967235U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 46289LLU;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int8_t x104 = -1;
	volatile uint64_t t24 = 5478317307122248LLU;

	t24 = (x101|((x102%x103)-x104));

	if (t24 != 46289LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 4174234582247LLU;
	volatile int32_t x106 = -1;
	uint8_t x107 = 3U;
	int64_t x108 = -198LL;

	t25 = (x105|((x106%x107)-x108));

	if (t25 != 4174234582247LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x111 = 3U;
	int64_t x112 = -1LL;
	volatile int64_t t26 = 65386LL;

	t26 = (x109|((x110%x111)-x112));

	if (t26 != -2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 3;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = -9;
	uint64_t t27 = 318008300LLU;

	t27 = (x113|((x114%x115)-x116));

	if (t27 != 11LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = INT32_MIN;
	uint64_t x118 = 1LLU;
	uint32_t x119 = 51U;
	volatile int64_t x120 = 3449051192LL;
	uint64_t t28 = 16402712735385LLU;

	t28 = (x117|((x118%x119)-x120));

	if (t28 != 18446744072407984073LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 0U;
	uint32_t x124 = 9089574U;
	uint64_t t29 = 1854LLU;

	t29 = (x121|((x122%x123)-x124));

	if (t29 != 2084000725LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	static uint8_t x127 = UINT8_MAX;
	static int64_t x128 = -108LL;

	t30 = (x125|((x126%x127)-x128));

	if (t30 != -20LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 93014072U;
	int8_t x136 = -38;
	volatile uint32_t t31 = 1167821486U;

	t31 = (x133|((x134%x135)-x136));

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x138 = -5LL;
	int32_t x140 = 28625;
	int64_t t32 = -98847279786597LL;

	t32 = (x137|((x138%x139)-x140));

	if (t32 != -28625LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 99379438286940LLU;
	int64_t x143 = 12768024LL;
	uint32_t x144 = UINT32_MAX;
	uint64_t t33 = 291301LLU;

	t33 = (x141|((x142%x143)-x144));

	if (t33 != 18446744069414582365LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x147 = INT8_MAX;
	static uint32_t x148 = 7643U;
	uint32_t t34 = 242U;

	t34 = (x145|((x146%x147)-x148));

	if (t34 != 4294967277U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 43U;
	static uint16_t x150 = UINT16_MAX;
	int32_t x151 = 5761;
	int8_t x152 = -1;
	volatile uint32_t t35 = 141093U;

	t35 = (x149|((x150%x151)-x152));

	if (t35 != 2175U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = -1;
	int8_t x156 = -13;

	t36 = (x153|((x154%x155)-x156));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 2;
	volatile uint32_t x158 = 81U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	static volatile uint32_t t37 = 123824U;

	t37 = (x157|((x158%x159)-x160));

	if (t37 != 82U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 9194862;
	volatile uint64_t x163 = UINT64_MAX;
	static volatile int8_t x164 = INT8_MAX;
	uint64_t t38 = 20593808153538LLU;

	t38 = (x161|((x162%x163)-x164));

	if (t38 != 18446744073709538543LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x166 = UINT32_MAX;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MIN;
	static volatile uint32_t t39 = 115727U;

	t39 = (x165|((x166%x167)-x168));

	if (t39 != 32793U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = INT64_MAX;
	static uint32_t x170 = 1816025932U;
	static int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x169|((x170%x171)-x172));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = 22849309442LLU;
	int16_t x174 = -3027;
	int8_t x175 = INT8_MIN;
	int64_t x176 = -1LL;
	uint64_t t41 = 11528908666228LLU;

	t41 = (x173|((x174%x175)-x176));

	if (t41 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x182 = INT8_MAX;
	uint64_t t42 = 258656073507546LLU;

	t42 = (x181|((x182%x183)-x184));

	if (t42 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = -234473LL;
	static int8_t x187 = INT8_MIN;
	static int64_t t43 = 53LL;

	t43 = (x185|((x186%x187)-x188));

	if (t43 != -1025LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int32_t x190 = INT32_MIN;
	static int32_t x191 = 116;
	static int32_t x192 = INT32_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x189|((x190%x191)-x192));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	volatile int32_t x194 = -1;
	uint16_t x195 = 167U;

	t45 = (x193|((x194%x195)-x196));

	if (t45 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile int8_t x198 = 17;
	int16_t x199 = 9;
	int32_t t46 = 118;

	t46 = (x197|((x198%x199)-x200));

	if (t46 != -119) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 4U;
	int64_t x206 = 14LL;
	int64_t x207 = -72650368539565806LL;
	int64_t t47 = -23LL;

	t47 = (x205|((x206%x207)-x208));

	if (t47 != -4LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x212 = -4;

	t48 = (x209|((x210%x211)-x212));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 6618U;
	static int64_t x214 = 436285818207653036LL;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	int64_t t49 = 11057901167LL;

	t49 = (x213|((x214%x215)-x216));

	if (t49 != 6654LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	static uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	static int64_t x220 = -1LL;
	static volatile int64_t t50 = 3089LL;

	t50 = (x217|((x218%x219)-x220));

	if (t50 != -2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = INT32_MIN;
	uint64_t x222 = UINT64_MAX;
	uint64_t t51 = 95747LLU;

	t51 = (x221|((x222%x223)-x224));

	if (t51 != 18446744071579375052LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = -244987;

	t52 = (x225|((x226%x227)-x228));

	if (t52 != 4294962045U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = INT32_MAX;
	static uint32_t x232 = UINT32_MAX;
	int64_t t53 = 28710200431LL;

	t53 = (x229|((x230%x231)-x232));

	if (t53 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MIN;
	uint8_t x235 = 9U;
	int16_t x236 = 112;
	volatile int32_t t54 = 310927811;

	t54 = (x233|((x234%x235)-x236));

	if (t54 != -113) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 117U;
	static uint8_t x238 = 2U;
	volatile int64_t x239 = -1LL;
	static volatile int16_t x240 = INT16_MAX;

	t55 = (x237|((x238%x239)-x240));

	if (t55 != -32651LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = UINT32_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	volatile int8_t x243 = INT8_MIN;
	static volatile uint64_t t56 = 2477655LLU;

	t56 = (x241|((x242%x243)-x244));

	if (t56 != 4294967295LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x251 = INT16_MIN;
	static uint32_t x252 = UINT32_MAX;
	uint32_t t57 = 3U;

	t57 = (x249|((x250%x251)-x252));

	if (t57 != 4294967197U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = -4067;
	uint64_t x255 = 2LLU;
	volatile uint64_t t58 = 1035473190295906LLU;

	t58 = (x253|((x254%x255)-x256));

	if (t58 != 18446744073709550045LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile int8_t x258 = -1;
	int16_t x259 = INT16_MAX;
	int64_t x260 = INT64_MIN;
	volatile int64_t t59 = -488525912761LL;

	t59 = (x257|((x258%x259)-x260));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x262 = INT16_MIN;
	volatile uint8_t x263 = 93U;
	uint16_t x264 = UINT16_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x261|((x262%x263)-x264));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 7340286U;
	static uint32_t t61 = 418841U;

	t61 = (x265|((x266%x267)-x268));

	if (t61 != 7340542U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x269 = INT32_MIN;
	int16_t x270 = 907;
	volatile uint16_t x271 = 6095U;
	static uint16_t x272 = UINT16_MAX;
	int32_t t62 = 0;

	t62 = (x269|((x270%x271)-x272));

	if (t62 != -64628) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x273 = INT8_MIN;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = -1;
	int32_t t63 = -61834419;

	t63 = (x273|((x274%x275)-x276));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MIN;
	static int32_t x278 = 7;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -167483;
	static uint32_t t64 = 1985489796U;

	t64 = (x277|((x278%x279)-x280));

	if (t64 != 4294967234U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -11;
	uint8_t x282 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = -84001LL;
	int64_t t65 = -210253646802091000LL;

	t65 = (x281|((x282%x283)-x284));

	if (t65 != -11LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = -1;
	int8_t x286 = INT8_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (x285|((x286%x287)-x288));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	int32_t x291 = -114817612;
	uint16_t x292 = 13U;

	t67 = (x289|((x290%x291)-x292));

	if (t67 != -86) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -15349148;
	uint8_t x294 = 15U;
	uint32_t x295 = 3965349U;
	int16_t x296 = INT16_MIN;
	static volatile uint32_t t68 = 28649U;

	t68 = (x293|((x294%x295)-x296));

	if (t68 != 4279618159U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 24U;
	static volatile int8_t x298 = -1;
	int64_t x300 = -1LL;
	volatile int64_t t69 = -344526564828LL;

	t69 = (x297|((x298%x299)-x300));

	if (t69 != 24LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MAX;
	uint64_t x304 = 2185877243552387LLU;
	uint64_t t70 = 1944LLU;

	t70 = (x301|((x302%x303)-x304));

	if (t70 != 18446744072826625405LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = 17U;
	volatile int32_t x307 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	uint32_t t71 = 19557U;

	t71 = (x305|((x306%x307)-x308));

	if (t71 != 4290451577U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x309 = 5U;
	uint32_t x310 = 778070U;
	volatile int32_t x311 = -73188;
	static volatile uint32_t x312 = UINT32_MAX;
	volatile uint32_t t72 = 38U;

	t72 = (x309|((x310%x311)-x312));

	if (t72 != 778071U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -1LL;
	int32_t x314 = -1;
	static volatile uint64_t x315 = 37179LLU;
	volatile uint32_t x316 = 1U;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x313|((x314%x315)-x316));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x318 = INT8_MIN;
	uint16_t x319 = 693U;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t74 = -1050122113;

	t74 = (x317|((x318%x319)-x320));

	if (t74 != 1562) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 35U;
	volatile int64_t x324 = -1LL;
	uint64_t t75 = 0LLU;

	t75 = (x321|((x322%x323)-x324));

	if (t75 != 768755LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = -1LL;
	int16_t x326 = 5;
	static int8_t x327 = INT8_MIN;
	static int16_t x328 = -61;
	int64_t t76 = -1018759811LL;

	t76 = (x325|((x326%x327)-x328));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = 2028637;
	int8_t x330 = -1;
	int64_t x331 = -1LL;
	static int8_t x332 = INT8_MIN;
	static int64_t t77 = 261315406837LL;

	t77 = (x329|((x330%x331)-x332));

	if (t77 != 2028765LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	int16_t x336 = -1;
	static volatile int64_t t78 = 1646LL;

	t78 = (x333|((x334%x335)-x336));

	if (t78 != 2147483775LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = 266262U;
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MIN;
	int64_t x340 = 669229LL;
	volatile int64_t t79 = -180LL;

	t79 = (x337|((x338%x339)-x340));

	if (t79 != -599594LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	volatile uint64_t t80 = 1243213LLU;

	t80 = (x341|((x342%x343)-x344));

	if (t80 != 39806758865368046LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x346 = INT16_MAX;
	volatile int8_t x347 = INT8_MIN;

	t81 = (x345|((x346%x347)-x348));

	if (t81 != 4294934656U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = 48605274948043498LLU;
	uint16_t x352 = UINT16_MAX;
	uint64_t t82 = 59214063851470LLU;

	t82 = (x349|((x350%x351)-x352));

	if (t82 != 9248716903108292499LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 3248U;
	uint32_t x354 = 26U;
	volatile int16_t x355 = INT16_MIN;
	static uint64_t x356 = UINT64_MAX;
	static uint64_t t83 = 258139LLU;

	t83 = (x353|((x354%x355)-x356));

	if (t83 != 3259LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 15U;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t84 = 146175LLU;

	t84 = (x357|((x358%x359)-x360));

	if (t84 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x362 = -2;
	int64_t x363 = 3876LL;
	volatile int64_t x364 = INT64_MIN;
	int64_t t85 = -100319051LL;

	t85 = (x361|((x362%x363)-x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = 3LL;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 1115U;

	t86 = (x365|((x366%x367)-x368));

	if (t86 != -1113LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x370 = 28;
	int16_t x371 = INT16_MIN;
	int16_t x372 = 20;

	t87 = (x369|((x370%x371)-x372));

	if (t87 != -699472042173211429LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x373 = -1;
	static int16_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int64_t x376 = -3158293458000925LL;
	static int64_t t88 = 8LL;

	t88 = (x373|((x374%x375)-x376));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = -30771;
	uint8_t x378 = 14U;
	uint32_t t89 = 3471362U;

	t89 = (x377|((x378%x379)-x380));

	if (t89 != 4294936527U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x381 = INT8_MIN;
	int32_t x384 = 428;
	int64_t t90 = -992809215087612988LL;

	t90 = (x381|((x382%x383)-x384));

	if (t90 != -44LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x385 = -1;
	uint64_t x388 = 76384042LLU;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x385|((x386%x387)-x388));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = -1;
	int32_t x390 = -1;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = -1308870;
	static volatile int64_t t92 = 135024160178LL;

	t92 = (x389|((x390%x391)-x392));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	static int16_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t93 = -1919198;

	t93 = (x393|((x394%x395)-x396));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = INT64_MIN;
	int32_t x400 = -1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x397|((x398%x399)-x400));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = -1;
	uint32_t x403 = 13866U;
	static int64_t x404 = 401357394142LL;
	volatile int64_t t95 = 490854866542LL;

	t95 = (x401|((x402%x403)-x404));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	int64_t x407 = -1LL;
	int64_t x408 = 232434548588370LL;
	int64_t t96 = -1269595922299855LL;

	t96 = (x405|((x406%x407)-x408));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 24U;
	static volatile uint16_t x411 = 2U;
	static int8_t x412 = INT8_MIN;

	t97 = (x409|((x410%x411)-x412));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x417 = INT64_MIN;
	volatile uint8_t x418 = 3U;
	volatile int64_t t98 = -19989006767463LL;

	t98 = (x417|((x418%x419)-x420));

	if (t98 != -3013LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = INT8_MIN;
	volatile int64_t t99 = -668915061648497266LL;

	t99 = (x421|((x422%x423)-x424));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

