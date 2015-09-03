#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
uint64_t x6 = 16042608615LLU;
volatile uint32_t x16 = 340U;
int64_t x17 = INT64_MIN;
static volatile uint32_t x18 = 343460U;
int64_t x23 = -1030167LL;
volatile int32_t t5 = 1527033;
volatile int16_t x25 = INT16_MIN;
uint32_t x33 = 3U;
uint16_t x36 = UINT16_MAX;
int16_t x39 = 7;
int16_t x40 = INT16_MIN;
volatile int32_t t9 = -6;
static volatile uint64_t x41 = 433640LLU;
int8_t x42 = INT8_MAX;
int16_t x44 = -1;
int16_t x46 = INT16_MIN;
int32_t x47 = -1;
int32_t x48 = INT32_MIN;
int8_t x55 = INT8_MAX;
volatile int32_t t13 = 514337357;
static int8_t x57 = 0;
int32_t x62 = INT32_MIN;
static volatile int16_t x72 = INT16_MAX;
int32_t t19 = -61302064;
int32_t x81 = -1;
static uint64_t x83 = 4984553510886LLU;
static uint8_t x84 = 2U;
volatile int32_t t20 = 0;
uint8_t x89 = 7U;
int32_t x93 = INT32_MIN;
static volatile int16_t x97 = INT16_MIN;
volatile uint16_t x98 = 217U;
int16_t x102 = -115;
volatile uint64_t x106 = UINT64_MAX;
static uint16_t x110 = 3U;
static int64_t x121 = -352931247LL;
static uint16_t x131 = 922U;
static uint16_t x132 = UINT16_MAX;
static int8_t x133 = -1;
int8_t x138 = INT8_MIN;
volatile int32_t t34 = 97547199;
static int8_t x146 = 1;
uint16_t x148 = 31U;
int64_t t36 = -1747531147607605LL;
static int64_t x154 = -1LL;
volatile int32_t x155 = INT32_MAX;
int32_t t38 = 413978;
int16_t x159 = 21;
int32_t x160 = INT32_MAX;
static int32_t x161 = INT32_MIN;
static volatile int8_t x164 = INT8_MIN;
int32_t t40 = -1;
static int64_t x166 = INT64_MIN;
int8_t x170 = INT8_MIN;
volatile int32_t t42 = -2186071;
int16_t x174 = -68;
int32_t x175 = -1;
uint64_t t43 = 508LLU;
uint32_t x177 = UINT32_MAX;
int8_t x182 = INT8_MAX;
uint16_t x185 = 199U;
volatile uint64_t x190 = 2441LLU;
int32_t x196 = -1;
static int8_t x197 = INT8_MIN;
int8_t x198 = INT8_MIN;
int16_t x199 = INT16_MIN;
int8_t x202 = -1;
volatile uint64_t x206 = 3975125073914738LLU;
static uint8_t x211 = 27U;
static uint64_t x218 = UINT64_MAX;
int64_t x223 = -4156270966692077154LL;
int32_t t56 = -2;
uint64_t x229 = 33936532964980LLU;
uint32_t x230 = UINT32_MAX;
uint32_t x231 = 0U;
volatile int16_t x236 = -1;
static volatile int32_t t58 = 945317;
static int64_t x243 = -1LL;
volatile uint16_t x245 = 2208U;
static uint64_t x253 = UINT64_MAX;
static uint8_t x257 = 57U;
int64_t x266 = -58LL;
int32_t x272 = -1;
volatile int32_t t67 = -2008414;
int32_t t69 = -1;
int16_t x296 = -7;
uint32_t x303 = 706038U;
volatile int64_t x304 = 184534952447222LL;
volatile int32_t t75 = 339;
uint32_t x305 = UINT32_MAX;
static int16_t x313 = 27;
static int16_t x326 = -2;
static volatile int32_t t83 = -91397;
uint8_t x340 = 8U;
int64_t t84 = 32304LL;
int64_t x344 = INT64_MIN;
volatile uint8_t x346 = 99U;
int32_t x351 = INT32_MIN;
static int64_t x354 = INT64_MIN;
volatile int64_t x356 = INT64_MIN;
int32_t t88 = 405;
uint16_t x360 = 53U;
int16_t x363 = 811;
static int64_t x364 = -1LL;
static volatile int32_t t90 = -9;
volatile int32_t x373 = INT32_MIN;
int16_t x380 = INT16_MAX;
uint32_t x384 = 344U;
uint64_t t96 = 19201177599382599LLU;
static int8_t x393 = INT8_MIN;
static volatile uint8_t x394 = 9U;
uint64_t x398 = 434845597878350880LLU;
int16_t x400 = INT16_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = -142;
	int16_t x3 = INT16_MAX;
	volatile int32_t x4 = 186536;
	int32_t t0 = -111866;

	t0 = (x1&(x2<=(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	static int8_t x8 = 5;
	volatile int32_t t1 = 74967;

	t1 = (x5&(x6<=(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 35352LLU;
	int16_t x10 = -1;
	volatile int32_t x11 = INT32_MAX;
	static int64_t x12 = 1LL;
	volatile uint64_t t2 = 4969728695436033685LLU;

	t2 = (x9&(x10<=(x11|x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 7U;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = -645LL;
	static volatile int32_t t3 = -583510;

	t3 = (x13&(x14<=(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = 12211U;
	uint16_t x20 = 13U;
	static volatile int64_t t4 = -1LL;

	t4 = (x17&(x18<=(x19|x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint16_t x22 = 65U;
	int8_t x24 = -2;

	t5 = (x21&(x22<=(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = -1;
	volatile uint16_t x27 = UINT16_MAX;
	int32_t x28 = INT32_MAX;
	int32_t t6 = -32;

	t6 = (x25&(x26<=(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static int16_t x30 = INT16_MAX;
	static uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MAX;
	int64_t t7 = 4772227218LL;

	t7 = (x29&(x30<=(x31|x32)));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 441265LLU;
	static uint32_t t8 = 6U;

	t8 = (x33&(x34<=(x35|x36)));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	static int64_t x38 = 49961855804094LL;

	t9 = (x37&(x38<=(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x43 = 72U;
	volatile uint64_t t10 = 1348266LLU;

	t10 = (x41&(x42<=(x43|x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint32_t t11 = 618493U;

	t11 = (x45&(x46<=(x47|x48)));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 480194155;
	volatile uint32_t x50 = 827494393U;
	int16_t x51 = -1;
	uint64_t x52 = 110327LLU;
	volatile int32_t t12 = 60248;

	t12 = (x49&(x50<=(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 10773;
	uint16_t x54 = 392U;
	int32_t x56 = INT32_MAX;

	t13 = (x53&(x54<=(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -12995;
	int32_t x59 = 51786;
	uint16_t x60 = 107U;
	int32_t t14 = 6;

	t14 = (x57&(x58<=(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile uint64_t x63 = 16561662441059LLU;
	uint8_t x64 = UINT8_MAX;
	static int32_t t15 = 25;

	t15 = (x61&(x62<=(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 15699534U;
	uint8_t x67 = 27U;
	uint16_t x68 = 30U;
	int32_t t16 = 214818126;

	t16 = (x65&(x66<=(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 0U;
	volatile int64_t x71 = -15200671229548336LL;
	volatile int32_t t17 = -4806;

	t17 = (x69&(x70<=(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static int64_t x74 = INT64_MAX;
	volatile int32_t x75 = -9684;
	uint64_t x76 = 186676761351475LLU;
	int32_t t18 = 155048336;

	t18 = (x73&(x74<=(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 3828U;
	uint32_t x80 = UINT32_MAX;

	t19 = (x77&(x78<=(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = 135;

	t20 = (x81&(x82<=(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint8_t x86 = 0U;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = 1907959;
	volatile int32_t t21 = 113867;

	t21 = (x85&(x86<=(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = -150881969;
	uint32_t x91 = UINT32_MAX;
	volatile int64_t x92 = INT64_MIN;
	int32_t t22 = 975047;

	t22 = (x89&(x90<=(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = 7;

	t23 = (x93&(x94<=(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = INT8_MIN;
	static volatile int8_t x100 = INT8_MIN;
	static int32_t t24 = 15257;

	t24 = (x97&(x98<=(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	static int32_t x103 = INT32_MIN;
	uint64_t x104 = 1055678LLU;
	int32_t t25 = 158776;

	t25 = (x101&(x102<=(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 0U;
	volatile int16_t x107 = -1;
	int8_t x108 = -2;
	int32_t t26 = 11;

	t26 = (x105&(x106<=(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int32_t x111 = -1;
	uint64_t x112 = 134642LLU;
	int32_t t27 = -2;

	t27 = (x109&(x110<=(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 13;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 6246038LLU;
	int32_t x116 = 996827;
	volatile int32_t t28 = -651;

	t28 = (x113&(x114<=(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	volatile int64_t x119 = -1LL;
	volatile uint16_t x120 = 59U;
	static uint64_t t29 = 9010645LLU;

	t29 = (x117&(x118<=(x119|x120)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x122 = 157597202U;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = 1U;
	volatile int64_t t30 = -422766LL;

	t30 = (x121&(x122<=(x123|x124)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MAX;
	static int32_t x126 = INT32_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t31 = 765;

	t31 = (x125&(x126<=(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = 1102;
	int32_t t32 = -886216525;

	t32 = (x129&(x130<=(x131|x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x134 = 96U;
	int32_t x135 = -51588;
	static uint16_t x136 = 62U;
	int32_t t33 = 15415;

	t33 = (x133&(x134<=(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	volatile uint8_t x139 = 66U;
	static int16_t x140 = -1;

	t34 = (x137&(x138<=(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int32_t x142 = -1;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MAX;
	uint64_t t35 = 7531855581LLU;

	t35 = (x141&(x142<=(x143|x144)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int64_t x147 = INT64_MIN;

	t36 = (x145&(x146<=(x147|x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint16_t x150 = 23409U;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 9797;

	t37 = (x149&(x150<=(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile uint8_t x156 = 65U;

	t38 = (x153&(x154<=(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint8_t x158 = UINT8_MAX;
	int32_t t39 = -55;

	t39 = (x157&(x158<=(x159|x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 107U;
	uint16_t x163 = UINT16_MAX;

	t40 = (x161&(x162<=(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 312021888U;
	int32_t x167 = INT32_MIN;
	uint8_t x168 = UINT8_MAX;
	static volatile uint32_t t41 = 1171475U;

	t41 = (x165&(x166<=(x167|x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 101605;
	int64_t x171 = 544331139LL;
	static int8_t x172 = 2;

	t42 = (x169&(x170<=(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 335508746654968990LLU;
	uint32_t x176 = 345U;

	t43 = (x173&(x174<=(x175|x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = INT8_MIN;
	volatile int16_t x179 = -1;
	volatile int32_t x180 = -1;
	volatile uint32_t t44 = 205128931U;

	t44 = (x177&(x178<=(x179|x180)));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MAX;
	uint64_t x183 = 239026244025LLU;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 0;

	t45 = (x181&(x182<=(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -9;
	int32_t x187 = INT32_MIN;
	static uint64_t x188 = 0LLU;
	int32_t t46 = -413;

	t46 = (x185&(x186<=(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 5971U;
	uint16_t x191 = 341U;
	int32_t x192 = INT32_MIN;
	uint32_t t47 = 96795519U;

	t47 = (x189&(x190<=(x191|x192)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 79443LLU;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	volatile uint64_t t48 = 18872027052944514LLU;

	t48 = (x193&(x194<=(x195|x196)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x200 = INT8_MIN;
	int32_t t49 = 205045;

	t49 = (x197&(x198<=(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MAX;
	static int64_t x203 = 11395607215161037LL;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -2;

	t50 = (x201&(x202<=(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MAX;
	uint16_t x207 = 2U;
	uint16_t x208 = UINT16_MAX;
	int32_t t51 = 295067075;

	t51 = (x205&(x206<=(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	volatile uint16_t x210 = 53U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 1;

	t52 = (x209&(x210<=(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	volatile int8_t x214 = -31;
	int8_t x215 = -19;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -1;

	t53 = (x213&(x214<=(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static volatile int64_t x219 = -16LL;
	int64_t x220 = -1LL;
	volatile int32_t t54 = -95;

	t54 = (x217&(x218<=(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 22U;
	static int64_t x222 = INT64_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -20;

	t55 = (x221&(x222<=(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = INT8_MIN;
	int16_t x226 = -1050;
	static int16_t x227 = -12938;
	volatile int8_t x228 = -1;

	t56 = (x225&(x226<=(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x232 = UINT16_MAX;
	uint64_t t57 = 943105218516LLU;

	t57 = (x229&(x230<=(x231|x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	int64_t x235 = -750375LL;

	t58 = (x233&(x234<=(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 4476;
	int16_t x238 = INT16_MAX;
	static int32_t x239 = -52;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = -504;

	t59 = (x237&(x238<=(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static volatile uint64_t x242 = 395LLU;
	int32_t x244 = -1;
	int32_t t60 = -11728024;

	t60 = (x241&(x242<=(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 1895;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = 923U;
	volatile int32_t t61 = 80013985;

	t61 = (x245&(x246<=(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	volatile int32_t x250 = -1;
	uint64_t x251 = 340411069264LLU;
	volatile uint16_t x252 = 112U;
	int32_t t62 = -593064033;

	t62 = (x249&(x250<=(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 29LLU;
	volatile int8_t x256 = INT8_MIN;
	volatile uint64_t t63 = 25780666822LLU;

	t63 = (x253&(x254<=(x255|x256)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 26179478418479LLU;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	static int32_t t64 = 240741652;

	t64 = (x257&(x258<=(x259|x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 6U;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = 403611106908LL;
	int32_t t65 = -3499772;

	t65 = (x261&(x262<=(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 29851U;
	uint8_t x267 = 14U;
	uint16_t x268 = 154U;
	static int32_t t66 = 2;

	t66 = (x265&(x266<=(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 160;
	int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;

	t67 = (x269&(x270<=(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 13U;
	static int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t68 = 174376115;

	t68 = (x273&(x274<=(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = INT32_MIN;
	volatile int64_t x278 = 2260636161322825697LL;
	uint8_t x279 = 15U;
	uint32_t x280 = 167571944U;

	t69 = (x277&(x278<=(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile uint8_t x282 = UINT8_MAX;
	int8_t x283 = -1;
	uint32_t x284 = 684837U;
	volatile int32_t t70 = -649;

	t70 = (x281&(x282<=(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = -3917;
	static int32_t x287 = -31;
	int32_t x288 = INT32_MAX;
	int32_t t71 = 182;

	t71 = (x285&(x286<=(x287|x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = 1;
	int16_t x291 = INT16_MIN;
	static uint16_t x292 = 4U;
	int32_t t72 = -317;

	t72 = (x289&(x290<=(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 27U;
	static int64_t x294 = INT64_MIN;
	int64_t x295 = 500503576LL;
	volatile int32_t t73 = 12;

	t73 = (x293&(x294<=(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	int8_t x300 = -3;
	static int32_t t74 = -161151;

	t74 = (x297&(x298<=(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 56;
	static int32_t x302 = INT32_MAX;

	t75 = (x301&(x302<=(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 148;
	static int8_t x307 = 1;
	uint16_t x308 = 635U;
	uint32_t t76 = 12645U;

	t76 = (x305&(x306<=(x307|x308)));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static volatile uint8_t x310 = UINT8_MAX;
	static uint64_t x311 = 639643LLU;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 521343;

	t77 = (x309&(x310<=(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t78 = -16309494;

	t78 = (x313&(x314<=(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	static uint64_t x318 = UINT64_MAX;
	int16_t x319 = -8110;
	int8_t x320 = INT8_MIN;
	int64_t t79 = -948302581862LL;

	t79 = (x317&(x318<=(x319|x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = 69;
	int16_t x323 = 1;
	int32_t x324 = -449;
	volatile int32_t t80 = -22;

	t80 = (x321&(x322<=(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = -1LL;
	int32_t t81 = -62;

	t81 = (x325&(x326<=(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -429;
	int64_t x330 = -65151427760541LL;
	int32_t x331 = INT32_MIN;
	static volatile int32_t x332 = INT32_MAX;
	int32_t t82 = 395;

	t82 = (x329&(x330<=(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = UINT8_MAX;
	uint8_t x336 = UINT8_MAX;

	t83 = (x333&(x334<=(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 1740LL;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = -1;

	t84 = (x337&(x338<=(x339|x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint16_t x342 = 3760U;
	volatile int32_t x343 = INT32_MIN;
	static volatile int32_t t85 = 9368047;

	t85 = (x341&(x342<=(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = 5102;
	int16_t x347 = INT16_MIN;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 1004383535;

	t86 = (x345&(x346<=(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 24551203U;
	volatile uint8_t x352 = 7U;
	int32_t t87 = 28323866;

	t87 = (x349&(x350<=(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MAX;
	volatile int8_t x355 = INT8_MIN;

	t88 = (x353&(x354<=(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = 11103258;
	int32_t x358 = 425775;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t89 = 55;

	t89 = (x357&(x358<=(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	uint64_t x362 = 19LLU;

	t90 = (x361&(x362<=(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	volatile int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	int64_t t91 = -60LL;

	t91 = (x365&(x366<=(x367|x368)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 59U;
	volatile uint64_t x370 = 30892684885534LLU;
	int64_t x371 = 4091509884576660774LL;
	int8_t x372 = -1;
	int32_t t92 = -1;

	t92 = (x369&(x370<=(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 28U;
	int64_t x375 = -1LL;
	volatile uint8_t x376 = 3U;
	volatile int32_t t93 = -984;

	t93 = (x373&(x374<=(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MIN;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = 61;
	int32_t t94 = 1;

	t94 = (x377&(x378<=(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = 20;
	static int64_t t95 = -20156630614501712LL;

	t95 = (x381&(x382<=(x383|x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 3805994394LLU;
	volatile int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MAX;
	static volatile int64_t x388 = -2826192LL;

	t96 = (x385&(x386<=(x387|x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = 2948243U;
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x391 = -1LL;
	static volatile uint64_t x392 = 61397LLU;
	volatile uint32_t t97 = 420334699U;

	t97 = (x389&(x390<=(x391|x392)));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x395 = -1;
	uint16_t x396 = 0U;
	volatile int32_t t98 = 1058354748;

	t98 = (x393&(x394<=(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint32_t x399 = 4U;
	int32_t t99 = -6983614;

	t99 = (x397&(x398<=(x399|x400)));

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

