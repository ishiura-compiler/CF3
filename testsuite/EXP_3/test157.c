#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x16 = UINT8_MAX;
static volatile uint64_t t5 = 64LLU;
uint16_t x37 = 2603U;
uint16_t x40 = UINT16_MAX;
int8_t x46 = 36;
uint8_t x47 = UINT8_MAX;
int64_t x49 = -1LL;
uint16_t x52 = 1734U;
int64_t x62 = INT64_MIN;
int8_t x64 = INT8_MIN;
int16_t x69 = 0;
uint32_t x80 = 38U;
volatile int8_t x87 = 38;
uint8_t x88 = 78U;
int32_t x94 = INT32_MIN;
int32_t x95 = INT32_MIN;
volatile uint64_t t17 = 7618216LLU;
int64_t t19 = 12654376332335081LL;
int8_t x105 = -1;
int64_t x112 = INT64_MAX;
volatile uint64_t t22 = 181665825720172546LLU;
int64_t x125 = -1LL;
int32_t x127 = 9;
static uint64_t t25 = 1603603675649LLU;
static int16_t x144 = -1;
int16_t x149 = INT16_MIN;
int8_t x151 = -8;
int32_t x160 = INT32_MIN;
static int32_t x163 = -1;
volatile int32_t x165 = 1207936;
volatile uint32_t x168 = 536U;
volatile int16_t x183 = -3;
static volatile int64_t t39 = -12190LL;
int16_t x197 = INT16_MAX;
uint64_t x199 = 2087657562932925913LLU;
uint64_t x201 = 3925009797103146LLU;
int32_t x206 = -325844;
int16_t x209 = INT16_MIN;
uint32_t t43 = 14680U;
int16_t x213 = INT16_MIN;
volatile uint32_t x214 = 1217609300U;
volatile uint32_t x216 = UINT32_MAX;
static uint64_t t44 = 1944LLU;
int64_t x217 = INT64_MIN;
int32_t x229 = INT32_MIN;
volatile int64_t x245 = -1LL;
int16_t x249 = -6;
static int16_t x254 = INT16_MIN;
uint8_t x255 = 86U;
volatile uint32_t x280 = UINT32_MAX;
int16_t x291 = INT16_MIN;
volatile uint64_t x299 = 15984LLU;
int16_t x317 = -1;
volatile uint64_t x318 = 215580525LLU;
static uint8_t x320 = 9U;
static int64_t x327 = -1LL;
volatile uint16_t x328 = UINT16_MAX;
int16_t x332 = 5816;
static int8_t x335 = 28;
static int16_t x345 = INT16_MIN;
uint16_t x350 = 0U;
uint32_t x351 = 230145U;
static int64_t x357 = INT64_MIN;
int8_t x363 = INT8_MIN;
volatile int32_t x366 = 19811774;
static volatile uint32_t x367 = 7U;
int64_t x373 = 1077127174885572753LL;
static volatile int64_t t76 = 34971585312948LL;
uint64_t t77 = 2941713684656962LLU;
static uint16_t x395 = 1U;
volatile int64_t t78 = -29LL;
int8_t x398 = -1;
uint16_t x401 = UINT16_MAX;
int64_t x404 = -9363068748LL;
int32_t t82 = -37980684;
int32_t x416 = 268073444;
uint32_t t83 = 3U;
int8_t x418 = 0;
uint16_t x426 = UINT16_MAX;
uint16_t x427 = 1U;
volatile int32_t t86 = -2208434;
volatile int32_t x430 = -1;
uint64_t x432 = 2438555190888LLU;
int32_t t88 = -2801954;
static uint32_t x453 = 48U;
volatile uint32_t t90 = 1963459U;
int32_t t91 = -2;
volatile uint32_t x466 = 7U;
int64_t t92 = -3129090370LL;
int16_t x469 = INT16_MAX;
volatile uint64_t x475 = 57LLU;
int32_t x478 = -1;
int32_t t95 = 2654;
volatile uint8_t x481 = UINT8_MAX;
int64_t t96 = 37161947559929LL;
static int8_t x488 = -22;
int32_t t97 = -21;
int8_t x491 = 1;


void f0(void) {
	static uint8_t x1 = 10U;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 1211504671LLU;
	uint64_t t0 = 15523895513LLU;

	t0 = ((x1^x2)+(x3+x4));

	if (t0 != 5506471848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = -1;
	int32_t t1 = 3;

	t1 = ((x5^x6)+(x7+x8));

	if (t1 != -33025) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1614;
	uint16_t x14 = 353U;
	int16_t x15 = -5576;
	volatile int32_t t2 = -9459;

	t2 = ((x13^x14)+(x15+x16));

	if (t2 != -7158) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 1;
	static uint64_t x18 = UINT64_MAX;
	volatile int8_t x19 = INT8_MAX;
	uint16_t x20 = 249U;
	volatile uint64_t t3 = 70637519677697386LLU;

	t3 = ((x17^x18)+(x19+x20));

	if (t3 != 374LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	static int8_t x26 = 2;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MAX;
	int64_t t4 = -1773763036796393LL;

	t4 = ((x25^x26)+(x27+x28));

	if (t4 != -4LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x33 = INT8_MAX;
	uint64_t x34 = 84LLU;
	volatile int8_t x35 = INT8_MIN;
	int32_t x36 = 16364864;

	t5 = ((x33^x34)+(x35+x36));

	if (t5 != 16364779LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = -1;
	volatile uint32_t x39 = 66U;
	uint32_t t6 = 35U;

	t6 = ((x37^x38)+(x39+x40));

	if (t6 != 62997U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x45 = UINT32_MAX;
	int16_t x48 = 8037;
	volatile uint32_t t7 = 85874U;

	t7 = ((x45^x46)+(x47+x48));

	if (t7 != 8255U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	int64_t t8 = 83418LL;

	t8 = ((x49^x50)+(x51+x52));

	if (t8 != 34500LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = -1;
	int16_t x54 = -80;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 33U;
	volatile int32_t t9 = 77463208;

	t9 = ((x53^x54)+(x55+x56));

	if (t9 != -16) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 1U;
	int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	uint8_t x60 = 75U;
	volatile int64_t t10 = -20040797436049688LL;

	t10 = ((x57^x58)+(x59+x60));

	if (t10 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = 51057LL;
	int32_t x63 = INT32_MAX;
	int64_t t11 = -106310047373446075LL;

	t11 = ((x61^x62)+(x63+x64));

	if (t11 != -9223372034707241232LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t12 = 49905;

	t12 = ((x69^x70)+(x71+x72));

	if (t12 != -129) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x73 = INT8_MIN;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = -546LL;
	uint8_t x76 = 0U;
	int64_t t13 = -24906002LL;

	t13 = ((x73^x74)+(x75+x76));

	if (t13 != 9223372036854775134LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -932;
	static volatile int32_t x78 = -3;
	uint32_t x79 = UINT32_MAX;
	uint32_t t14 = 434033U;

	t14 = ((x77^x78)+(x79+x80));

	if (t14 != 966U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -1007778436238568LL;
	uint16_t x86 = 13366U;
	volatile int64_t t15 = -14443LL;

	t15 = ((x85^x86)+(x87+x88));

	if (t15 != -1007778436249694LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 2U;
	int16_t x90 = 0;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t16 = 16511453685LLU;

	t16 = ((x89^x90)+(x91+x92));

	if (t16 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x96 = INT32_MAX;

	t17 = ((x93^x94)+(x95+x96));

	if (t17 != 2147483646LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x97 = 42875570U;
	int32_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = 241489707;
	volatile uint32_t t18 = 227480U;

	t18 = ((x97^x98)+(x99+x100));

	if (t18 != 198614391U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = INT64_MIN;
	volatile int16_t x102 = INT16_MIN;
	static int8_t x103 = -3;
	uint8_t x104 = 0U;

	t19 = ((x101^x102)+(x103+x104));

	if (t19 != 9223372036854743037LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = INT16_MIN;
	int16_t x107 = 6;
	uint32_t x108 = 190U;
	uint32_t t20 = 110U;

	t20 = ((x105^x106)+(x107+x108));

	if (t20 != 32963U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 1712LLU;
	uint16_t x110 = 1526U;
	static int64_t x111 = -1LL;
	uint64_t t21 = 72503098635LLU;

	t21 = ((x109^x110)+(x111+x112));

	if (t21 != 9223372036854776644LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = 12088706LLU;
	static uint32_t x114 = 97022U;
	static int8_t x115 = -1;
	int8_t x116 = -1;

	t22 = ((x113^x114)+(x115+x116));

	if (t22 != 12128122LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = -1;
	static volatile uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	int32_t x120 = 164;
	static uint64_t t23 = 490905047430301878LLU;

	t23 = ((x117^x118)+(x119+x120));

	if (t23 != 163LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x126 = INT16_MIN;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t24 = 13780743257280LLU;

	t24 = ((x125^x126)+(x127+x128));

	if (t24 != 32775LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = INT8_MAX;
	static uint64_t x134 = UINT64_MAX;
	static volatile int64_t x135 = INT64_MIN;
	volatile int8_t x136 = INT8_MAX;

	t25 = ((x133^x134)+(x135+x136));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = 24302793;
	int16_t x138 = -3992;
	int16_t x139 = 7;
	uint16_t x140 = UINT16_MAX;
	int32_t t26 = -431491;

	t26 = ((x137^x138)+(x139+x140));

	if (t26 != -24238937) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = 4154644U;
	volatile int32_t x142 = -46030;
	int8_t x143 = INT8_MAX;
	uint32_t t27 = 0U;

	t27 = ((x141^x142)+(x143+x144));

	if (t27 != 4290783652U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x150 = 5496U;
	uint8_t x152 = 13U;
	volatile int32_t t28 = 3539;

	t28 = ((x149^x150)+(x151+x152));

	if (t28 != -27267) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t29 = 108620136776173LLU;

	t29 = ((x153^x154)+(x155+x156));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = -1LL;
	static int16_t x158 = INT16_MIN;
	uint32_t x159 = 278156679U;
	int64_t t30 = 30310LL;

	t30 = ((x157^x158)+(x159+x160));

	if (t30 != 2425673094LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = -56;
	volatile int16_t x164 = -1;
	int64_t t31 = 17LL;

	t31 = ((x161^x162)+(x163+x164));

	if (t31 != 9223372036854775750LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x166 = 18U;
	int16_t x167 = -1;
	uint32_t t32 = 829286515U;

	t32 = ((x165^x166)+(x167+x168));

	if (t32 != 1208489U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x169 = -16601889;
	volatile int64_t x170 = 606258190010106762LL;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -94;
	static int64_t t33 = -1808130051416859563LL;

	t33 = ((x169^x170)+(x171+x172));

	if (t33 != -606258190002458889LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x173 = -118961LL;
	static int8_t x174 = INT8_MIN;
	static uint32_t x175 = UINT32_MAX;
	int16_t x176 = INT16_MAX;
	int64_t t34 = -29875958365440592LL;

	t34 = ((x173^x174)+(x175+x176));

	if (t34 != 151757LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x177 = INT16_MAX;
	static int32_t x178 = INT32_MIN;
	static uint8_t x179 = 0U;
	volatile uint64_t x180 = 0LLU;
	static uint64_t t35 = 53082099320LLU;

	t35 = ((x177^x178)+(x179+x180));

	if (t35 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t36 = -819887;

	t36 = ((x181^x182)+(x183+x184));

	if (t36 != -32261) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = INT8_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile uint16_t x187 = 38U;
	int8_t x188 = INT8_MIN;
	int32_t t37 = -99629;

	t37 = ((x185^x186)+(x187+x188));

	if (t37 != 65318) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MIN;
	static uint64_t x190 = 36652514141LLU;
	static uint32_t x191 = 1479695686U;
	static int16_t x192 = -4505;
	uint64_t t38 = 3061104679823386LLU;

	t38 = ((x189^x190)+(x191+x192));

	if (t38 != 18446744038536728714LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x193 = -1;
	static int64_t x194 = -1LL;
	int8_t x195 = INT8_MIN;
	int32_t x196 = -1;

	t39 = ((x193^x194)+(x195+x196));

	if (t39 != -129LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x198 = INT16_MAX;
	uint32_t x200 = UINT32_MAX;
	uint64_t t40 = 506169361337733343LLU;

	t40 = ((x197^x198)+(x199+x200));

	if (t40 != 2087657567227893208LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x202 = -1;
	volatile uint8_t x203 = 8U;
	volatile uint16_t x204 = UINT16_MAX;
	volatile uint64_t t41 = 4053LLU;

	t41 = ((x201^x202)+(x203+x204));

	if (t41 != 18442819063912514012LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MAX;
	int8_t x207 = -41;
	static int32_t x208 = 963170737;
	int32_t t42 = -47;

	t42 = ((x205^x206)+(x207+x208));

	if (t42 != 962844891) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = UINT32_MAX;

	t43 = ((x209^x210)+(x211+x212));

	if (t43 != 2147516287U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x215 = UINT64_MAX;

	t44 = ((x213^x214)+(x215+x216));

	if (t44 != 7372324434LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x218 = -20;
	uint64_t x219 = 359671025161773885LLU;
	int32_t x220 = -1;
	uint64_t t45 = 88818LLU;

	t45 = ((x217^x218)+(x219+x220));

	if (t45 != 9583043062016549672LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	static uint64_t x223 = 45455643379264374LLU;
	uint64_t x224 = 919805760568450379LLU;
	volatile uint64_t t46 = 443130605177763926LLU;

	t46 = ((x221^x222)+(x223+x224));

	if (t46 != 965261403947714625LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x230 = INT64_MIN;
	static uint64_t x231 = 932606887LLU;
	int16_t x232 = INT16_MAX;
	uint64_t t47 = 53165939LLU;

	t47 = ((x229^x230)+(x231+x232));

	if (t47 != 9223372035639931814LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x241 = 717225144238LLU;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 122U;
	int16_t x244 = INT16_MIN;
	uint64_t t48 = 969229466290817LLU;

	t48 = ((x241^x242)+(x243+x244));

	if (t48 != 9223372754079887400LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	volatile uint8_t x248 = 0U;
	int64_t t49 = 31722186633372LL;

	t49 = ((x245^x246)+(x247+x248));

	if (t49 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = -1;
	uint16_t x252 = UINT16_MAX;
	uint32_t t50 = 3936977U;

	t50 = ((x249^x250)+(x251+x252));

	if (t50 != 65539U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x253 = INT8_MAX;
	volatile uint8_t x256 = 7U;
	volatile int32_t t51 = -2216057;

	t51 = ((x253^x254)+(x255+x256));

	if (t51 != -32548) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = -296486262;
	static int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	uint64_t x260 = 445LLU;
	volatile uint64_t t52 = 1084876349267852LLU;

	t52 = ((x257^x258)+(x259+x260));

	if (t52 != 296516678LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x261 = INT16_MAX;
	int8_t x262 = -1;
	volatile uint64_t x263 = 39699008746431LLU;
	int64_t x264 = INT64_MAX;
	volatile uint64_t t53 = 167991LLU;

	t53 = ((x261^x262)+(x263+x264));

	if (t53 != 9223411735863489470LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x269 = UINT64_MAX;
	static volatile int8_t x270 = 0;
	static uint64_t x271 = UINT64_MAX;
	int64_t x272 = -60226256LL;
	static uint64_t t54 = 1074950093663127LLU;

	t54 = ((x269^x270)+(x271+x272));

	if (t54 != 18446744073649325358LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x277 = 149U;
	static uint64_t x278 = 542228505807921LLU;
	static int32_t x279 = -420535;
	volatile uint64_t t55 = 1466LLU;

	t55 = ((x277^x278)+(x279+x280));

	if (t55 != 542232800354796LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = -1;
	int64_t x282 = -1LL;
	uint64_t x283 = 258240649832LLU;
	int64_t x284 = INT64_MAX;
	uint64_t t56 = 5311556612741921LLU;

	t56 = ((x281^x282)+(x283+x284));

	if (t56 != 9223372295095425639LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x285 = -1;
	uint32_t x286 = 0U;
	volatile int8_t x287 = 0;
	static uint8_t x288 = 0U;
	uint32_t t57 = UINT32_MAX;

	t57 = ((x285^x286)+(x287+x288));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = 30LLU;
	volatile int8_t x290 = 58;
	static int32_t x292 = -49486;
	volatile uint64_t t58 = 44599660LLU;

	t58 = ((x289^x290)+(x291+x292));

	if (t58 != 18446744073709469398LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x294 = -1;
	uint8_t x295 = 0U;
	uint16_t x296 = UINT16_MAX;
	volatile uint32_t t59 = 379892617U;

	t59 = ((x293^x294)+(x295+x296));

	if (t59 != 65535U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -25921997;
	volatile uint16_t x298 = 217U;
	static int16_t x300 = INT16_MIN;
	volatile uint64_t t60 = 2982LLU;

	t60 = ((x297^x298)+(x299+x300));

	if (t60 != 18446744073683613018LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = 56409253LL;
	static uint64_t x302 = 7465LLU;
	int8_t x303 = INT8_MAX;
	volatile uint16_t x304 = UINT16_MAX;
	volatile uint64_t t61 = 1516501469771884927LLU;

	t61 = ((x301^x302)+(x303+x304));

	if (t61 != 56467978LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x319 = -1LL;
	uint64_t t62 = 32893383LLU;

	t62 = ((x317^x318)+(x319+x320));

	if (t62 != 18446744073493971098LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 1U;
	volatile int8_t x324 = INT8_MIN;
	static int64_t t63 = -4104LL;

	t63 = ((x321^x322)+(x323+x324));

	if (t63 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MAX;
	static volatile int64_t t64 = 243646523231569173LL;

	t64 = ((x325^x326)+(x327+x328));

	if (t64 != 2147549054LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = -1;
	int16_t x330 = INT16_MAX;
	uint64_t x331 = 618530102LLU;
	uint64_t t65 = 16276531LLU;

	t65 = ((x329^x330)+(x331+x332));

	if (t65 != 618503150LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = INT32_MAX;
	static int16_t x334 = INT16_MIN;
	uint32_t x336 = 878699U;
	volatile uint32_t t66 = 610U;

	t66 = ((x333^x334)+(x335+x336));

	if (t66 != 2148395142U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x337 = 8;
	int32_t x338 = 5226978;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = -1LL;
	volatile int64_t t67 = -92528968706968LL;

	t67 = ((x337^x338)+(x339+x340));

	if (t67 != 5194217LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x341 = -34;
	int64_t x342 = -447800120042LL;
	volatile int64_t x343 = -90485940209257478LL;
	static int32_t x344 = -1332;
	static volatile int64_t t68 = -1LL;

	t68 = ((x341^x342)+(x343+x344));

	if (t68 != -90485492409138802LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x346 = INT8_MAX;
	volatile int32_t x347 = INT32_MIN;
	static volatile uint32_t x348 = UINT32_MAX;
	static volatile uint32_t t69 = 2U;

	t69 = ((x345^x346)+(x347+x348));

	if (t69 != 2147451006U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = -1;
	static volatile int32_t x352 = -1;
	uint32_t t70 = 127U;

	t70 = ((x349^x350)+(x351+x352));

	if (t70 != 230143U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x358 = UINT8_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = INT64_MIN;
	volatile uint64_t t71 = 39240401298187707LLU;

	t71 = ((x357^x358)+(x359+x360));

	if (t71 != 254LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 6U;
	int8_t x364 = -22;
	volatile int32_t t72 = 100929704;

	t72 = ((x361^x362)+(x363+x364));

	if (t72 != 99) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x365 = INT16_MAX;
	volatile uint64_t x368 = 1206885LLU;
	static uint64_t t73 = 3548211806LLU;

	t73 = ((x365^x366)+(x367+x368));

	if (t73 != 21011629LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x369 = 5U;
	int8_t x370 = 1;
	uint8_t x371 = 7U;
	int8_t x372 = -63;
	static int32_t t74 = 3736;

	t74 = ((x369^x370)+(x371+x372));

	if (t74 != -52) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x374 = -6661LL;
	uint8_t x375 = 0U;
	int8_t x376 = -1;
	int64_t t75 = 2672765735508043LL;

	t75 = ((x373^x374)+(x375+x376));

	if (t75 != -1077127174885579415LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = -1;
	static int64_t x379 = INT64_MAX;
	int32_t x380 = -1;

	t76 = ((x377^x378)+(x379+x380));

	if (t76 != 9223372036854710270LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x381 = -614211686;
	uint64_t x382 = 41881715LLU;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;

	t77 = ((x381^x382)+(x383+x384));

	if (t77 != 18446744070909644776LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = 22546175857972LL;
	static uint16_t x396 = 1585U;

	t78 = ((x393^x394)+(x395+x396));

	if (t78 != -9223349490678916250LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x397 = -12300293316252LL;
	uint8_t x399 = 3U;
	uint8_t x400 = 0U;
	static int64_t t79 = -30LL;

	t79 = ((x397^x398)+(x399+x400));

	if (t79 != 12300293316254LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	int64_t t80 = 109650LL;

	t80 = ((x401^x402)+(x403+x404));

	if (t80 != -11510486988LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	static uint8_t x407 = 13U;
	static uint8_t x408 = 0U;
	int64_t t81 = 41079006738LL;

	t81 = ((x405^x406)+(x407+x408));

	if (t81 != 9223372036854743053LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x409 = -1085716;
	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MAX;
	int16_t x412 = -7;

	t82 = ((x409^x410)+(x411+x412));

	if (t82 != 2146397835) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x413 = INT32_MAX;
	uint32_t x414 = 118592U;
	volatile int32_t x415 = 87;

	t83 = ((x413^x414)+(x415+x416));

	if (t83 != 2415438586U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x419 = 2512266882183LLU;
	uint8_t x420 = UINT8_MAX;
	static uint64_t t84 = 48162485800014LLU;

	t84 = ((x417^x418)+(x419+x420));

	if (t84 != 2516561849733LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x421 = INT8_MIN;
	static int16_t x422 = -6398;
	int8_t x423 = INT8_MIN;
	static int32_t x424 = -5;
	int32_t t85 = -1;

	t85 = ((x421^x422)+(x423+x424));

	if (t85 != 6141) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MIN;
	static uint8_t x428 = 3U;

	t86 = ((x425^x426)+(x427+x428));

	if (t86 != -32765) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x429 = UINT64_MAX;
	volatile uint64_t x431 = UINT64_MAX;
	volatile uint64_t t87 = 32438113LLU;

	t87 = ((x429^x430)+(x431+x432));

	if (t87 != 2438555190887LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = 6U;
	static int16_t x435 = 11454;
	int16_t x436 = -1;

	t88 = ((x433^x434)+(x435+x436));

	if (t88 != 11702) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	volatile int32_t x438 = INT32_MIN;
	volatile int8_t x439 = -1;
	int8_t x440 = -1;
	volatile int32_t t89 = -238997;

	t89 = ((x437^x438)+(x439+x440));

	if (t89 != 2147450878) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x454 = 5U;
	volatile int16_t x455 = INT16_MIN;
	uint8_t x456 = 15U;

	t90 = ((x453^x454)+(x455+x456));

	if (t90 != 4294934596U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x461 = 103U;
	static int16_t x462 = INT16_MIN;
	uint8_t x463 = 1U;
	uint8_t x464 = 1U;

	t91 = ((x461^x462)+(x463+x464));

	if (t91 != -32663) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x465 = -1LL;
	uint32_t x467 = UINT32_MAX;
	static int8_t x468 = INT8_MAX;

	t92 = ((x465^x466)+(x467+x468));

	if (t92 != 118LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MAX;
	static int32_t x472 = INT32_MIN;
	static volatile uint32_t t93 = 293503847U;

	t93 = ((x469^x470)+(x471+x472));

	if (t93 != 4294934527U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x473 = -1;
	uint8_t x474 = 31U;
	static volatile uint32_t x476 = UINT32_MAX;
	volatile uint64_t t94 = 24769549155865913LLU;

	t94 = ((x473^x474)+(x475+x476));

	if (t94 != 4294967320LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = -1;
	volatile uint16_t x479 = 3875U;
	int32_t x480 = INT32_MIN;

	t95 = ((x477^x478)+(x479+x480));

	if (t95 != -2147479773) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x482 = INT64_MAX;
	int16_t x483 = INT16_MIN;
	static int32_t x484 = -1;

	t96 = ((x481^x482)+(x483+x484));

	if (t96 != 9223372036854742783LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = INT16_MIN;
	static int8_t x486 = -11;
	uint8_t x487 = UINT8_MAX;

	t97 = ((x485^x486)+(x487+x488));

	if (t97 != 32990) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x489 = INT32_MIN;
	volatile uint8_t x490 = 2U;
	static uint8_t x492 = 0U;
	int32_t t98 = 75;

	t98 = ((x489^x490)+(x491+x492));

	if (t98 != -2147483645) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x497 = INT16_MIN;
	static uint8_t x498 = UINT8_MAX;
	uint64_t x499 = 52522098514474675LLU;
	uint32_t x500 = UINT32_MAX;
	volatile uint64_t t99 = 12086271922LLU;

	t99 = ((x497^x498)+(x499+x500));

	if (t99 != 52522102809409457LLU) { NG(); } else { ; }
	
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

