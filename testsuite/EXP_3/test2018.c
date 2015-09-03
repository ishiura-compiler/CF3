#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -1;
uint64_t x10 = UINT64_MAX;
static uint32_t x18 = UINT32_MAX;
static volatile uint32_t t4 = 553422U;
volatile uint64_t t5 = 59346198489017LLU;
int16_t x31 = INT16_MAX;
static uint64_t x34 = 108805LLU;
int64_t x46 = -248902509LL;
int32_t x47 = INT32_MAX;
int8_t x48 = -1;
uint32_t t10 = 12009007U;
int8_t x57 = -1;
int64_t x67 = INT64_MAX;
int8_t x68 = 21;
int64_t t12 = -939117LL;
int16_t x71 = -1;
static uint64_t x74 = 27001LLU;
int16_t x85 = -1;
uint64_t x95 = UINT64_MAX;
volatile int32_t x96 = INT32_MIN;
volatile uint64_t t18 = 84LLU;
uint32_t t19 = 293582U;
static volatile uint64_t t21 = 6267114609242LLU;
volatile int8_t x112 = 29;
volatile int8_t x115 = -1;
int64_t x118 = INT64_MIN;
uint64_t t24 = 45036824LLU;
volatile int64_t t25 = 3211139733165141044LL;
static volatile uint64_t t26 = 9706990815LLU;
int32_t x130 = INT32_MIN;
static uint64_t x141 = 11037996628887LLU;
volatile int32_t x142 = -1;
uint32_t x150 = 95892086U;
int32_t x151 = -274561918;
static uint64_t t29 = 10LLU;
uint64_t t30 = 1LLU;
int32_t x160 = 2045;
uint32_t x163 = UINT32_MAX;
static int32_t x164 = INT32_MAX;
int32_t x180 = INT32_MAX;
int32_t x181 = INT32_MIN;
int32_t x190 = -703791453;
uint32_t x198 = 6322483U;
static int32_t x199 = -1;
int64_t x203 = INT64_MAX;
int8_t x204 = INT8_MIN;
int64_t x205 = 72LL;
static int64_t t42 = -46069148282414LL;
volatile int64_t t43 = 2159185300776444LL;
uint32_t x220 = 28648U;
uint32_t x224 = UINT32_MAX;
uint16_t x232 = 1U;
uint64_t x234 = UINT64_MAX;
uint8_t x236 = 119U;
volatile uint32_t x238 = 45218U;
int64_t x247 = 5472341LL;
int64_t x249 = -1LL;
int32_t x252 = -1;
int16_t x254 = 111;
uint64_t x255 = 167LLU;
volatile uint64_t t54 = 5191793LLU;
volatile int16_t x267 = -757;
int32_t x269 = INT32_MIN;
static uint64_t x271 = UINT64_MAX;
volatile uint32_t x277 = UINT32_MAX;
int32_t x280 = -1;
volatile int64_t t58 = 7294830334LL;
uint32_t x285 = UINT32_MAX;
uint8_t x286 = 88U;
static volatile int64_t t59 = -18LL;
int16_t x289 = INT16_MAX;
uint64_t x290 = UINT64_MAX;
uint32_t x291 = UINT32_MAX;
int32_t x302 = INT32_MIN;
volatile int32_t x309 = INT32_MIN;
static int16_t x316 = INT16_MIN;
int64_t x317 = INT64_MIN;
volatile int32_t x326 = 86084;
int64_t x328 = INT64_MAX;
int64_t t67 = -63227LL;
volatile int16_t x332 = INT16_MIN;
int32_t x339 = INT32_MIN;
volatile uint16_t x341 = 7U;
volatile int64_t x348 = -961482073850438665LL;
uint8_t x358 = 49U;
volatile int16_t x364 = INT16_MIN;
int8_t x369 = -27;
int8_t x371 = 1;
uint64_t x372 = 136842021LLU;
static uint64_t x378 = UINT64_MAX;
int8_t x387 = INT8_MIN;
volatile int64_t t80 = -82357969389591940LL;
int32_t x401 = INT32_MAX;
uint64_t x413 = 204966540LLU;
int16_t x415 = INT16_MAX;
uint64_t t83 = 429LLU;
int16_t x424 = -1;
static uint32_t x447 = UINT32_MAX;
uint64_t x448 = UINT64_MAX;
static volatile uint64_t t93 = 10152563175104675LLU;
volatile int16_t x491 = INT16_MAX;
int8_t x498 = INT8_MIN;
uint16_t x499 = UINT16_MAX;
volatile uint64_t t98 = 55102LLU;
static uint64_t x505 = UINT64_MAX;
static int16_t x506 = INT16_MAX;
uint32_t x507 = UINT32_MAX;


void f0(void) {
	static volatile int8_t x1 = -1;
	volatile int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 6300753685LL;

	t0 = ((x1^x2)*(x3|x4));

	if (t0 != -4161536LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 10;
	int8_t x7 = -2;
	uint64_t x8 = 109721645LLU;
	volatile uint64_t t1 = 24821359555LLU;

	t1 = ((x5^x6)*(x7|x8));

	if (t1 != 11LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	static int64_t x12 = INT64_MIN;
	static uint64_t t2 = 1LLU;

	t2 = ((x9^x10)*(x11|x12));

	if (t2 != 18446673704965406720LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 10U;
	uint16_t x14 = 134U;
	static uint8_t x15 = 40U;
	volatile uint32_t x16 = 191423U;
	uint32_t t3 = 193964U;

	t3 = ((x13^x14)*(x15|x16));

	if (t3 != 26799220U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint8_t x19 = 0U;
	int8_t x20 = -1;

	t4 = ((x17^x18)*(x19|x20));

	if (t4 != 4294967169U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 179965LLU;
	int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	int8_t x24 = 0;

	t5 = ((x21^x22)*(x23|x24));

	if (t5 != 18446744073709371774LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	uint64_t x30 = 2498594LLU;
	int32_t x32 = INT32_MIN;
	uint64_t t6 = 7048183108LLU;

	t6 = ((x29^x30)*(x31|x32));

	if (t6 != 5365610034012195LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1LL;
	volatile uint64_t t7 = 33164009960LLU;

	t7 = ((x33^x34)*(x35|x36));

	if (t7 != 108806LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x37 = -1LL;
	volatile int16_t x38 = -1;
	int16_t x39 = -5;
	int32_t x40 = 235476841;
	static volatile int64_t t8 = -2168399LL;

	t8 = ((x37^x38)*(x39|x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 20162U;
	static int64_t t9 = 20071825187044LL;

	t9 = ((x45^x46)*(x47|x48));

	if (t9 != 248888751LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 31U;
	int32_t x50 = -56772367;
	uint32_t x51 = 92287U;
	static uint8_t x52 = 86U;

	t10 = ((x49^x50)*(x51|x52));

	if (t10 != 508390930U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 0U;
	volatile uint64_t t11 = 6325LLU;

	t11 = ((x57^x58)*(x59|x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x65 = -1;
	int8_t x66 = 0;

	t12 = ((x65^x66)*(x67|x68));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = 158;
	static uint64_t x70 = 6524770658892LLU;
	uint8_t x72 = 0U;
	volatile uint64_t t13 = 4137284LLU;

	t13 = ((x69^x70)*(x71|x72));

	if (t13 != 18446737548938892590LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x73 = 121U;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MIN;
	uint64_t t14 = 482860875332076LLU;

	t14 = ((x73^x74)*(x75|x76));

	if (t14 != 18446744073709524736LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = -1LL;
	static uint32_t x79 = UINT32_MAX;
	int8_t x80 = -1;
	volatile uint64_t t15 = 8446556568837LLU;

	t15 = ((x77^x78)*(x79|x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x86 = -14;
	int8_t x87 = INT8_MAX;
	int8_t x88 = -1;
	volatile int32_t t16 = -113803454;

	t16 = ((x85^x86)*(x87|x88));

	if (t16 != -13) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = UINT32_MAX;
	static int16_t x90 = -1;
	static int64_t x91 = 2781197LL;
	volatile uint8_t x92 = 6U;
	int64_t t17 = 5758395509189LL;

	t17 = ((x89^x90)*(x91|x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;

	t18 = ((x93^x94)*(x95|x96));

	if (t18 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x97 = 3737U;
	int8_t x98 = INT8_MIN;
	static volatile uint16_t x99 = 66U;
	static volatile uint32_t x100 = 1068000U;

	t19 = ((x97^x98)*(x99|x100));

	if (t19 != 220539666U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x101 = 5305U;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = -1LL;
	int8_t x104 = INT8_MIN;
	static volatile int64_t t20 = -1278688221LL;

	t20 = ((x101^x102)*(x103|x104));

	if (t20 != 27463LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = 6U;
	uint8_t x106 = UINT8_MAX;
	static uint16_t x107 = 28U;
	uint64_t x108 = 871672303186LLU;

	t21 = ((x105^x106)*(x107|x108));

	if (t21 != 217046403496302LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = 10;
	uint32_t x110 = 1339193U;
	int32_t x111 = 1524;
	static uint32_t t22 = 347704240U;

	t22 = ((x109^x110)*(x111|x112));

	if (t22 != 2052973671U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 8U;
	uint64_t x116 = 187333195798LLU;
	static volatile uint64_t t23 = 8285LLU;

	t23 = ((x113^x114)*(x115|x116));

	if (t23 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 1219787LLU;
	static volatile uint8_t x119 = UINT8_MAX;
	volatile uint8_t x120 = UINT8_MAX;

	t24 = ((x117^x118)*(x119|x120));

	if (t24 != 9223372037165821493LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = -6067LL;
	volatile int32_t x123 = -1;
	int64_t x124 = INT64_MAX;

	t25 = ((x121^x122)*(x123|x124));

	if (t25 != -9223372036854769741LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 7288U;
	uint32_t x126 = 465313U;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MIN;

	t26 = ((x125^x126)*(x127|x128));

	if (t26 != 18446744073709091367LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MAX;
	int64_t t27 = -1LL;

	t27 = ((x129^x130)*(x131|x132));

	if (t27 != -2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x143 = UINT16_MAX;
	static uint16_t x144 = 3U;
	volatile uint64_t t28 = 33564LLU;

	t28 = ((x141^x142)*(x143|x144));

	if (t28 != 17723368964635376536LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x149 = 10U;
	uint64_t x152 = UINT64_MAX;

	t29 = ((x149^x150)*(x151|x152));

	if (t29 != 18446744073613659524LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x153 = 2U;
	int8_t x154 = -5;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 249LLU;

	t30 = ((x153^x154)*(x155|x156));

	if (t30 != 18446744073709092871LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x157 = 122073U;
	int32_t x158 = -3669;
	uint8_t x159 = UINT8_MAX;
	uint32_t t31 = 497U;

	t31 = ((x157^x158)*(x159|x160));

	if (t31 != 4050477710U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = -1;
	static int8_t x162 = -4;
	static volatile uint32_t t32 = 6248U;

	t32 = ((x161^x162)*(x163|x164));

	if (t32 != 4294967293U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x165 = 124504813043320683LLU;
	int64_t x166 = INT64_MIN;
	static uint8_t x167 = 54U;
	int64_t x168 = -1LL;
	uint64_t t33 = 433900276271208LLU;

	t33 = ((x165^x166)*(x167|x168));

	if (t33 != 9098867223811455125LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MAX;
	volatile int64_t x174 = INT64_MIN;
	uint64_t x175 = 385994046425978421LLU;
	int8_t x176 = INT8_MAX;
	uint64_t t34 = 129650LLU;

	t34 = ((x173^x174)*(x175|x176));

	if (t34 != 18060750027283573121LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MAX;
	uint8_t x178 = 1U;
	int64_t x179 = 516LL;
	int64_t t35 = 4000475468LL;

	t35 = ((x177^x178)*(x179|x180));

	if (t35 != 4611686011984936962LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t36 = 2650678;

	t36 = ((x181^x182)*(x183|x184));

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	volatile int32_t x186 = INT32_MIN;
	uint32_t x187 = 65995U;
	int8_t x188 = -1;
	volatile uint32_t t37 = 10944483U;

	t37 = ((x185^x186)*(x187|x188));

	if (t37 != 2147450881U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MIN;
	static volatile int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	static volatile int64_t t38 = 3076202266LL;

	t38 = ((x189^x190)*(x191|x192));

	if (t38 != -703823523LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MAX;
	int32_t x194 = INT32_MIN;
	static uint32_t x195 = 9313U;
	int8_t x196 = INT8_MIN;
	volatile uint32_t t39 = 15U;

	t39 = ((x193^x194)*(x195|x196));

	if (t39 != 2147479711U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = 769114;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t40 = 264441079U;

	t40 = ((x197^x198)*(x199|x200));

	if (t40 != 4287904407U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	static int64_t t41 = -3090232824483LL;

	t41 = ((x201^x202)*(x203|x204));

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x206 = -1LL;
	int8_t x207 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;

	t42 = ((x205^x206)*(x207|x208));

	if (t42 != 73LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = 8185;
	int64_t x215 = -1LL;
	volatile int32_t x216 = 185902233;

	t43 = ((x213^x214)*(x215|x216));

	if (t43 != 24583LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = -1LL;
	static uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	volatile uint64_t t44 = 1594197110LLU;

	t44 = ((x217^x218)*(x219|x220));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MAX;
	int16_t x223 = -1;
	volatile int64_t t45 = 5948LL;

	t45 = ((x221^x222)*(x223|x224));

	if (t45 != -4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x225 = -1;
	int16_t x226 = -1;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = 99178651;
	volatile int32_t t46 = 0;

	t46 = ((x225^x226)*(x227|x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -21686186;
	int8_t x230 = -4;
	uint8_t x231 = 2U;
	volatile int32_t t47 = 70971639;

	t47 = ((x229^x230)*(x231|x232));

	if (t47 != 65058558) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = 100369841746LLU;
	static volatile int8_t x235 = INT8_MAX;
	uint64_t t48 = 4016023618LLU;

	t48 = ((x233^x234)*(x235|x236));

	if (t48 != 18446731326739649747LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x237 = 1526U;
	int8_t x239 = -1;
	int32_t x240 = 225;
	volatile uint32_t t49 = 17316238U;

	t49 = ((x237^x238)*(x239|x240));

	if (t49 != 4294920876U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = 42U;
	int8_t x242 = INT8_MIN;
	static int32_t x243 = INT32_MAX;
	static uint64_t x244 = 3817563682093339LLU;
	static volatile uint64_t t50 = 63964902306596LLU;

	t50 = ((x241^x242)*(x243|x244));

	if (t50 != 18118433526608035926LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = -1;
	volatile int16_t x246 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;
	static volatile int64_t t51 = 42587LL;

	t51 = ((x245^x246)*(x247|x248));

	if (t51 != 140733193355265LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x250 = -79;
	volatile uint64_t x251 = UINT64_MAX;
	volatile uint64_t t52 = 1675825LLU;

	t52 = ((x249^x250)*(x251|x252));

	if (t52 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 726809U;
	static uint32_t x256 = 83739900U;
	uint64_t t53 = 235LLU;

	t53 = ((x253^x254)*(x255|x256));

	if (t53 != 60870702970506LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 2699U;
	static int32_t x258 = INT32_MIN;
	int32_t x259 = 100186;
	uint64_t x260 = 480266978690508947LLU;

	t54 = ((x257^x258)*(x259|x260));

	if (t54 != 7050886263824386537LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = -1LL;
	int32_t x266 = 1;
	int32_t x268 = -418;
	volatile int64_t t55 = -2918452703605449209LL;

	t55 = ((x265^x266)*(x267|x268));

	if (t55 != 322LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x270 = -89;
	int64_t x272 = INT64_MAX;
	static volatile uint64_t t56 = 85723LLU;

	t56 = ((x269^x270)*(x271|x272));

	if (t56 != 18446744071562068057LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x278 = 1071326U;
	int64_t x279 = INT64_MIN;
	int64_t t57 = -907321LL;

	t57 = ((x277^x278)*(x279|x280));

	if (t57 != -4293895969LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x282 = -30142LL;
	static int32_t x283 = 32975725;
	int16_t x284 = INT16_MIN;

	t58 = ((x281^x282)*(x283|x284));

	if (t58 != -56855526LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x287 = -1LL;
	int8_t x288 = INT8_MAX;

	t59 = ((x285^x286)*(x287|x288));

	if (t59 != -4294967207LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x292 = INT64_MAX;
	static volatile uint64_t t60 = 1114LLU;

	t60 = ((x289^x290)*(x291|x292));

	if (t60 != 32768LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x293 = 21353764;
	static uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	volatile int8_t x296 = -1;
	volatile uint64_t t61 = 3215269561170530LLU;

	t61 = ((x293^x294)*(x295|x296));

	if (t61 != 21353765LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x297 = UINT8_MAX;
	static volatile int8_t x298 = 31;
	volatile uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t62 = -8376775;

	t62 = ((x297^x298)*(x299|x300));

	if (t62 != -224) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = INT32_MAX;
	int32_t x303 = 17828714;
	uint32_t x304 = 59U;
	uint32_t t63 = 705U;

	t63 = ((x301^x302)*(x303|x304));

	if (t63 != 4277138565U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x310 = -2272934799653549037LL;
	volatile int8_t x311 = INT8_MIN;
	uint64_t x312 = 2027568645191181LLU;
	uint64_t t64 = 1455133600146605LLU;

	t64 = ((x309^x310)*(x311|x312));

	if (t64 != 15313659280439268215LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 50632452683LLU;
	int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	uint64_t t65 = 7079299717150LLU;

	t65 = ((x313^x314)*(x315|x316));

	if (t65 != 6480953943552LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x318 = UINT8_MAX;
	uint64_t x319 = 462257875LLU;
	uint32_t x320 = UINT32_MAX;
	static volatile uint64_t t66 = 6973878218567420LLU;

	t66 = ((x317^x318)*(x319|x320));

	if (t66 != 9223373132071436033LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x327 = -11;

	t67 = ((x325^x326)*(x327|x328));

	if (t67 != 77756LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x329 = 87854408504234216LLU;
	uint16_t x330 = 940U;
	volatile uint32_t x331 = 10563922U;
	uint64_t t68 = 263897035LLU;

	t68 = ((x329^x330)*(x331|x332));

	if (t68 != 10175992340427157448LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = 41;
	uint16_t x340 = UINT16_MAX;
	uint64_t t69 = 180LLU;

	t69 = ((x337^x338)*(x339|x340));

	if (t69 != 90191560746LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	static int64_t x344 = 49569LL;
	volatile int64_t t70 = 802643165LL;

	t70 = ((x341^x342)*(x343|x344));

	if (t70 != -408021892360LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = -1;
	int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	static int64_t t71 = -301LL;

	t71 = ((x345^x346)*(x347|x348));

	if (t71 != 128LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	uint16_t x351 = 106U;
	uint16_t x352 = 17865U;
	int32_t t72 = -55096;

	t72 = ((x349^x350)*(x351|x352));

	if (t72 != -17899) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = 12;
	int32_t x354 = -2;
	int32_t x355 = 0;
	static volatile int64_t x356 = 406830LL;
	int64_t t73 = -748641426042430LL;

	t73 = ((x353^x354)*(x355|x356));

	if (t73 != -5695620LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -1;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = INT64_MAX;
	static volatile int64_t t74 = 11LL;

	t74 = ((x357^x358)*(x359|x360));

	if (t74 != 50LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 2U;
	uint64_t x362 = UINT64_MAX;
	static volatile int8_t x363 = INT8_MIN;
	uint64_t t75 = 6940601451LLU;

	t75 = ((x361^x362)*(x363|x364));

	if (t75 != 384LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x370 = INT32_MIN;
	uint64_t t76 = 42901531964LLU;

	t76 = ((x369^x370)*(x371|x372));

	if (t76 != 293865998762038041LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = -1;
	uint8_t x379 = 2U;
	int8_t x380 = INT8_MAX;
	volatile uint64_t t77 = 260511LLU;

	t77 = ((x377^x378)*(x379|x380));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x381 = 11;
	static uint64_t x382 = UINT64_MAX;
	int64_t x383 = 6LL;
	volatile int8_t x384 = INT8_MAX;
	volatile uint64_t t78 = 240349811LLU;

	t78 = ((x381^x382)*(x383|x384));

	if (t78 != 18446744073709550092LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x385 = 304020387U;
	uint8_t x386 = UINT8_MAX;
	int64_t x388 = -13275205LL;
	volatile int64_t t79 = -896LL;

	t79 = ((x385^x386)*(x387|x388));

	if (t79 != -20977401804LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = -1LL;
	static int64_t x395 = -1LL;
	int16_t x396 = INT16_MIN;

	t80 = ((x393^x394)*(x395|x396));

	if (t80 != -32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = -29;
	uint64_t x404 = 2128537480896645694LLU;
	uint64_t t81 = 102241169729339LLU;

	t81 = ((x401^x402)*(x403|x404));

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = INT16_MIN;
	static volatile uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;
	volatile int64_t t82 = 672982151838532146LL;

	t82 = ((x405^x406)*(x407|x408));

	if (t82 != 1073774592LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x414 = INT32_MIN;
	volatile uint32_t x416 = 1840U;

	t83 = ((x413^x414)*(x415|x416));

	if (t83 != 18446680423251473780LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x417 = UINT16_MAX;
	volatile int8_t x418 = -1;
	int64_t x419 = -2007496564497135LL;
	int16_t x420 = -1;
	volatile int64_t t84 = -14LL;

	t84 = ((x417^x418)*(x419|x420));

	if (t84 != 65536LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = 11852;
	int32_t x422 = -1;
	static int16_t x423 = 3804;
	volatile int32_t t85 = 3;

	t85 = ((x421^x422)*(x423|x424));

	if (t85 != 11853) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = 3;
	uint64_t t86 = 5847LLU;

	t86 = ((x445^x446)*(x447|x448));

	if (t86 != 125LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x449 = -5744;
	volatile uint8_t x450 = UINT8_MAX;
	int8_t x451 = -1;
	int8_t x452 = INT8_MIN;
	int32_t t87 = -268;

	t87 = ((x449^x450)*(x451|x452));

	if (t87 != 5777) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x453 = UINT32_MAX;
	volatile int8_t x454 = -1;
	int64_t x455 = INT64_MAX;
	static uint32_t x456 = 4622419U;
	volatile int64_t t88 = 16928407356008849LL;

	t88 = ((x453^x454)*(x455|x456));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = INT64_MIN;
	uint64_t x458 = UINT64_MAX;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = INT32_MIN;
	static uint64_t t89 = 61323121716709LLU;

	t89 = ((x457^x458)*(x459|x460));

	if (t89 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x461 = 706U;
	static volatile int16_t x462 = INT16_MAX;
	uint8_t x463 = 3U;
	volatile int64_t x464 = -1LL;
	int64_t t90 = -24268LL;

	t90 = ((x461^x462)*(x463|x464));

	if (t90 != -32061LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x465 = INT8_MAX;
	uint8_t x466 = UINT8_MAX;
	int32_t x467 = INT32_MIN;
	int8_t x468 = -1;
	int32_t t91 = -5521;

	t91 = ((x465^x466)*(x467|x468));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x469 = 0U;
	int32_t x470 = 18626;
	int32_t x471 = -646007;
	int8_t x472 = INT8_MIN;
	int32_t t92 = -2;

	t92 = ((x469^x470)*(x471|x472));

	if (t92 != -2216494) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = 1;
	static uint32_t x474 = 856541U;
	int64_t x475 = 441514LL;
	uint64_t x476 = 36LLU;

	t93 = ((x473^x474)*(x475|x476));

	if (t93 != 378177827720LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x481 = 6U;
	volatile uint64_t x482 = UINT64_MAX;
	static int16_t x483 = -2;
	int16_t x484 = INT16_MAX;
	static uint64_t t94 = 35225LLU;

	t94 = ((x481^x482)*(x483|x484));

	if (t94 != 7LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x489 = UINT32_MAX;
	uint64_t x490 = 1506497561315LLU;
	volatile int64_t x492 = -1LL;
	uint64_t t95 = 6361940893603996LLU;

	t95 = ((x489^x490)*(x491|x492));

	if (t95 != 18446742569435038436LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x493 = -2;
	static uint64_t x494 = 18398794LLU;
	int8_t x495 = -1;
	int32_t x496 = INT32_MIN;
	uint64_t t96 = 19LLU;

	t96 = ((x493^x494)*(x495|x496));

	if (t96 != 18398796LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x497 = INT8_MIN;
	int8_t x500 = -1;
	int32_t t97 = 3434;

	t97 = ((x497^x498)*(x499|x500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x501 = -312747;
	uint64_t x502 = 8655350LLU;
	int32_t x503 = 5237200;
	static int8_t x504 = -1;

	t98 = ((x501^x502)*(x503|x504));

	if (t98 != 8442973LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x508 = 12578U;
	volatile uint64_t t99 = 21LLU;

	t99 = ((x505^x506)*(x507|x508));

	if (t99 != 18446603336221229056LLU) { NG(); } else { ; }
	
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

