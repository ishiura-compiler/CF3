#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int8_t x12 = INT8_MAX;
volatile uint64_t x15 = 783420920090442201LLU;
uint64_t t2 = UINT64_MAX;
int8_t x18 = INT8_MIN;
int16_t x19 = -1;
uint64_t x25 = UINT64_MAX;
int16_t x31 = INT16_MIN;
uint32_t x35 = 1028534U;
uint16_t x45 = UINT16_MAX;
int16_t x52 = 1;
static volatile int32_t x60 = INT32_MIN;
int32_t t15 = -1;
int8_t x70 = INT8_MIN;
volatile uint16_t x72 = UINT16_MAX;
int8_t x77 = INT8_MAX;
static int8_t x92 = 1;
int32_t t21 = -55512543;
int64_t t23 = -3449373534726216LL;
static int16_t x107 = -3634;
static volatile int32_t x112 = 46401;
volatile int16_t x117 = INT16_MIN;
static volatile uint32_t x120 = UINT32_MAX;
int32_t x136 = -1;
int32_t x145 = INT32_MIN;
int16_t x147 = -1;
int64_t x155 = INT64_MAX;
int8_t x156 = -1;
int64_t x160 = -1LL;
int32_t t38 = -1;
uint16_t x172 = 24623U;
static int32_t x173 = INT32_MIN;
static volatile int32_t t41 = INT32_MIN;
int32_t x178 = 22;
volatile uint64_t t42 = 461431LLU;
int16_t x186 = INT16_MIN;
int16_t x192 = INT16_MAX;
static int64_t x198 = -1LL;
volatile int32_t x200 = -3817;
volatile uint64_t t46 = UINT64_MAX;
int8_t x201 = 0;
volatile int32_t x206 = INT32_MIN;
uint64_t x209 = 106LLU;
uint64_t x215 = 5651LLU;
uint32_t x216 = 2057U;
static int64_t x217 = INT64_MIN;
uint32_t x218 = 1U;
volatile int32_t x226 = -506;
int32_t x231 = INT32_MIN;
int32_t x234 = INT32_MIN;
uint32_t x241 = 10U;
static int32_t x243 = INT32_MAX;
uint32_t x245 = UINT32_MAX;
int8_t x246 = -3;
volatile int32_t x250 = INT32_MIN;
uint64_t t59 = UINT64_MAX;
volatile int8_t x253 = INT8_MIN;
int32_t x256 = INT32_MIN;
int64_t x260 = INT64_MIN;
int32_t x264 = 971317;
volatile int32_t t62 = -25;
int16_t x274 = INT16_MIN;
int8_t x280 = 37;
uint8_t x288 = 19U;
static int32_t x300 = INT32_MAX;
volatile uint8_t x302 = UINT8_MAX;
static uint64_t x306 = 8082013091943027LLU;
uint32_t x309 = UINT32_MAX;
uint8_t x310 = 49U;
int64_t x313 = INT64_MAX;
uint64_t x314 = 2LLU;
volatile int8_t x318 = INT8_MIN;
static int32_t x320 = INT32_MIN;
static uint16_t x321 = UINT16_MAX;
int32_t x323 = INT32_MIN;
uint64_t t75 = UINT64_MAX;
int64_t x326 = -1LL;
uint32_t x331 = UINT32_MAX;
volatile uint32_t t77 = 102U;
static volatile int32_t x337 = 1037;
uint32_t x344 = 94424U;
uint32_t t80 = 1U;
volatile int64_t x347 = INT64_MIN;
uint32_t x352 = UINT32_MAX;
static int64_t x355 = -1LL;
int16_t x361 = INT16_MIN;
volatile uint16_t x364 = 16U;
uint8_t x366 = 5U;
uint32_t x376 = UINT32_MAX;
volatile uint16_t x392 = 1392U;
static int8_t x396 = INT8_MAX;
volatile uint64_t x400 = 231698175912167569LLU;
static uint32_t x401 = 7U;
static int8_t x409 = INT8_MIN;
volatile int64_t x410 = -3069982534984LL;
int64_t t95 = -411507935636947433LL;
int64_t x417 = INT64_MIN;
static int16_t x420 = -31;
volatile int64_t t97 = -3806322288491636LL;
static int8_t x423 = -1;
uint16_t x425 = 3U;


void f0(void) {
	int64_t x5 = INT64_MAX;
	uint16_t x7 = 104U;
	volatile int16_t x8 = -1;
	int64_t t0 = -360651654LL;

	t0 = (x5|(x6-(x7&x8)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -1165266;
	uint16_t x11 = 860U;
	int64_t t1 = 1558130LL;

	t1 = (x9|(x10-(x11&x12)));

	if (t1 != -1165358LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 1420051964U;
	int64_t x16 = INT64_MAX;

	t2 = (x13|(x14-(x15&x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 187U;
	int8_t x20 = 0;
	int32_t t3 = 1;

	t3 = (x17|(x18-(x19&x20)));

	if (t3 != -69) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	static uint16_t x22 = UINT16_MAX;
	static int8_t x23 = -1;
	volatile int64_t x24 = -136270377692LL;
	uint64_t t4 = UINT64_MAX;

	t4 = (x21|(x22-(x23&x24)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MAX;
	int32_t x27 = 0;
	volatile int16_t x28 = 33;
	uint64_t t5 = UINT64_MAX;

	t5 = (x25|(x26-(x27&x28)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 22;
	int8_t x30 = -1;
	int16_t x32 = 1;
	volatile int32_t t6 = 743370104;

	t6 = (x29|(x30-(x31&x32)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int64_t x34 = -1LL;
	uint8_t x36 = UINT8_MAX;
	volatile int64_t t7 = -439LL;

	t7 = (x33|(x34-(x35&x36)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = 7U;
	int32_t x40 = -1;
	int64_t t8 = INT64_MAX;

	t8 = (x37|(x38-(x39&x40)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MAX;
	int16_t x42 = -376;
	int8_t x43 = INT8_MAX;
	uint8_t x44 = UINT8_MAX;
	static volatile int32_t t9 = -14091899;

	t9 = (x41|(x42-(x43&x44)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 1U;
	volatile uint32_t t10 = 1U;

	t10 = (x45|(x46-(x47&x48)));

	if (t10 != 2147549183U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	uint32_t x50 = 954U;
	int32_t x51 = INT32_MAX;
	static volatile uint32_t t11 = UINT32_MAX;

	t11 = (x49|(x50-(x51&x52)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 78U;
	int16_t x54 = INT16_MAX;
	static uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 162451718813737LL;

	t12 = (x53|(x54-(x55&x56)));

	if (t12 != -4294934450LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	int16_t x58 = INT16_MIN;
	static volatile int8_t x59 = 3;
	static int32_t t13 = 119;

	t13 = (x57|(x58-(x59&x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 200839666U;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = INT16_MIN;
	uint32_t x64 = 38128369U;
	static uint32_t t14 = 65384746U;

	t14 = (x61|(x62-(x63&x64)));

	if (t14 != 4294639615U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 0U;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -7;
	static int16_t x68 = INT16_MIN;

	t15 = (x65|(x66-(x67&x68)));

	if (t15 != 32640) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 47U;
	uint32_t x71 = 14039U;
	volatile uint32_t t16 = 892U;

	t16 = (x69|(x70-(x71&x72)));

	if (t16 != 4294953135U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 293678702888LL;
	static volatile int16_t x74 = INT16_MAX;
	uint16_t x75 = UINT16_MAX;
	int32_t x76 = -1;
	static int64_t t17 = 24447818667LL;

	t17 = (x73|(x74-(x75&x76)));

	if (t17 != -7896LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x78 = INT8_MAX;
	int16_t x79 = -2;
	int64_t x80 = 10758LL;
	int64_t t18 = -1476553225527345LL;

	t18 = (x77|(x78-(x79&x80)));

	if (t18 != -10625LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = UINT32_MAX;
	uint32_t x83 = 82U;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t19 = 2823868543169403646LLU;

	t19 = (x81|(x82-(x83&x84)));

	if (t19 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	volatile int32_t x86 = 344;
	volatile uint8_t x87 = 0U;
	static int64_t x88 = -3282261562LL;
	int64_t t20 = 2979656841968366083LL;

	t20 = (x85|(x86-(x87&x88)));

	if (t20 != -32424LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 0U;
	int8_t x90 = -1;
	static int16_t x91 = -1;

	t21 = (x89|(x90-(x91&x92)));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -7;
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = -1;
	int64_t x96 = -1LL;
	volatile int64_t t22 = 21306557874479LL;

	t22 = (x93|(x94-(x95&x96)));

	if (t22 != -7LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = -1;
	int8_t x98 = INT8_MIN;
	static int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MAX;

	t23 = (x97|(x98-(x99&x100)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MAX;
	int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MIN;
	static int32_t t24 = 58344;

	t24 = (x101|(x102-(x103&x104)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 13600702;
	int32_t x106 = INT32_MAX;
	int64_t x108 = -633211617160LL;
	volatile int64_t t25 = 22952915157211LL;

	t25 = (x105|(x106-(x107&x108)));

	if (t25 != 635367849919LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	int8_t x111 = -55;
	int64_t t26 = -1278LL;

	t26 = (x109|(x110-(x111&x112)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = 1956733U;
	int8_t x119 = INT8_MIN;
	uint32_t t27 = 131894770U;

	t27 = (x117|(x118-(x119&x120)));

	if (t27 != 4294958077U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	static int16_t x122 = INT16_MAX;
	static int32_t x123 = -1708559;
	volatile int16_t x124 = INT16_MAX;
	static int64_t t28 = -187593373LL;

	t28 = (x121|(x122-(x123&x124)));

	if (t28 != -9223372036854771186LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x125 = INT16_MAX;
	uint8_t x126 = 14U;
	int32_t x127 = 336;
	uint16_t x128 = 1094U;
	int32_t t29 = -24508;

	t29 = (x125|(x126-(x127&x128)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x130 = -345544155;
	int32_t x131 = -250144;
	uint8_t x132 = UINT8_MAX;
	static volatile int32_t t30 = -32236;

	t30 = (x129|(x130-(x131&x132)));

	if (t30 != -345544379) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 413991022LLU;
	static uint16_t x134 = 1U;
	int8_t x135 = -10;
	volatile uint64_t t31 = 971798927703928121LLU;

	t31 = (x133|(x134-(x135&x136)));

	if (t31 != 413991023LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 146400762U;
	static uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = 175569223623617LLU;
	static uint64_t t32 = 79LLU;

	t32 = (x137|(x138-(x139&x140)));

	if (t32 != 4294966782LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = INT32_MAX;
	static int64_t x142 = -689587711370LL;
	static volatile int32_t x143 = INT32_MAX;
	uint16_t x144 = UINT16_MAX;
	static int64_t t33 = -314LL;

	t33 = (x141|(x142-(x143&x144)));

	if (t33 != -689342251009LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x146 = 14U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t34 = -7;

	t34 = (x145|(x146-(x147&x148)));

	if (t34 != -2147450866) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = -923;
	static uint64_t x150 = 20323LLU;
	int64_t x151 = INT64_MAX;
	int32_t x152 = -1;
	uint64_t t35 = 13744LLU;

	t35 = (x149|(x150-(x151&x152)));

	if (t35 != 18446744073709551461LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	static int16_t x154 = INT16_MAX;
	int64_t t36 = -430LL;

	t36 = (x153|(x154-(x155&x156)));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	volatile int8_t x158 = -7;
	uint32_t x159 = 1151U;
	static volatile int64_t t37 = 1295961LL;

	t37 = (x157|(x158-(x159&x160)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MAX;
	static int8_t x162 = 7;
	volatile int8_t x163 = 0;
	int16_t x164 = -1;

	t38 = (x161|(x162-(x163&x164)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 13066647;
	int64_t x166 = INT64_MAX;
	int32_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	static int64_t t39 = 425260335497186731LL;

	t39 = (x165|(x166-(x167&x168)));

	if (t39 != 9223372032572875159LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = -5;
	int64_t x170 = -1LL;
	static int16_t x171 = INT16_MIN;
	static int64_t t40 = -2LL;

	t40 = (x169|(x170-(x171&x172)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x174 = 0U;
	volatile int32_t x175 = 99;
	static int8_t x176 = INT8_MIN;

	t41 = (x173|(x174-(x175&x176)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x179 = 213488393226210LLU;
	static int32_t x180 = -1;

	t42 = (x177|(x178-(x179&x180)));

	if (t42 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -669;
	uint16_t x187 = 1U;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t43 = 1;

	t43 = (x185|(x186-(x187&x188)));

	if (t43 != -669) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -2591;
	uint64_t x190 = 255894003716334163LLU;
	int8_t x191 = INT8_MIN;
	static volatile uint64_t t44 = 33379221LLU;

	t44 = (x189|(x190-(x191&x192)));

	if (t44 != 18446744073709549555LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	uint8_t x194 = 1U;
	uint16_t x195 = 76U;
	static int8_t x196 = INT8_MIN;
	uint32_t t45 = UINT32_MAX;

	t45 = (x193|(x194-(x195&x196)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = 363539280767996080LLU;
	uint8_t x199 = 0U;

	t46 = (x197|(x198-(x199&x200)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = -20489;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MIN;
	uint32_t t47 = 6056U;

	t47 = (x201|(x202-(x203&x204)));

	if (t47 != 4294946935U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x205 = 60U;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MAX;
	int32_t t48 = -127;

	t48 = (x205|(x206-(x207&x208)));

	if (t48 != -2147483588) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x210 = -37;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	uint64_t t49 = 0LLU;

	t49 = (x209|(x210-(x211&x212)));

	if (t49 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int16_t x214 = 0;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x213|(x214-(x215&x216)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x219 = INT64_MIN;
	uint16_t x220 = 1777U;
	volatile int64_t t51 = -270852LL;

	t51 = (x217|(x218-(x219&x220)));

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = INT32_MIN;
	volatile int8_t x222 = -1;
	uint16_t x223 = 2988U;
	uint64_t x224 = UINT64_MAX;
	uint64_t t52 = 944676441135791LLU;

	t52 = (x221|(x222-(x223&x224)));

	if (t52 != 18446744073709548627LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = -1;
	uint8_t x227 = 52U;
	volatile int32_t x228 = INT32_MAX;
	int32_t t53 = 80;

	t53 = (x225|(x226-(x227&x228)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MAX;
	int32_t x230 = -1;
	int8_t x232 = -1;
	static volatile int32_t t54 = INT32_MAX;

	t54 = (x229|(x230-(x231&x232)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	int64_t x235 = -8079780LL;
	uint32_t x236 = 11U;
	volatile int64_t t55 = -14095494687948LL;

	t55 = (x233|(x234-(x235&x236)));

	if (t55 != -2147483649LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = INT32_MIN;
	uint8_t x238 = 9U;
	volatile int8_t x239 = INT8_MIN;
	static uint16_t x240 = 16027U;
	int32_t t56 = -1;

	t56 = (x237|(x238-(x239&x240)));

	if (t56 != -15991) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x242 = 2U;
	int32_t x244 = INT32_MIN;
	uint32_t t57 = 434522U;

	t57 = (x241|(x242-(x243&x244)));

	if (t57 != 10U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x247 = INT8_MAX;
	uint64_t x248 = 36656LLU;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (x245|(x246-(x247&x248)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x251 = -24;
	static int16_t x252 = -191;

	t59 = (x249|(x250-(x251&x252)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = -1;
	uint8_t x255 = 23U;
	volatile int32_t t60 = -406557874;

	t60 = (x253|(x254-(x255&x256)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 28U;
	static int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	volatile int64_t t61 = -235367542LL;

	t61 = (x257|(x258-(x259&x260)));

	if (t61 != -100LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = 0;
	static int16_t x263 = -1;

	t62 = (x261|(x262-(x263&x264)));

	if (t62 != -950273) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	static volatile int8_t x268 = -1;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x265|(x266-(x267&x268)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 63;
	static uint16_t x275 = 888U;
	uint32_t x276 = 26707U;
	static uint32_t t64 = 30259U;

	t64 = (x273|(x274-(x275&x276)));

	if (t64 != 4294934463U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MAX;
	static uint16_t x279 = 2674U;
	static int64_t t65 = INT64_MAX;

	t65 = (x277|(x278-(x279&x280)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x281 = -1;
	volatile uint32_t x282 = 160541823U;
	uint8_t x283 = 3U;
	int16_t x284 = -2213;
	static volatile uint32_t t66 = UINT32_MAX;

	t66 = (x281|(x282-(x283&x284)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x285 = 32U;
	int8_t x286 = 13;
	int64_t x287 = INT64_MIN;
	volatile int64_t t67 = -91880185LL;

	t67 = (x285|(x286-(x287&x288)));

	if (t67 != 45LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x289 = INT16_MIN;
	int64_t x290 = 31988142596456LL;
	volatile int64_t x291 = INT64_MAX;
	int16_t x292 = 3886;
	static int64_t t68 = -50LL;

	t68 = (x289|(x290-(x291&x292)));

	if (t68 != -11718LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MIN;
	volatile int16_t x298 = -1;
	uint64_t x299 = 41484LLU;
	volatile uint64_t t69 = 32791240LLU;

	t69 = (x297|(x298-(x299&x300)));

	if (t69 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 2U;
	int16_t x303 = 0;
	int32_t x304 = -1;
	int32_t t70 = 461814;

	t70 = (x301|(x302-(x303&x304)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x305 = 5275U;
	int8_t x307 = -1;
	int32_t x308 = -1;
	volatile uint64_t t71 = 412919162LLU;

	t71 = (x305|(x306-(x307&x308)));

	if (t71 != 8082013091944191LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x311 = 1U;
	static volatile int64_t x312 = INT64_MIN;
	int64_t t72 = 214104961018525425LL;

	t72 = (x309|(x310-(x311&x312)));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x315 = -1;
	static volatile int64_t x316 = INT64_MIN;
	uint64_t t73 = UINT64_MAX;

	t73 = (x313|(x314-(x315&x316)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = 2U;
	int64_t x319 = 1980498LL;
	int64_t t74 = 7213084LL;

	t74 = (x317|(x318-(x319&x320)));

	if (t74 != -126LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x322 = -5;
	uint64_t x324 = 1418LLU;

	t75 = (x321|(x322-(x323&x324)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = 2450999LL;
	int32_t x327 = -1;
	int16_t x328 = -3917;
	volatile int64_t t76 = -8585459036659LL;

	t76 = (x325|(x326-(x327&x328)));

	if (t76 != 2453375LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = 2;
	int32_t x330 = 213;
	uint32_t x332 = 172U;

	t77 = (x329|(x330-(x331&x332)));

	if (t77 != 43U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	static volatile int8_t x335 = -17;
	static int16_t x336 = 1;
	int32_t t78 = -8261197;

	t78 = (x333|(x334-(x335&x336)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x338 = INT64_MIN;
	volatile uint64_t x339 = UINT64_MAX;
	static int16_t x340 = INT16_MIN;
	uint64_t t79 = 40LLU;

	t79 = (x337|(x338-(x339&x340)));

	if (t79 != 9223372036854809613LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -45;
	uint32_t x342 = 1768897038U;
	volatile int8_t x343 = -5;

	t80 = (x341|(x342-(x343&x344)));

	if (t80 != 4294967287U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = INT8_MIN;
	static int16_t x348 = 0;
	int64_t t81 = 72LL;

	t81 = (x345|(x346-(x347&x348)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MAX;
	int32_t x351 = 1;
	volatile uint32_t t82 = 1997908768U;

	t82 = (x349|(x350-(x351&x352)));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile int16_t x354 = INT16_MIN;
	int32_t x356 = INT32_MAX;
	int64_t t83 = 60028LL;

	t83 = (x353|(x354-(x355&x356)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x362 = 28U;
	int16_t x363 = INT16_MAX;
	static volatile int32_t t84 = -6194111;

	t84 = (x361|(x362-(x363&x364)));

	if (t84 != -32756) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = -13193340;
	static int8_t x367 = INT8_MAX;
	int64_t x368 = -85963063821LL;
	volatile int64_t t85 = -4LL;

	t85 = (x365|(x366-(x367&x368)));

	if (t85 != -106LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = -1;
	int16_t x370 = -2884;
	static int32_t x371 = 1986372;
	int16_t x372 = INT16_MAX;
	volatile int32_t t86 = -9934;

	t86 = (x369|(x370-(x371&x372)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x373 = 1;
	static int8_t x374 = 17;
	uint32_t x375 = 298400U;
	uint32_t t87 = 9608058U;

	t87 = (x373|(x374-(x375&x376)));

	if (t87 != 4294668913U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x377 = INT8_MIN;
	volatile uint64_t x378 = 3987366LLU;
	int32_t x379 = -1;
	int16_t x380 = INT16_MIN;
	uint64_t t88 = 92040754806014157LLU;

	t88 = (x377|(x378-(x379&x380)));

	if (t88 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = INT32_MIN;
	static uint8_t x382 = UINT8_MAX;
	static volatile int8_t x383 = INT8_MIN;
	static uint8_t x384 = UINT8_MAX;
	int32_t t89 = 965393546;

	t89 = (x381|(x382-(x383&x384)));

	if (t89 != -2147483521) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = INT8_MIN;
	int32_t x386 = 604;
	int64_t x387 = -1LL;
	int8_t x388 = 1;
	static volatile int64_t t90 = 0LL;

	t90 = (x385|(x386-(x387&x388)));

	if (t90 != -37LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -2;
	uint16_t x390 = 302U;
	uint64_t x391 = UINT64_MAX;
	uint64_t t91 = 2153LLU;

	t91 = (x389|(x390-(x391&x392)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 7U;
	int16_t x395 = INT16_MIN;
	volatile int32_t t92 = 1897;

	t92 = (x393|(x394-(x395&x396)));

	if (t92 != -32761) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = 125;
	int32_t x398 = -725;
	static uint32_t x399 = 1415395785U;
	volatile uint64_t t93 = 1228458LLU;

	t93 = (x397|(x398-(x399&x400)));

	if (t93 != 18446744072562865407LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x402 = 1U;
	int16_t x403 = -1;
	int16_t x404 = INT16_MAX;
	uint32_t t94 = 13U;

	t94 = (x401|(x402-(x403&x404)));

	if (t94 != 4294934535U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x411 = INT32_MIN;
	volatile uint8_t x412 = 30U;

	t95 = (x409|(x410-(x411&x412)));

	if (t95 != -72LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 242026655227LLU;
	int8_t x414 = -3;
	volatile uint16_t x415 = 122U;
	volatile int32_t x416 = INT32_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x413|(x414-(x415&x416)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x418 = 11211U;
	volatile int8_t x419 = INT8_MIN;

	t97 = (x417|(x418-(x419&x420)));

	if (t97 != -9223372036854764469LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MIN;
	volatile uint16_t x422 = 11U;
	static volatile int16_t x424 = 21;
	int32_t t98 = -2;

	t98 = (x421|(x422-(x423&x424)));

	if (t98 != -10) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x426 = INT16_MIN;
	volatile int64_t x427 = INT64_MAX;
	volatile int16_t x428 = INT16_MIN;
	int64_t t99 = -1685635333731362067LL;

	t99 = (x425|(x426-(x427&x428)));

	if (t99 != -9223372036854775805LL) { NG(); } else { ; }
	
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

