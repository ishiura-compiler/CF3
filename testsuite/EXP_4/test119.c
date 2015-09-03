#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = -1LL;
int32_t x10 = INT32_MAX;
uint8_t x15 = 3U;
static int32_t t7 = -1;
int8_t x44 = 16;
static int32_t t8 = -47288;
static volatile uint32_t x57 = 55225452U;
uint32_t x65 = 0U;
uint64_t x71 = UINT64_MAX;
volatile int16_t x77 = -292;
volatile int32_t t18 = 337954724;
volatile uint64_t t20 = 358700LLU;
uint16_t x105 = 718U;
volatile int32_t t23 = 1;
uint64_t x113 = 1991LLU;
static uint64_t x114 = 0LLU;
int32_t x116 = INT32_MIN;
static int64_t x133 = -1LL;
volatile int8_t x143 = 1;
static int64_t t30 = 129086779198LL;
static int64_t x147 = -1LL;
int64_t t34 = INT64_MAX;
volatile int32_t t35 = 4;
static int32_t t36 = -962;
volatile int32_t x183 = INT32_MAX;
int64_t x188 = -1LL;
uint32_t x196 = UINT32_MAX;
int8_t x197 = -8;
int16_t x204 = -1;
uint16_t x213 = 8U;
int32_t x214 = -1;
static volatile int64_t x218 = INT64_MAX;
int8_t x237 = -1;
int32_t x238 = 22310;
int16_t x248 = 113;
int16_t x249 = INT16_MAX;
int64_t x252 = INT64_MIN;
int8_t x265 = -1;
int32_t t56 = -2;
int8_t x271 = INT8_MAX;
int32_t x275 = 1;
int64_t x276 = INT64_MIN;
int32_t x277 = INT32_MIN;
volatile uint16_t x279 = UINT16_MAX;
uint16_t x284 = 2U;
static uint8_t x286 = 6U;
uint8_t x305 = UINT8_MAX;
volatile int8_t x307 = -1;
int64_t x308 = -388LL;
int16_t x319 = -1;
int32_t t68 = 2482;
int32_t x325 = 495864561;
volatile int32_t x326 = INT32_MIN;
static int16_t x330 = -699;
static int8_t x331 = INT8_MIN;
uint16_t x334 = UINT16_MAX;
int8_t x347 = -1;
uint8_t x348 = 12U;
int64_t t73 = INT64_MIN;
int16_t x349 = INT16_MIN;
int8_t x351 = -1;
int64_t x369 = INT64_MAX;
int64_t t78 = -337533806717425717LL;
int16_t x380 = INT16_MIN;
volatile uint32_t x381 = UINT32_MAX;
int8_t x382 = -2;
volatile int32_t t84 = -491;
uint64_t t85 = 12871LLU;
uint16_t x401 = 28U;
int16_t x404 = INT16_MAX;
uint64_t x431 = 26959LLU;
int32_t t91 = 255369;
volatile uint64_t x433 = 10820372359LLU;
volatile uint64_t t92 = 645236408562146873LLU;
uint16_t x437 = UINT16_MAX;
volatile uint8_t x438 = UINT8_MAX;
volatile int16_t x439 = -1;
uint32_t x443 = UINT32_MAX;
uint64_t x450 = 1900553061984LLU;
volatile uint8_t x452 = UINT8_MAX;
static int8_t x454 = INT8_MIN;
int32_t t97 = -167;
static uint64_t x459 = UINT64_MAX;
volatile uint64_t t99 = 11117997510140LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint8_t x2 = 0U;
	volatile int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x1-(x2<=(x3+x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	static int32_t x7 = -43;
	volatile int32_t t1 = 73637;

	t1 = (x5-(x6<=(x7+x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1077680054LLU;
	int8_t x11 = 0;
	int32_t x12 = 336048;
	volatile uint64_t t2 = 1LLU;

	t2 = (x9-(x10<=(x11+x12)));

	if (t2 != 1077680054LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 19;
	uint8_t x14 = 3U;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = 3190;

	t3 = (x13-(x14<=(x15+x16)));

	if (t3 != 19) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -57;
	volatile int32_t x18 = -1;
	volatile int32_t x19 = 3;
	static int32_t x20 = 1499;
	volatile int32_t t4 = 898;

	t4 = (x17-(x18<=(x19+x20)));

	if (t4 != -58) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 1126418485LL;
	int8_t x22 = 17;
	uint8_t x23 = 30U;
	int32_t x24 = INT32_MIN;
	static volatile int64_t t5 = 434288LL;

	t5 = (x21-(x22<=(x23+x24)));

	if (t5 != 1126418485LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 2;
	int32_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	uint32_t x32 = 447U;
	int32_t t6 = 16958542;

	t6 = (x29-(x30<=(x31+x32)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;

	t7 = (x37-(x38<=(x39+x40)));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MAX;
	uint32_t x42 = 39070675U;
	int8_t x43 = -1;

	t8 = (x41-(x42<=(x43+x44)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint32_t x46 = 1369137688U;
	volatile int64_t x47 = -1LL;
	int32_t x48 = INT32_MIN;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (x45-(x46<=(x47+x48)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = -1;
	int16_t x52 = -1;
	int32_t t10 = 65177;

	t10 = (x49-(x50<=(x51+x52)));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = 156472;
	int32_t x54 = INT32_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	static int16_t x56 = 0;
	volatile int32_t t11 = -111252;

	t11 = (x53-(x54<=(x55+x56)));

	if (t11 != 156471) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = INT32_MAX;
	static int64_t x59 = INT64_MIN;
	uint32_t x60 = UINT32_MAX;
	uint32_t t12 = 5693191U;

	t12 = (x57-(x58<=(x59+x60)));

	if (t12 != 55225452U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = 5431U;
	int16_t x62 = -3;
	int32_t x63 = -1;
	int8_t x64 = INT8_MIN;
	uint32_t t13 = 6559U;

	t13 = (x61-(x62<=(x63+x64)));

	if (t13 != 5431U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x66 = INT16_MIN;
	uint32_t x67 = UINT32_MAX;
	static volatile uint64_t x68 = 90825354107148537LLU;
	static uint32_t t14 = 173U;

	t14 = (x65-(x66<=(x67+x68)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = -1;
	static volatile int32_t x70 = INT32_MIN;
	static volatile uint64_t x72 = UINT64_MAX;
	int32_t t15 = -1968;

	t15 = (x69-(x70<=(x71+x72)));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -32046757;
	volatile int16_t x74 = -1;
	uint16_t x75 = 1U;
	volatile int16_t x76 = 5;
	volatile int32_t t16 = 6821479;

	t16 = (x73-(x74<=(x75+x76)));

	if (t16 != -32046758) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x78 = 1U;
	uint32_t x79 = 370571307U;
	uint16_t x80 = UINT16_MAX;
	static int32_t t17 = 113083;

	t17 = (x77-(x78<=(x79+x80)));

	if (t17 != -293) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = -1;
	volatile int64_t x82 = -11146498980LL;
	int16_t x83 = INT16_MAX;
	static int64_t x84 = -304LL;

	t18 = (x81-(x82<=(x83+x84)));

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = INT16_MAX;
	volatile int8_t x87 = INT8_MAX;
	int8_t x88 = -42;
	volatile int32_t t19 = 1312;

	t19 = (x85-(x86<=(x87+x88)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x93 = 5890766092868LLU;
	int64_t x94 = -946204016948LL;
	static uint16_t x95 = UINT16_MAX;
	volatile int64_t x96 = 319844629285155718LL;

	t20 = (x93-(x94<=(x95+x96)));

	if (t20 != 5890766092867LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	static int8_t x102 = INT8_MAX;
	volatile uint64_t x103 = 1LLU;
	static int32_t x104 = 12;
	static volatile int32_t t21 = 26;

	t21 = (x101-(x102<=(x103+x104)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = INT32_MIN;
	static volatile int8_t x107 = INT8_MAX;
	int16_t x108 = 61;
	static int32_t t22 = -2344;

	t22 = (x105-(x106<=(x107+x108)));

	if (t22 != 717) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MIN;
	uint64_t x110 = 376538LLU;
	volatile int16_t x111 = INT16_MAX;
	static int8_t x112 = 4;

	t23 = (x109-(x110<=(x111+x112)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x115 = 13;
	uint64_t t24 = 58LLU;

	t24 = (x113-(x114<=(x115+x116)));

	if (t24 != 1990LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1LL;
	int8_t x118 = 1;
	static int16_t x119 = 0;
	static int16_t x120 = INT16_MIN;
	volatile int64_t t25 = -115041LL;

	t25 = (x117-(x118<=(x119+x120)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = -1;
	static uint64_t x122 = 22756LLU;
	volatile int16_t x123 = -184;
	int8_t x124 = INT8_MIN;
	volatile int32_t t26 = 3948982;

	t26 = (x121-(x122<=(x123+x124)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 808952LL;
	static int8_t x126 = 4;
	volatile int8_t x127 = INT8_MIN;
	int8_t x128 = 9;
	int64_t t27 = 11LL;

	t27 = (x125-(x126<=(x127+x128)));

	if (t27 != 808952LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x134 = 1341765780LLU;
	int8_t x135 = INT8_MIN;
	int32_t x136 = -1;
	int64_t t28 = 251721065LL;

	t28 = (x133-(x134<=(x135+x136)));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 10U;
	int8_t x138 = -1;
	int64_t x139 = -1LL;
	uint64_t x140 = UINT64_MAX;
	int32_t t29 = 57;

	t29 = (x137-(x138<=(x139+x140)));

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = -32820282719615LL;
	volatile uint16_t x144 = 9U;

	t30 = (x141-(x142<=(x143+x144)));

	if (t30 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = 99U;
	int8_t x148 = INT8_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x145-(x146<=(x147+x148)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 669U;
	volatile int8_t x152 = 38;
	int32_t t32 = 39426760;

	t32 = (x149-(x150<=(x151+x152)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -8267461521020626LL;
	int16_t x154 = -1;
	static int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	static volatile int64_t t33 = 114LL;

	t33 = (x153-(x154<=(x155+x156)));

	if (t33 != -8267461521020626LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MAX;
	int16_t x162 = 5;
	volatile int8_t x163 = 3;
	static volatile int64_t x164 = -9884221298LL;

	t34 = (x161-(x162<=(x163+x164)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	volatile uint16_t x166 = 20350U;
	volatile uint64_t x167 = 223516897815288046LLU;
	int32_t x168 = INT32_MIN;

	t35 = (x165-(x166<=(x167+x168)));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = 13820;
	static int32_t x170 = INT32_MIN;
	volatile int32_t x171 = -1;
	volatile uint64_t x172 = UINT64_MAX;

	t36 = (x169-(x170<=(x171+x172)));

	if (t36 != 13819) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MIN;
	uint8_t x174 = 16U;
	uint32_t x175 = UINT32_MAX;
	volatile int8_t x176 = -28;
	volatile int32_t t37 = 127;

	t37 = (x173-(x174<=(x175+x176)));

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MAX;
	volatile int16_t x182 = INT16_MIN;
	int64_t x184 = 897620906LL;
	int32_t t38 = -57039301;

	t38 = (x181-(x182<=(x183+x184)));

	if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x186 = -3;
	static volatile int64_t x187 = -3283919LL;
	volatile int32_t t39 = 27705;

	t39 = (x185-(x186<=(x187+x188)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = 128;
	int8_t x190 = 1;
	int8_t x191 = -5;
	static uint16_t x192 = UINT16_MAX;
	int32_t t40 = 89030;

	t40 = (x189-(x190<=(x191+x192)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MAX;
	int64_t x194 = -1LL;
	int8_t x195 = 7;
	volatile int32_t t41 = -4032;

	t41 = (x193-(x194<=(x195+x196)));

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 29947LLU;
	int8_t x200 = INT8_MIN;
	int32_t t42 = 19810;

	t42 = (x197-(x198<=(x199+x200)));

	if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = 901344;
	static volatile int64_t x202 = INT64_MIN;
	int64_t x203 = -135965960LL;
	volatile int32_t t43 = 3;

	t43 = (x201-(x202<=(x203+x204)));

	if (t43 != 901343) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x205 = 339125558LLU;
	static int64_t x206 = -1LL;
	volatile uint64_t x207 = 215LLU;
	int64_t x208 = INT64_MAX;
	uint64_t t44 = 47234LLU;

	t44 = (x205-(x206<=(x207+x208)));

	if (t44 != 339125558LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x215 = -1;
	static uint16_t x216 = 21071U;
	volatile int32_t t45 = 28073828;

	t45 = (x213-(x214<=(x215+x216)));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MIN;
	int64_t x219 = 66960938820940LL;
	int64_t x220 = INT64_MIN;
	volatile int32_t t46 = 7925;

	t46 = (x217-(x218<=(x219+x220)));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x221 = INT32_MIN;
	int64_t x222 = 66133886LL;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;
	int32_t t47 = INT32_MIN;

	t47 = (x221-(x222<=(x223+x224)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -4059499045976721874LL;
	int8_t x230 = -1;
	volatile int8_t x231 = INT8_MAX;
	int16_t x232 = -245;
	int64_t t48 = -252LL;

	t48 = (x229-(x230<=(x231+x232)));

	if (t48 != -4059499045976721874LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 0;
	volatile int32_t t49 = 348998;

	t49 = (x233-(x234<=(x235+x236)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x239 = -1;
	uint8_t x240 = 0U;
	int32_t t50 = -4435022;

	t50 = (x237-(x238<=(x239+x240)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	volatile int16_t x243 = -5;
	int64_t x244 = INT64_MAX;
	int32_t t51 = 2;

	t51 = (x241-(x242<=(x243+x244)));

	if (t51 != -32769) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x245 = 233364U;
	volatile int16_t x246 = INT16_MAX;
	int64_t x247 = -240803902384LL;
	volatile uint32_t t52 = 25U;

	t52 = (x245-(x246<=(x247+x248)));

	if (t52 != 233364U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = -1LL;
	uint64_t x251 = 7608369961527668LLU;
	int32_t t53 = 42129;

	t53 = (x249-(x250<=(x251+x252)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MIN;
	static volatile int8_t x258 = 27;
	static volatile uint16_t x259 = 3712U;
	int64_t x260 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = (x257-(x258<=(x259+x260)));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x261 = 370276582U;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;
	uint32_t t55 = 0U;

	t55 = (x261-(x262<=(x263+x264)));

	if (t55 != 370276582U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int8_t x268 = -7;

	t56 = (x265-(x266<=(x267+x268)));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MIN;
	static int32_t x270 = -174134;
	int32_t x272 = 1;
	static int32_t t57 = 16158365;

	t57 = (x269-(x270<=(x271+x272)));

	if (t57 != -32769) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x273 = INT8_MAX;
	int8_t x274 = -1;
	volatile int32_t t58 = -13670967;

	t58 = (x273-(x274<=(x275+x276)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x278 = 34591131LLU;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x277-(x278<=(x279+x280)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 14U;
	volatile int8_t x282 = INT8_MIN;
	static int8_t x283 = -1;
	uint32_t t60 = 49013046U;

	t60 = (x281-(x282<=(x283+x284)));

	if (t60 != 13U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x285 = 20;
	uint16_t x287 = 12U;
	int16_t x288 = -1;
	int32_t t61 = 170;

	t61 = (x285-(x286<=(x287+x288)));

	if (t61 != 19) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = -1;
	int64_t x290 = 0LL;
	uint16_t x291 = 1U;
	int8_t x292 = INT8_MIN;
	static int32_t t62 = -11412;

	t62 = (x289-(x290<=(x291+x292)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = 20U;
	int64_t x300 = INT64_MIN;
	static volatile int32_t t63 = -837;

	t63 = (x297-(x298<=(x299+x300)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x301 = 355U;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = 6;
	int16_t x304 = INT16_MAX;
	volatile uint32_t t64 = 197917997U;

	t64 = (x301-(x302<=(x303+x304)));

	if (t64 != 355U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x306 = 18;
	int32_t t65 = -5507932;

	t65 = (x305-(x306<=(x307+x308)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = INT64_MAX;
	int16_t x311 = 0;
	static uint32_t x312 = 19U;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x309-(x310<=(x311+x312)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = 1;
	volatile int32_t x318 = -1;
	uint8_t x320 = 6U;
	static int32_t t67 = 7;

	t67 = (x317-(x318<=(x319+x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = -1;
	int16_t x322 = -567;
	static int32_t x323 = -223;
	int8_t x324 = -6;

	t68 = (x321-(x322<=(x323+x324)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x327 = -11758;
	int32_t x328 = -1;
	int32_t t69 = 5;

	t69 = (x325-(x326<=(x327+x328)));

	if (t69 != 495864560) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x332 = -1;
	static uint64_t t70 = 60316994985022LLU;

	t70 = (x329-(x330<=(x331+x332)));

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 353U;
	volatile int8_t x335 = INT8_MIN;
	static uint64_t x336 = UINT64_MAX;
	volatile uint32_t t71 = 737968U;

	t71 = (x333-(x334<=(x335+x336)));

	if (t71 != 352U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -1LL;
	volatile int16_t x342 = INT16_MIN;
	static volatile int8_t x343 = INT8_MAX;
	int32_t x344 = -1;
	static int64_t t72 = -121440451LL;

	t72 = (x341-(x342<=(x343+x344)));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x345 = INT64_MIN;
	uint64_t x346 = 157461635151683LLU;

	t73 = (x345-(x346<=(x347+x348)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x350 = INT8_MIN;
	volatile int8_t x352 = -63;
	int32_t t74 = -4;

	t74 = (x349-(x350<=(x351+x352)));

	if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 716863LLU;
	volatile int64_t x355 = INT64_MIN;
	uint8_t x356 = 1U;
	volatile uint64_t t75 = 213359347976LLU;

	t75 = (x353-(x354<=(x355+x356)));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MAX;
	uint8_t x359 = 16U;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t76 = 104111130;

	t76 = (x357-(x358<=(x359+x360)));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x365 = INT32_MIN;
	static volatile uint64_t x366 = 1656518964302LLU;
	int16_t x367 = INT16_MIN;
	int32_t x368 = 436899;
	static volatile int32_t t77 = INT32_MIN;

	t77 = (x365-(x366<=(x367+x368)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;

	t78 = (x369-(x370<=(x371+x372)));

	if (t78 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 435U;
	int8_t x374 = -1;
	volatile int64_t x375 = -1LL;
	int64_t x376 = -1LL;
	volatile int32_t t79 = 2;

	t79 = (x373-(x374<=(x375+x376)));

	if (t79 != 435) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = -3499010016605LL;
	static int16_t x378 = 0;
	uint8_t x379 = 1U;
	int64_t t80 = 50LL;

	t80 = (x377-(x378<=(x379+x380)));

	if (t80 != -3499010016605LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x383 = -1;
	int32_t x384 = -246883;
	uint32_t t81 = UINT32_MAX;

	t81 = (x381-(x382<=(x383+x384)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int16_t x388 = 4;
	volatile int32_t t82 = -3295297;

	t82 = (x385-(x386<=(x387+x388)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x389 = 1380U;
	int16_t x390 = INT16_MIN;
	int8_t x391 = 55;
	int16_t x392 = INT16_MIN;
	volatile int32_t t83 = -93570659;

	t83 = (x389-(x390<=(x391+x392)));

	if (t83 != 1379) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = -1;
	static uint16_t x394 = 1630U;
	uint64_t x395 = UINT64_MAX;
	volatile int16_t x396 = -1;

	t84 = (x393-(x394<=(x395+x396)));

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x397 = 9492891642101765LLU;
	static volatile int16_t x398 = -1;
	volatile int16_t x399 = -12534;
	volatile uint32_t x400 = UINT32_MAX;

	t85 = (x397-(x398<=(x399+x400)));

	if (t85 != 9492891642101765LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x402 = 2278166U;
	static volatile int8_t x403 = 6;
	int32_t t86 = -459;

	t86 = (x401-(x402<=(x403+x404)));

	if (t86 != 28) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x405 = -1;
	int8_t x406 = -1;
	int8_t x407 = 10;
	uint32_t x408 = 76174906U;
	int32_t t87 = -252850;

	t87 = (x405-(x406<=(x407+x408)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = 3368881272422LL;
	static volatile uint64_t x410 = 254686LLU;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = 0;
	int64_t t88 = -2092493629LL;

	t88 = (x409-(x410<=(x411+x412)));

	if (t88 != 3368881272422LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x413-(x414<=(x415+x416)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = 2U;
	int16_t x418 = 201;
	static int16_t x419 = -1;
	int16_t x420 = INT16_MIN;
	int32_t t90 = 434125359;

	t90 = (x417-(x418<=(x419+x420)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	static int64_t x432 = INT64_MIN;

	t91 = (x429-(x430<=(x431+x432)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x434 = -1;
	volatile uint32_t x435 = 10371U;
	volatile int16_t x436 = INT16_MAX;

	t92 = (x433-(x434<=(x435+x436)));

	if (t92 != 10820372359LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x440 = 15U;
	int32_t t93 = 1904328;

	t93 = (x437-(x438<=(x439+x440)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x441 = INT8_MIN;
	int32_t x442 = INT32_MIN;
	static uint32_t x444 = 0U;
	volatile int32_t t94 = 0;

	t94 = (x441-(x442<=(x443+x444)));

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x445 = -848;
	int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;
	int32_t t95 = -582245703;

	t95 = (x445-(x446<=(x447+x448)));

	if (t95 != -848) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x449 = INT8_MIN;
	int8_t x451 = -15;
	int32_t t96 = -3856;

	t96 = (x449-(x450<=(x451+x452)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x455 = 1U;
	uint32_t x456 = 7927U;

	t97 = (x453-(x454<=(x455+x456)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = UINT32_MAX;
	int32_t x458 = 499513644;
	uint8_t x460 = 0U;
	static uint32_t t98 = 97246147U;

	t98 = (x457-(x458<=(x459+x460)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x461 = 119840462LLU;
	int64_t x462 = -1LL;
	static int8_t x463 = -1;
	static int8_t x464 = INT8_MIN;

	t99 = (x461-(x462<=(x463+x464)));

	if (t99 != 119840462LLU) { NG(); } else { ; }
	
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

