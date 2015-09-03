#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t1 = -2LL;
volatile int64_t x9 = INT64_MAX;
static int32_t x10 = -21;
static uint8_t x14 = 97U;
uint8_t x19 = UINT8_MAX;
int64_t x20 = INT64_MAX;
volatile int64_t x25 = -1LL;
uint16_t x27 = UINT16_MAX;
static int32_t x44 = INT32_MIN;
int8_t x54 = -1;
volatile int64_t t13 = 200LL;
uint16_t x57 = UINT16_MAX;
static volatile int8_t x68 = -10;
uint64_t t16 = 7LLU;
int32_t x71 = -286;
volatile int64_t x72 = 174977994LL;
int8_t x75 = 43;
static int64_t x79 = -1LL;
volatile int32_t x100 = INT32_MAX;
uint32_t x103 = UINT32_MAX;
static int32_t t24 = 1632708;
static int16_t x109 = INT16_MIN;
uint64_t x112 = 8762340716789587LLU;
uint32_t t26 = 64U;
uint8_t x129 = UINT8_MAX;
int32_t t29 = -1708582;
int64_t x137 = 60LL;
int8_t x145 = INT8_MIN;
uint64_t x146 = 44LLU;
static uint64_t t33 = 786LLU;
int16_t x154 = -1;
volatile int64_t x156 = INT64_MIN;
volatile int32_t t35 = 973;
int32_t x160 = -1;
volatile uint32_t x164 = UINT32_MAX;
int8_t x165 = INT8_MIN;
volatile uint64_t t41 = UINT64_MAX;
static uint8_t x185 = 7U;
volatile int64_t t43 = -145444183857266LL;
int16_t x194 = 266;
volatile uint8_t x195 = UINT8_MAX;
int8_t x196 = 49;
int32_t t44 = 2;
uint32_t x209 = 1019U;
uint32_t t47 = 13101721U;
uint8_t x217 = 56U;
volatile uint32_t t50 = 26752U;
uint32_t x229 = 43754249U;
int32_t x238 = -755720;
int8_t x247 = INT8_MIN;
static int16_t x255 = -73;
int32_t t57 = -443803498;
uint64_t x259 = 1142704571881LLU;
uint64_t x260 = UINT64_MAX;
uint16_t x262 = 1638U;
int32_t x263 = -465804739;
int16_t x264 = 10458;
int8_t x268 = INT8_MAX;
uint64_t t60 = 7118013493865671339LLU;
int32_t x271 = -86;
volatile uint32_t x275 = 0U;
static volatile int32_t t65 = -445895;
uint16_t x301 = UINT16_MAX;
static int64_t x302 = 1205LL;
uint64_t x304 = 3282963656024634596LLU;
uint64_t x313 = 505719001931LLU;
int64_t t73 = -115LL;
int8_t x326 = -1;
int64_t x333 = -1LL;
static volatile int64_t t76 = -30582606LL;
uint16_t x339 = 5512U;
int8_t x341 = INT8_MAX;
int32_t x349 = -1;
int32_t t79 = 19344816;
int8_t x354 = INT8_MIN;
uint64_t x355 = UINT64_MAX;
int32_t x356 = -1;
uint32_t x366 = 3U;
volatile uint64_t x368 = UINT64_MAX;
volatile int64_t t83 = INT64_MAX;
int64_t t84 = 456LL;
volatile int32_t x384 = INT32_MIN;
volatile uint32_t x389 = 5033004U;
volatile int32_t x397 = INT32_MAX;
volatile int64_t x408 = -12116026LL;
int64_t x421 = 1989811901LL;
int32_t x422 = INT32_MIN;
uint64_t x423 = 3LLU;
volatile int64_t t93 = -38883301387707869LL;
int16_t x425 = 274;
static int64_t x432 = INT64_MIN;
uint32_t t95 = 204090U;
int32_t x434 = 3953817;
static int16_t x436 = INT16_MIN;
uint8_t x443 = UINT8_MAX;
int32_t x447 = INT32_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint8_t x2 = 0U;
	uint8_t x3 = 82U;
	static volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 85658;

	t0 = ((x1+x2)+(x3<x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	int64_t x6 = -1LL;
	uint64_t x7 = 120644841714576LLU;
	volatile int16_t x8 = -1;

	t1 = ((x5+x6)+(x7<x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = 2U;
	static uint8_t x12 = 17U;
	volatile int64_t t2 = 105309218805LL;

	t2 = ((x9+x10)+(x11<x12));

	if (t2 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint64_t x16 = 74LLU;
	uint32_t t3 = 15U;

	t3 = ((x13+x14)+(x15<x16));

	if (t3 != 96U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 24U;
	volatile int16_t x18 = 27;
	volatile int32_t t4 = -172124;

	t4 = ((x17+x18)+(x19<x20));

	if (t4 != 52) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -1011;
	volatile int8_t x23 = INT8_MIN;
	uint8_t x24 = 0U;
	static volatile int32_t t5 = 751;

	t5 = ((x21+x22)+(x23<x24));

	if (t5 != -33778) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = 355238173;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 10634630728995LL;

	t6 = ((x25+x26)+(x27<x28));

	if (t6 != 355238172LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 28;

	t7 = ((x29+x30)+(x31<x32));

	if (t7 != 257) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 45U;
	static uint32_t x34 = 499U;
	int16_t x35 = 1;
	int64_t x36 = -1LL;
	volatile uint32_t t8 = 872249U;

	t8 = ((x33+x34)+(x35<x36));

	if (t8 != 544U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 192424153LLU;
	static uint16_t x38 = 7U;
	static volatile int64_t x39 = INT64_MIN;
	int16_t x40 = -10;
	volatile uint64_t t9 = 6878269LLU;

	t9 = ((x37+x38)+(x39<x40));

	if (t9 != 192424161LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile uint16_t x42 = 30U;
	static int16_t x43 = 2;
	volatile int32_t t10 = -824126;

	t10 = ((x41+x42)+(x43<x44));

	if (t10 != 285) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 46U;
	uint32_t x46 = 374U;
	static int32_t x47 = 386295;
	int64_t x48 = INT64_MAX;
	volatile uint32_t t11 = 0U;

	t11 = ((x45+x46)+(x47<x48));

	if (t11 != 421U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	volatile int32_t x50 = -1;
	static volatile int32_t x51 = 30;
	int16_t x52 = 13135;
	volatile int32_t t12 = -687;

	t12 = ((x49+x50)+(x51<x52));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 6699LL;
	volatile int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;

	t13 = ((x53+x54)+(x55<x56));

	if (t13 != 6699LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = 794;
	volatile int16_t x59 = 12;
	volatile uint16_t x60 = 549U;
	volatile int32_t t14 = 10105;

	t14 = ((x57+x58)+(x59<x60));

	if (t14 != 66330) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	static int8_t x62 = 0;
	int64_t x63 = -1LL;
	uint8_t x64 = 1U;
	volatile int32_t t15 = 37;

	t15 = ((x61+x62)+(x63<x64));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = 1;
	int64_t x67 = -2967879166LL;

	t16 = ((x65+x66)+(x67<x68));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 1U;
	int16_t x70 = INT16_MAX;
	static volatile int32_t t17 = -226431830;

	t17 = ((x69+x70)+(x71<x72));

	if (t17 != 32769) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -4121LL;
	static uint16_t x74 = 1952U;
	static volatile int8_t x76 = -1;
	int64_t t18 = -4108819238966178LL;

	t18 = ((x73+x74)+(x75<x76));

	if (t18 != -2169LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x78 = UINT64_MAX;
	uint64_t x80 = 0LLU;
	static volatile uint64_t t19 = 4074154359140219LLU;

	t19 = ((x77+x78)+(x79<x80));

	if (t19 != 126LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 9315U;
	int32_t x90 = 263;
	int16_t x91 = INT16_MAX;
	uint8_t x92 = UINT8_MAX;
	static int32_t t20 = 303942446;

	t20 = ((x89+x90)+(x91<x92));

	if (t20 != 9578) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static uint64_t x94 = 16351564243983LLU;
	uint16_t x95 = 24U;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t21 = 13913LLU;

	t21 = ((x93+x94)+(x95<x96));

	if (t21 != 9223388388419019791LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 3U;
	volatile int32_t t22 = -1952;

	t22 = ((x97+x98)+(x99<x100));

	if (t22 != 2147450880) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -30699812628LL;
	int32_t x102 = INT32_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int64_t t23 = -3155333910LL;

	t23 = ((x101+x102)+(x103<x104));

	if (t23 != -32847296276LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = 0;
	static int16_t x106 = INT16_MIN;
	static volatile int8_t x107 = -1;
	int8_t x108 = INT8_MIN;

	t24 = ((x105+x106)+(x107<x108));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = -7;
	volatile uint32_t t25 = 90U;

	t25 = ((x109+x110)+(x111<x112));

	if (t25 != 4294934527U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 16U;
	uint32_t x118 = 458298331U;
	static uint16_t x119 = 15U;
	uint64_t x120 = UINT64_MAX;

	t26 = ((x117+x118)+(x119<x120));

	if (t26 != 458298348U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	volatile uint8_t x124 = UINT8_MAX;
	int32_t t27 = 47310;

	t27 = ((x121+x122)+(x123<x124));

	if (t27 != 65408) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = 0;
	volatile int64_t x127 = -6087039857326884LL;
	uint16_t x128 = 885U;
	volatile int64_t t28 = 4107549926209987001LL;

	t28 = ((x125+x126)+(x127<x128));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x130 = INT16_MAX;
	int16_t x131 = -596;
	volatile int16_t x132 = 1793;

	t29 = ((x129+x130)+(x131<x132));

	if (t29 != 33023) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	static int16_t x134 = 0;
	static volatile int8_t x135 = INT8_MAX;
	int8_t x136 = INT8_MIN;
	static int32_t t30 = -1;

	t30 = ((x133+x134)+(x135<x136));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	static volatile int32_t x140 = 811192967;
	int64_t t31 = -1023093306114LL;

	t31 = ((x137+x138)+(x139<x140));

	if (t31 != -2147483587LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MAX;
	int32_t x143 = 51660273;
	static int32_t x144 = -382091341;
	volatile int64_t t32 = -40180898658516LL;

	t32 = ((x141+x142)+(x143<x144));

	if (t32 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x147 = INT16_MAX;
	int8_t x148 = -1;

	t33 = ((x145+x146)+(x147<x148));

	if (t33 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint32_t x150 = 29446730U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	uint32_t t34 = 239977U;

	t34 = ((x149+x150)+(x151<x152));

	if (t34 != 29446985U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MIN;
	static volatile int32_t x155 = INT32_MIN;

	t35 = ((x153+x154)+(x155<x156));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = 2703;
	int8_t x159 = -1;
	static volatile int32_t t36 = -13246;

	t36 = ((x157+x158)+(x159<x160));

	if (t36 != -30065) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = 8U;
	int64_t x163 = INT64_MIN;
	int32_t t37 = -884656527;

	t37 = ((x161+x162)+(x163<x164));

	if (t37 != -119) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = 1LL;
	int8_t x167 = -1;
	volatile uint32_t x168 = 251118U;
	static volatile int64_t t38 = -15LL;

	t38 = ((x165+x166)+(x167<x168));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x169 = 3731LLU;
	int64_t x170 = -1LL;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	uint64_t t39 = 21531LLU;

	t39 = ((x169+x170)+(x171<x172));

	if (t39 != 3730LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MAX;
	volatile int8_t x179 = -13;
	int64_t x180 = -1LL;
	static int32_t t40 = INT32_MAX;

	t40 = ((x177+x178)+(x179<x180));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 0;
	static volatile uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 61505273047948490LLU;

	t41 = ((x181+x182)+(x183<x184));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x186 = 1528U;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -81;
	uint32_t t42 = 798U;

	t42 = ((x185+x186)+(x187<x188));

	if (t42 != 1536U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	int16_t x190 = 13;
	int64_t x191 = 897549106860174LL;
	uint8_t x192 = UINT8_MAX;

	t43 = ((x189+x190)+(x191<x192));

	if (t43 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;

	t44 = ((x193+x194)+(x195<x196));

	if (t44 != 138) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -1;
	int64_t x202 = -1983903105416307156LL;
	static volatile uint8_t x203 = 3U;
	uint8_t x204 = 0U;
	volatile int64_t t45 = -1540712685160LL;

	t45 = ((x201+x202)+(x203<x204));

	if (t45 != -1983903105416307157LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 1U;
	static int8_t x206 = 23;
	static int32_t x207 = -4;
	int8_t x208 = -26;
	volatile uint32_t t46 = 1302214U;

	t46 = ((x205+x206)+(x207<x208));

	if (t46 != 24U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x210 = 3051;
	static int8_t x211 = INT8_MAX;
	int8_t x212 = -4;

	t47 = ((x209+x210)+(x211<x212));

	if (t47 != 4070U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x213 = 129528U;
	volatile uint32_t x214 = 192844U;
	int16_t x215 = INT16_MIN;
	volatile uint32_t x216 = 1360U;
	static uint32_t t48 = 314U;

	t48 = ((x213+x214)+(x215<x216));

	if (t48 != 322372U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x218 = INT16_MIN;
	uint8_t x219 = 12U;
	uint64_t x220 = 1738725LLU;
	int32_t t49 = 354166;

	t49 = ((x217+x218)+(x219<x220));

	if (t49 != -32711) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x221 = UINT32_MAX;
	volatile int32_t x222 = -10;
	int32_t x223 = INT32_MAX;
	uint8_t x224 = 0U;

	t50 = ((x221+x222)+(x223<x224));

	if (t50 != 4294967285U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x230 = -3323731364LL;
	uint64_t x231 = UINT64_MAX;
	static uint32_t x232 = UINT32_MAX;
	int64_t t51 = -127LL;

	t51 = ((x229+x230)+(x231<x232));

	if (t51 != -3279977115LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -7969969LL;
	static volatile int32_t x234 = INT32_MAX;
	int32_t x235 = -7;
	int16_t x236 = INT16_MAX;
	int64_t t52 = 27332LL;

	t52 = ((x233+x234)+(x235<x236));

	if (t52 != 2139513679LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -1;
	static int16_t x239 = -375;
	static uint16_t x240 = UINT16_MAX;
	static volatile int32_t t53 = 95;

	t53 = ((x237+x238)+(x239<x240));

	if (t53 != -755720) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 32528U;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = UINT16_MAX;
	static int32_t x244 = 59090;
	volatile int32_t t54 = -168;

	t54 = ((x241+x242)+(x243<x244));

	if (t54 != -2147451120) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MIN;
	volatile uint8_t x246 = UINT8_MAX;
	volatile uint16_t x248 = 56U;
	static int32_t t55 = -1028713;

	t55 = ((x245+x246)+(x247<x248));

	if (t55 != -2147483392) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x249 = INT8_MIN;
	int64_t x250 = -1LL;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = -32163825;
	volatile int64_t t56 = 740483LL;

	t56 = ((x249+x250)+(x251<x252));

	if (t56 != -129LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	int16_t x256 = -1;

	t57 = ((x253+x254)+(x255<x256));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	volatile int32_t t58 = 3239;

	t58 = ((x257+x258)+(x259<x260));

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = 222;
	int32_t t59 = -2042465;

	t59 = ((x261+x262)+(x263<x264));

	if (t59 != 1861) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	volatile uint64_t x266 = 13143910398733289LLU;
	static int16_t x267 = -1;

	t60 = ((x265+x266)+(x267<x268));

	if (t60 != 13143910398700522LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	uint64_t t61 = 2LLU;

	t61 = ((x269+x270)+(x271<x272));

	if (t61 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x273 = 40;
	static int64_t x274 = INT64_MIN;
	uint32_t x276 = UINT32_MAX;
	int64_t t62 = 205722127LL;

	t62 = ((x273+x274)+(x275<x276));

	if (t62 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = INT64_MAX;
	volatile int32_t x278 = INT32_MIN;
	static uint64_t x279 = 3200628313LLU;
	volatile int16_t x280 = -9164;
	volatile int64_t t63 = -12049310549948893LL;

	t63 = ((x277+x278)+(x279<x280));

	if (t63 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = 0;
	static int64_t x282 = INT64_MIN;
	uint8_t x283 = 1U;
	volatile int32_t x284 = INT32_MIN;
	int64_t t64 = INT64_MIN;

	t64 = ((x281+x282)+(x283<x284));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x285 = -1;
	volatile int16_t x286 = -5;
	int16_t x287 = -1;
	int8_t x288 = INT8_MAX;

	t65 = ((x285+x286)+(x287<x288));

	if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x289 = INT64_MIN;
	uint16_t x290 = 3173U;
	int8_t x291 = 4;
	int16_t x292 = INT16_MIN;
	int64_t t66 = -235547990234769782LL;

	t66 = ((x289+x290)+(x291<x292));

	if (t66 != -9223372036854772635LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 0U;
	volatile int8_t x294 = -28;
	uint8_t x295 = 11U;
	int64_t x296 = INT64_MAX;
	int32_t t67 = 2090660;

	t67 = ((x293+x294)+(x295<x296));

	if (t67 != -27) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 2U;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = ((x297+x298)+(x299<x300));

	if (t68 != -32766) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x303 = -1;
	int64_t t69 = -9208974403LL;

	t69 = ((x301+x302)+(x303<x304));

	if (t69 != 66740LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	int32_t t70 = 474312730;

	t70 = ((x305+x306)+(x307<x308));

	if (t70 != 2147483519) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x314 = -889;
	static uint64_t x315 = 1832717LLU;
	volatile uint32_t x316 = UINT32_MAX;
	uint64_t t71 = 1590663396728371LLU;

	t71 = ((x313+x314)+(x315<x316));

	if (t71 != 505719001043LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 16469LL;
	static volatile int64_t x318 = -3408215LL;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int64_t t72 = -5224074290974278LL;

	t72 = ((x317+x318)+(x319<x320));

	if (t72 != -3391746LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = 9LL;
	int16_t x323 = -1;
	int16_t x324 = INT16_MAX;

	t73 = ((x321+x322)+(x323<x324));

	if (t73 != -118LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 1U;
	volatile int8_t x327 = 43;
	uint32_t x328 = 407U;
	int32_t t74 = 1;

	t74 = ((x325+x326)+(x327<x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	int16_t x330 = INT16_MAX;
	static uint64_t x331 = 6LLU;
	static int64_t x332 = INT64_MIN;
	static volatile int64_t t75 = -369805664278694LL;

	t75 = ((x329+x330)+(x331<x332));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x334 = 20479U;
	static int32_t x335 = 58791101;
	uint8_t x336 = UINT8_MAX;

	t76 = ((x333+x334)+(x335<x336));

	if (t76 != 20478LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 48669848U;
	volatile int8_t x338 = INT8_MAX;
	uint8_t x340 = 7U;
	volatile uint32_t t77 = 38U;

	t77 = ((x337+x338)+(x339<x340));

	if (t77 != 48669975U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x342 = 12;
	int16_t x343 = -1;
	int8_t x344 = 1;
	int32_t t78 = 978;

	t78 = ((x341+x342)+(x343<x344));

	if (t78 != 140) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x350 = 1967U;
	int8_t x351 = INT8_MAX;
	int16_t x352 = -1;

	t79 = ((x349+x350)+(x351<x352));

	if (t79 != 1966) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = 50518253;
	volatile int32_t t80 = -44925;

	t80 = ((x353+x354)+(x355<x356));

	if (t80 != 50518125) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	volatile uint16_t x363 = 1U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t81 = 144;

	t81 = ((x361+x362)+(x363<x364));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = INT32_MAX;
	uint64_t x367 = 218152679840LLU;
	volatile uint32_t t82 = 8459U;

	t82 = ((x365+x366)+(x367<x368));

	if (t82 != 2147483651U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MAX;
	static int8_t x370 = -1;
	uint32_t x371 = 7U;
	int32_t x372 = 6257395;

	t83 = ((x369+x370)+(x371<x372));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 43502U;
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	volatile int8_t x376 = INT8_MIN;

	t84 = ((x373+x374)+(x375<x376));

	if (t84 != -9223372036854732306LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = INT64_MAX;
	static int8_t x378 = INT8_MIN;
	int64_t x379 = -398939160LL;
	int16_t x380 = -13816;
	int64_t t85 = -6996730LL;

	t85 = ((x377+x378)+(x379<x380));

	if (t85 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = 57;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MAX;
	int32_t t86 = 21;

	t86 = ((x381+x382)+(x383<x384));

	if (t86 != -71) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x390 = INT16_MIN;
	int32_t x391 = -756451525;
	volatile int32_t x392 = -25824;
	static uint32_t t87 = 4533U;

	t87 = ((x389+x390)+(x391<x392));

	if (t87 != 5000237U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = -1;
	int64_t x394 = -1LL;
	uint8_t x395 = 11U;
	int32_t x396 = 1047326;
	int64_t t88 = -3973LL;

	t88 = ((x393+x394)+(x395<x396));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x398 = INT32_MIN;
	static int8_t x399 = 5;
	uint64_t x400 = 30243425721LLU;
	volatile int32_t t89 = -44;

	t89 = ((x397+x398)+(x399<x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MIN;
	static uint16_t x402 = 1291U;
	int32_t x403 = INT32_MAX;
	int16_t x404 = INT16_MIN;
	static volatile int64_t t90 = -34948698261LL;

	t90 = ((x401+x402)+(x403<x404));

	if (t90 != -9223372036854774517LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = -117LL;
	volatile int64_t x406 = -1LL;
	int8_t x407 = 27;
	static int64_t t91 = -302561907091696LL;

	t91 = ((x405+x406)+(x407<x408));

	if (t91 != -118LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x413 = -1;
	int8_t x414 = INT8_MAX;
	static int16_t x415 = 11;
	int64_t x416 = -23094428281978LL;
	volatile int32_t t92 = 424612888;

	t92 = ((x413+x414)+(x415<x416));

	if (t92 != 126) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x424 = UINT32_MAX;

	t93 = ((x421+x422)+(x423<x424));

	if (t93 != -157671746LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = -1;
	int16_t x427 = -1;
	static int64_t x428 = -221655449972LL;
	volatile int32_t t94 = -247;

	t94 = ((x425+x426)+(x427<x428));

	if (t94 != 273) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x429 = INT16_MAX;
	volatile uint32_t x430 = UINT32_MAX;
	uint8_t x431 = 6U;

	t95 = ((x429+x430)+(x431<x432));

	if (t95 != 32766U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x433 = UINT16_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int32_t t96 = 134919;

	t96 = ((x433+x434)+(x435<x436));

	if (t96 != 4019352) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = -1;
	static uint16_t x442 = 21280U;
	static int64_t x444 = INT64_MAX;
	static int32_t t97 = 9;

	t97 = ((x441+x442)+(x443<x444));

	if (t97 != 21280) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = INT16_MIN;
	int32_t x446 = 533;
	int64_t x448 = INT64_MIN;
	int32_t t98 = 0;

	t98 = ((x445+x446)+(x447<x448));

	if (t98 != -32235) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x449 = UINT32_MAX;
	uint8_t x450 = UINT8_MAX;
	int32_t x451 = -3934198;
	static int64_t x452 = INT64_MIN;
	volatile uint32_t t99 = 17U;

	t99 = ((x449+x450)+(x451<x452));

	if (t99 != 254U) { NG(); } else { ; }
	
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

