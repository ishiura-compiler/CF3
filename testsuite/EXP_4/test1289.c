#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
int8_t x4 = -1;
volatile uint64_t t0 = 5287346LLU;
static int16_t x8 = INT16_MAX;
int16_t x10 = 10140;
int32_t x12 = INT32_MIN;
volatile int8_t x19 = 0;
static int32_t x28 = INT32_MIN;
volatile uint16_t x50 = UINT16_MAX;
int64_t x55 = -1LL;
uint8_t x56 = 101U;
volatile int32_t t12 = -155;
int8_t x57 = 10;
static uint64_t x58 = UINT64_MAX;
int32_t x62 = -1;
static volatile int64_t t14 = -167912LL;
int64_t x75 = INT64_MAX;
int16_t x78 = 3;
volatile uint8_t x79 = UINT8_MAX;
int16_t x80 = -1;
uint32_t t20 = 95U;
int8_t x94 = -1;
volatile int32_t t21 = -3;
int64_t x100 = INT64_MIN;
int64_t x103 = 315238835654810453LL;
volatile int32_t t23 = 161438400;
int32_t x105 = INT32_MIN;
uint32_t x106 = UINT32_MAX;
static int32_t x112 = 410996051;
uint8_t x120 = 4U;
int8_t x122 = 3;
uint8_t x127 = 65U;
volatile int16_t x130 = -1;
static volatile int16_t x139 = INT16_MAX;
volatile uint8_t x148 = 1U;
int64_t x151 = -1LL;
int8_t x153 = INT8_MIN;
int32_t x156 = INT32_MIN;
int16_t x157 = -1;
static int64_t x158 = 62268956LL;
int8_t x159 = 1;
static int8_t x161 = INT8_MIN;
int64_t x162 = INT64_MIN;
int32_t x165 = INT32_MAX;
static int64_t x167 = 7288509311LL;
volatile uint32_t x171 = 7457886U;
volatile int32_t t39 = 4;
static int8_t x176 = 3;
int16_t x182 = INT16_MAX;
int32_t t43 = 22149;
int64_t t44 = -90160164682603291LL;
uint32_t x203 = UINT32_MAX;
int16_t x209 = INT16_MIN;
uint16_t x212 = UINT16_MAX;
volatile int16_t x214 = -1;
volatile int64_t x219 = -1LL;
static int16_t x231 = -2131;
uint16_t x233 = 63U;
volatile int32_t t54 = -232946;
int32_t t57 = 471348976;
volatile int32_t t60 = 1616;
int64_t x270 = INT64_MIN;
static int32_t x273 = -124166;
int8_t x279 = -1;
int32_t t64 = 1;
static uint64_t x285 = 1228420801LLU;
int32_t x296 = INT32_MIN;
int32_t t68 = -431063121;
int16_t x297 = -1;
uint32_t x305 = 3793828U;
int32_t x308 = -1;
volatile uint8_t x311 = 6U;
int16_t x322 = -1;
int32_t x328 = 1714847;
volatile int32_t x332 = INT32_MIN;
uint64_t x334 = 47837353521827LLU;
static int64_t x342 = 2081859LL;
uint32_t x355 = 31174270U;
static int16_t x357 = INT16_MIN;
int16_t x364 = INT16_MIN;
volatile int16_t x366 = -64;
int32_t t85 = -22832;
int32_t x370 = INT32_MIN;
static int32_t x373 = -142334980;
static uint8_t x381 = 3U;
volatile uint8_t x384 = 2U;
static volatile int32_t t90 = 1;
int32_t t91 = 6671;
uint64_t x395 = UINT64_MAX;
volatile int16_t x396 = 36;
static volatile uint16_t x398 = 9890U;
static int16_t x401 = -1;
uint64_t x403 = UINT64_MAX;
static int8_t x406 = 0;
static int64_t t95 = 94759457LL;
int16_t x418 = -370;
volatile int32_t x419 = INT32_MIN;
int16_t x426 = 116;


void f0(void) {
	uint64_t x1 = 81103460LLU;
	uint64_t x2 = UINT64_MAX;

	t0 = (x1-(x2<(x3==x4)));

	if (t0 != 81103460LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int64_t x6 = -1LL;
	volatile int8_t x7 = 6;
	volatile int32_t t1 = -3;

	t1 = (x5-(x6<(x7==x8)));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -450;
	static volatile int16_t x11 = -1554;
	int32_t t2 = -881290789;

	t2 = (x9-(x10<(x11==x12)));

	if (t2 != -450) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int8_t x14 = -1;
	uint8_t x15 = 31U;
	uint8_t x16 = 1U;
	volatile int64_t t3 = -6771395LL;

	t3 = (x13-(x14<(x15==x16)));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = UINT64_MAX;
	static uint32_t x20 = UINT32_MAX;
	int32_t t4 = -17793;

	t4 = (x17-(x18<(x19==x20)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = -3529787291049LL;
	uint8_t x24 = 3U;
	volatile int32_t t5 = INT32_MIN;

	t5 = (x21-(x22<(x23==x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	volatile int16_t x26 = INT16_MIN;
	static uint16_t x27 = UINT16_MAX;
	static volatile int32_t t6 = -383150761;

	t6 = (x25-(x26<(x27==x28)));

	if (t6 != 2147483646) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 1U;
	int64_t x30 = -1LL;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = 10;
	static int32_t t7 = 13789;

	t7 = (x29-(x30<(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	int32_t x40 = -1;
	volatile int32_t t8 = 1003329;

	t8 = (x37-(x38<(x39==x40)));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = -378669502049137LL;
	static int16_t x44 = INT16_MIN;
	int32_t t9 = INT32_MIN;

	t9 = (x41-(x42<(x43==x44)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = INT64_MAX;
	uint8_t x47 = 70U;
	volatile uint32_t x48 = UINT32_MAX;
	uint64_t t10 = UINT64_MAX;

	t10 = (x45-(x46<(x47==x48)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 52986843352534LL;
	int64_t x51 = INT64_MIN;
	static uint64_t x52 = 2000437003LLU;
	int64_t t11 = -63791388192LL;

	t11 = (x49-(x50<(x51==x52)));

	if (t11 != 52986843352534LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 40;
	uint64_t x54 = 412213041605993645LLU;

	t12 = (x53-(x54<(x55==x56)));

	if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x59 = 27537U;
	volatile int32_t x60 = -39296;
	static volatile int32_t t13 = 212641590;

	t13 = (x57-(x58<(x59==x60)));

	if (t13 != 10) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -3542149907343621LL;
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;

	t14 = (x61-(x62<(x63==x64)));

	if (t14 != -3542149907343622LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = 1;
	uint64_t x67 = 4127410885802631520LLU;
	static int64_t x68 = INT64_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x65-(x66<(x67==x68)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = INT16_MAX;
	static uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = -175965848;

	t16 = (x69-(x70<(x71==x72)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;
	int32_t x76 = -1;
	static uint64_t t17 = 49690037552192205LLU;

	t17 = (x73-(x74<(x75==x76)));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 0U;
	static int32_t t18 = 28916;

	t18 = (x77-(x78<(x79==x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 1601626383LLU;
	int16_t x88 = INT16_MAX;
	int32_t t19 = 592;

	t19 = (x85-(x86<(x87==x88)));

	if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x89 = 10U;
	static int64_t x90 = INT64_MIN;
	int8_t x91 = -50;
	int16_t x92 = -11360;

	t20 = (x89-(x90<(x91==x92)));

	if (t20 != 9U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	int16_t x95 = INT16_MAX;
	volatile int8_t x96 = INT8_MIN;

	t21 = (x93-(x94<(x95==x96)));

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = -3;
	static uint8_t x98 = 97U;
	int64_t x99 = -1LL;
	int32_t t22 = 0;

	t22 = (x97-(x98<(x99==x100)));

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	static uint16_t x102 = 126U;
	static uint64_t x104 = UINT64_MAX;

	t23 = (x101-(x102<(x103==x104)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x107 = INT32_MAX;
	static int64_t x108 = INT64_MIN;
	int32_t t24 = INT32_MIN;

	t24 = (x105-(x106<(x107==x108)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MAX;
	volatile int16_t x110 = INT16_MAX;
	static int8_t x111 = 1;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x109-(x110<(x111==x112)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	int16_t x114 = -1;
	uint16_t x115 = 47U;
	uint64_t x116 = 240667LLU;
	static int32_t t26 = -5430;

	t26 = (x113-(x114<(x115==x116)));

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 0U;
	static volatile int64_t t27 = -49LL;

	t27 = (x117-(x118<(x119==x120)));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int32_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = 7;

	t28 = (x121-(x122<(x123==x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = 10;
	int8_t x126 = INT8_MAX;
	int64_t x128 = INT64_MIN;
	volatile int32_t t29 = -11243196;

	t29 = (x125-(x126<(x127==x128)));

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = -45;
	int8_t x131 = -24;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t30 = -24235198;

	t30 = (x129-(x130<(x131==x132)));

	if (t30 != -46) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	volatile int32_t x138 = INT32_MAX;
	static uint8_t x140 = UINT8_MAX;
	static int32_t t31 = 0;

	t31 = (x137-(x138<(x139==x140)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 2570118LLU;
	static volatile uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	static uint16_t x144 = 22258U;
	volatile uint64_t t32 = 231456257LLU;

	t32 = (x141-(x142<(x143==x144)));

	if (t32 != 2570118LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = INT32_MAX;
	static volatile int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	volatile int32_t t33 = 8842053;

	t33 = (x145-(x146<(x147==x148)));

	if (t33 != 2147483646) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	uint32_t x152 = 2U;
	int32_t t34 = 4851260;

	t34 = (x149-(x150<(x151==x152)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = -1;
	int64_t x155 = -147280936988775383LL;
	int32_t t35 = 12290755;

	t35 = (x153-(x154<(x155==x156)));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x160 = -146;
	volatile int32_t t36 = 25;

	t36 = (x157-(x158<(x159==x160)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x163 = 25U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t37 = -126933;

	t37 = (x161-(x162<(x163==x164)));

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x166 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	volatile int32_t t38 = 233493810;

	t38 = (x165-(x166<(x167==x168)));

	if (t38 != 2147483646) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int8_t x170 = INT8_MAX;
	int64_t x172 = INT64_MIN;

	t39 = (x169-(x170<(x171==x172)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	volatile uint64_t x174 = 69334707031650LLU;
	int32_t x175 = 20377;
	int32_t t40 = 523902;

	t40 = (x173-(x174<(x175==x176)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x181 = INT32_MIN;
	static int64_t x183 = INT64_MAX;
	static int16_t x184 = -1;
	volatile int32_t t41 = INT32_MIN;

	t41 = (x181-(x182<(x183==x184)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x185 = -1;
	static int8_t x186 = 0;
	int16_t x187 = INT16_MAX;
	static uint8_t x188 = 78U;
	static volatile int32_t t42 = -2;

	t42 = (x185-(x186<(x187==x188)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = INT8_MAX;
	int8_t x190 = 1;
	volatile int8_t x191 = -3;
	static int16_t x192 = INT16_MAX;

	t43 = (x189-(x190<(x191==x192)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -103LL;
	uint64_t x194 = 43654101948LLU;
	static int16_t x195 = 3910;
	volatile int8_t x196 = -1;

	t44 = (x193-(x194<(x195==x196)));

	if (t44 != -103LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x197 = UINT8_MAX;
	uint64_t x198 = 55LLU;
	volatile int8_t x199 = -1;
	static int64_t x200 = INT64_MAX;
	volatile int32_t t45 = 291;

	t45 = (x197-(x198<(x199==x200)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MAX;
	int64_t x202 = -1LL;
	uint8_t x204 = 58U;
	int64_t t46 = 212343024153576LL;

	t46 = (x201-(x202<(x203==x204)));

	if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = 280LL;
	static int64_t x206 = -1LL;
	int32_t x207 = -365403032;
	uint8_t x208 = UINT8_MAX;
	volatile int64_t t47 = -243746547LL;

	t47 = (x205-(x206<(x207==x208)));

	if (t47 != 279LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x210 = INT32_MIN;
	uint64_t x211 = 209LLU;
	int32_t t48 = 5807019;

	t48 = (x209-(x210<(x211==x212)));

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 1126;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	volatile int32_t t49 = 601144;

	t49 = (x213-(x214<(x215==x216)));

	if (t49 != 1125) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x217 = UINT8_MAX;
	volatile uint64_t x218 = UINT64_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t50 = -1810072;

	t50 = (x217-(x218<(x219==x220)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = 5662U;
	int8_t x224 = INT8_MAX;
	int32_t t51 = INT32_MIN;

	t51 = (x221-(x222<(x223==x224)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x225 = 0;
	int8_t x226 = -1;
	uint16_t x227 = 1632U;
	uint16_t x228 = 10575U;
	int32_t t52 = 436;

	t52 = (x225-(x226<(x227==x228)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = UINT8_MAX;
	volatile uint32_t x230 = 199647U;
	volatile int32_t x232 = -1;
	static int32_t t53 = -45635231;

	t53 = (x229-(x230<(x231==x232)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x234 = 17315U;
	int32_t x235 = INT32_MIN;
	static int8_t x236 = 0;

	t54 = (x233-(x234<(x235==x236)));

	if (t54 != 63) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x237 = UINT32_MAX;
	static int8_t x238 = INT8_MIN;
	int64_t x239 = -13992697140LL;
	int32_t x240 = -1;
	static volatile uint32_t t55 = 13109U;

	t55 = (x237-(x238<(x239==x240)));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = 6;
	volatile uint8_t x242 = 9U;
	volatile int8_t x243 = INT8_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t56 = 199602;

	t56 = (x241-(x242<(x243==x244)));

	if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 0U;
	int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;

	t57 = (x245-(x246<(x247==x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x249 = INT16_MAX;
	volatile int32_t x250 = -1;
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t58 = -712;

	t58 = (x249-(x250<(x251==x252)));

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x253 = 43229176U;
	int64_t x254 = 321896736570363601LL;
	uint8_t x255 = 11U;
	uint32_t x256 = 241355015U;
	static uint32_t t59 = 1463U;

	t59 = (x253-(x254<(x255==x256)));

	if (t59 != 43229176U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = INT32_MIN;

	t60 = (x261-(x262<(x263==x264)));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = -1;
	volatile int64_t x266 = INT64_MIN;
	static int8_t x267 = 0;
	uint8_t x268 = 3U;
	int32_t t61 = 249165254;

	t61 = (x265-(x266<(x267==x268)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -1LL;
	volatile int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t62 = 608364213992LL;

	t62 = (x269-(x270<(x271==x272)));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = -1LL;
	volatile int8_t x275 = INT8_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t63 = 267399;

	t63 = (x273-(x274<(x275==x276)));

	if (t63 != -124167) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = 3812;
	volatile int32_t x278 = 1;
	uint64_t x280 = UINT64_MAX;

	t64 = (x277-(x278<(x279==x280)));

	if (t64 != 3812) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x281 = 3192;
	int32_t x282 = 77593310;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t65 = -94;

	t65 = (x281-(x282<(x283==x284)));

	if (t65 != 3192) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x286 = 15U;
	static int32_t x287 = INT32_MAX;
	uint64_t x288 = 5727068LLU;
	uint64_t t66 = 774082848LLU;

	t66 = (x285-(x286<(x287==x288)));

	if (t66 != 1228420801LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MAX;
	uint64_t x290 = UINT64_MAX;
	static volatile int8_t x291 = -1;
	int8_t x292 = INT8_MAX;
	int32_t t67 = INT32_MAX;

	t67 = (x289-(x290<(x291==x292)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1;

	t68 = (x293-(x294<(x295==x296)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x298 = -1;
	uint8_t x299 = 5U;
	volatile int16_t x300 = -18;
	static int32_t t69 = -237;

	t69 = (x297-(x298<(x299==x300)));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 1408297012462118697LLU;
	int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MAX;
	int8_t x304 = -1;
	uint64_t t70 = 3592029152763965197LLU;

	t70 = (x301-(x302<(x303==x304)));

	if (t70 != 1408297012462118697LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x306 = 193U;
	uint32_t x307 = UINT32_MAX;
	static volatile uint32_t t71 = 42210U;

	t71 = (x305-(x306<(x307==x308)));

	if (t71 != 3793828U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	static int64_t x310 = INT64_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t72 = INT32_MAX;

	t72 = (x309-(x310<(x311==x312)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = INT16_MIN;
	int16_t x316 = 982;
	int64_t t73 = 21561LL;

	t73 = (x313-(x314<(x315==x316)));

	if (t73 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = UINT32_MAX;
	int8_t x319 = 21;
	static int64_t x320 = -1LL;
	int32_t t74 = -1;

	t74 = (x317-(x318<(x319==x320)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = 46;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MAX;
	int32_t t75 = 204;

	t75 = (x321-(x322<(x323==x324)));

	if (t75 != 45) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 78U;
	int8_t x326 = 0;
	int32_t x327 = -1;
	volatile int32_t t76 = -1;

	t76 = (x325-(x326<(x327==x328)));

	if (t76 != 78) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = 155215U;
	int8_t x330 = INT8_MAX;
	uint8_t x331 = 60U;
	volatile uint32_t t77 = 606995U;

	t77 = (x329-(x330<(x331==x332)));

	if (t77 != 155215U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x333 = 1601U;
	volatile int16_t x335 = INT16_MAX;
	int64_t x336 = -6LL;
	static int32_t t78 = -787498;

	t78 = (x333-(x334<(x335==x336)));

	if (t78 != 1601) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = 3LL;
	volatile int8_t x343 = -1;
	uint32_t x344 = 595U;
	volatile int64_t t79 = -3LL;

	t79 = (x341-(x342<(x343==x344)));

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = -51642;
	uint16_t x346 = 5035U;
	static int8_t x347 = INT8_MIN;
	volatile int32_t x348 = -93469524;
	int32_t t80 = 5;

	t80 = (x345-(x346<(x347==x348)));

	if (t80 != -51642) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = 1;
	uint64_t x350 = 2LLU;
	static int32_t x351 = -1;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t81 = -296073;

	t81 = (x349-(x350<(x351==x352)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x353 = 1023771363708746LL;
	volatile uint64_t x354 = UINT64_MAX;
	int32_t x356 = INT32_MIN;
	int64_t t82 = -25787872254366553LL;

	t82 = (x353-(x354<(x355==x356)));

	if (t82 != 1023771363708746LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x358 = -253685959079LL;
	int8_t x359 = 0;
	int64_t x360 = -392908733622473990LL;
	int32_t t83 = -76636;

	t83 = (x357-(x358<(x359==x360)));

	if (t83 != -32769) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x361 = 95;
	uint64_t x362 = 3LLU;
	int16_t x363 = INT16_MIN;
	volatile int32_t t84 = -3148;

	t84 = (x361-(x362<(x363==x364)));

	if (t84 != 95) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x365 = -1;
	static int16_t x367 = INT16_MIN;
	uint16_t x368 = 954U;

	t85 = (x365-(x366<(x367==x368)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x369 = -1;
	volatile uint64_t x371 = 1020110LLU;
	int64_t x372 = INT64_MAX;
	int32_t t86 = -2;

	t86 = (x369-(x370<(x371==x372)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x374 = UINT16_MAX;
	static uint8_t x375 = 0U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t87 = 2;

	t87 = (x373-(x374<(x375==x376)));

	if (t87 != -142334980) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x377 = 3965498593623358LLU;
	static int64_t x378 = -1LL;
	static uint32_t x379 = 62U;
	int8_t x380 = INT8_MIN;
	uint64_t t88 = 7471713818888689LLU;

	t88 = (x377-(x378<(x379==x380)));

	if (t88 != 3965498593623357LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x382 = INT64_MIN;
	uint8_t x383 = 1U;
	volatile int32_t t89 = -74488;

	t89 = (x381-(x382<(x383==x384)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	volatile int16_t x387 = INT16_MIN;
	uint16_t x388 = 410U;

	t90 = (x385-(x386<(x387==x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x389 = -1;
	int32_t x390 = 1;
	static volatile int16_t x391 = -1;
	int32_t x392 = INT32_MIN;

	t91 = (x389-(x390<(x391==x392)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x393 = -1;
	volatile int64_t x394 = -1LL;
	static int32_t t92 = 3796496;

	t92 = (x393-(x394<(x395==x396)));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = INT64_MIN;
	static uint32_t x399 = 194U;
	int8_t x400 = -1;
	int64_t t93 = INT64_MIN;

	t93 = (x397-(x398<(x399==x400)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x402 = UINT8_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t94 = -11;

	t94 = (x401-(x402<(x403==x404)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x405 = -1LL;
	static volatile int32_t x407 = INT32_MIN;
	int16_t x408 = INT16_MAX;

	t95 = (x405-(x406<(x407==x408)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = 3;
	volatile uint16_t x410 = UINT16_MAX;
	int16_t x411 = 99;
	int32_t x412 = INT32_MAX;
	static int32_t t96 = 16592836;

	t96 = (x409-(x410<(x411==x412)));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = 112686U;
	static volatile int16_t x414 = INT16_MIN;
	static volatile int32_t x415 = 588107692;
	uint64_t x416 = UINT64_MAX;
	volatile uint32_t t97 = 210U;

	t97 = (x413-(x414<(x415==x416)));

	if (t97 != 112685U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MAX;
	uint32_t x420 = 1427456595U;
	static int64_t t98 = 214422574190LL;

	t98 = (x417-(x418<(x419==x420)));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x425 = 1U;
	static int32_t x427 = INT32_MAX;
	volatile int64_t x428 = 0LL;
	int32_t t99 = 53450;

	t99 = (x425-(x426<(x427==x428)));

	if (t99 != 1) { NG(); } else { ; }
	
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

