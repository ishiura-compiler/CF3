#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x12 = -1862585317130LL;
int64_t x13 = -4797198510070LL;
int32_t t3 = -1;
uint16_t x24 = UINT16_MAX;
static int16_t x28 = INT16_MAX;
uint8_t x30 = 1U;
uint32_t x31 = 210U;
uint64_t x34 = 2010767926554991529LLU;
int64_t x36 = 205237927134763704LL;
uint64_t x37 = 218482097787263939LLU;
int64_t x40 = -1LL;
int8_t x44 = INT8_MAX;
uint16_t x51 = UINT16_MAX;
uint16_t x56 = 1U;
uint64_t x62 = 1282260LLU;
uint16_t x63 = 842U;
static int32_t t15 = 1190;
int8_t x70 = 22;
uint32_t x72 = 2656U;
volatile uint8_t x80 = 0U;
int64_t x83 = 1004365311LL;
static volatile int32_t x91 = INT32_MIN;
static volatile int32_t t23 = 979;
volatile int8_t x97 = INT8_MIN;
int64_t x108 = -149612465459919LL;
volatile uint16_t x110 = 22438U;
volatile int8_t x112 = -1;
int64_t x123 = -1LL;
int8_t x126 = -28;
int32_t t32 = -326757;
uint64_t x137 = 3682LLU;
uint8_t x140 = 9U;
volatile int16_t x146 = INT16_MAX;
volatile uint16_t x148 = UINT16_MAX;
int32_t t38 = 0;
int32_t x163 = INT32_MAX;
int8_t x167 = -8;
volatile int32_t x170 = INT32_MIN;
volatile uint64_t x172 = 1925401040470972LLU;
static int8_t x173 = INT8_MIN;
volatile int32_t t43 = 2065;
int64_t x177 = INT64_MAX;
static volatile int32_t t45 = -29;
static uint16_t x188 = 14138U;
static volatile int8_t x191 = 1;
static volatile int64_t x192 = -1LL;
uint16_t x193 = 16249U;
int16_t x194 = -7948;
static int64_t x196 = -1LL;
int32_t x197 = 177882499;
uint8_t x200 = UINT8_MAX;
int32_t t49 = 2317458;
int32_t x207 = INT32_MAX;
volatile int32_t x215 = INT32_MIN;
static int32_t t53 = 26;
uint16_t x218 = UINT16_MAX;
int8_t x221 = INT8_MAX;
volatile int16_t x225 = INT16_MIN;
static int64_t x226 = INT64_MIN;
int16_t x231 = INT16_MIN;
volatile int8_t x233 = INT8_MIN;
static uint32_t x238 = 12178225U;
static volatile int32_t x240 = -1;
int32_t t59 = -27954;
static int32_t x243 = 131757752;
volatile int64_t x244 = INT64_MIN;
volatile int32_t t61 = 1712;
uint64_t x252 = 87814668233LLU;
int8_t x259 = INT8_MAX;
int32_t t67 = -46733;
int8_t x280 = INT8_MAX;
int64_t x282 = -1LL;
uint32_t x283 = UINT32_MAX;
static uint64_t x287 = 99182730090726422LLU;
volatile int64_t x289 = -4481868LL;
uint16_t x290 = 12U;
static int8_t x294 = 1;
int8_t x297 = INT8_MIN;
volatile int64_t x302 = INT64_MIN;
int8_t x303 = -1;
int32_t x305 = INT32_MAX;
uint16_t x306 = 24U;
int32_t x307 = INT32_MIN;
static volatile int8_t x308 = 39;
uint16_t x311 = 13U;
int64_t x312 = INT64_MIN;
int32_t t77 = -13;
int8_t x313 = -2;
uint8_t x318 = UINT8_MAX;
volatile uint16_t x322 = UINT16_MAX;
uint32_t x333 = 41584400U;
volatile int32_t t83 = 1973;
int16_t x338 = -1;
int8_t x341 = INT8_MIN;
static int64_t x349 = -5465629LL;
int32_t x352 = -6684982;
static int32_t x356 = INT32_MIN;
static int32_t x357 = INT32_MIN;
uint8_t x358 = 25U;
int64_t x360 = -1LL;
uint64_t x366 = 4612178LLU;
static volatile uint64_t x368 = 253112578620406LLU;
uint16_t x396 = 28U;
volatile int16_t x398 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint8_t x2 = 0U;
	static uint16_t x3 = UINT16_MAX;
	int16_t x4 = -6;
	volatile int32_t t0 = -19887;

	t0 = (x1<(x2==(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint16_t x6 = UINT16_MAX;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 1798;

	t1 = (x5<(x6==(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = INT8_MAX;
	volatile int32_t t2 = -43696279;

	t2 = (x9<(x10==(x11==x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	volatile int16_t x15 = 1;
	int8_t x16 = INT8_MIN;

	t3 = (x13<(x14==(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = -29988619;
	static volatile uint16_t x18 = UINT16_MAX;
	int32_t x19 = -1;
	static volatile int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 11537;

	t4 = (x17<(x18==(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -801;
	static uint64_t x22 = 693127473689LLU;
	int64_t x23 = 1391174954131LL;
	volatile int32_t t5 = 1832040;

	t5 = (x21<(x22==(x23==x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -11465957;
	int32_t x26 = INT32_MIN;
	static volatile int16_t x27 = INT16_MIN;
	volatile int32_t t6 = 60213251;

	t6 = (x25<(x26==(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int64_t x32 = -1LL;
	int32_t t7 = 126089;

	t7 = (x29<(x30==(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 155094111890LLU;
	volatile int32_t x35 = -1589461;
	int32_t t8 = 432;

	t8 = (x33<(x34==(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x38 = 60U;
	int64_t x39 = INT64_MIN;
	static int32_t t9 = -42080222;

	t9 = (x37<(x38==(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x42 = 28397474834LLU;
	int64_t x43 = INT64_MAX;
	int32_t t10 = 22;

	t10 = (x41<(x42==(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -29;
	static volatile int32_t t11 = -383656;

	t11 = (x45<(x46==(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	int64_t x50 = INT64_MAX;
	static uint16_t x52 = 343U;
	int32_t t12 = -20;

	t12 = (x49<(x50==(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = 2042;
	static int64_t x55 = 1200LL;
	volatile int32_t t13 = -1;

	t13 = (x53<(x54==(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MAX;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 9LLU;
	int32_t t14 = 831939;

	t14 = (x57<(x58==(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x64 = -181873;

	t15 = (x61<(x62==(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 102U;
	uint16_t x66 = 18388U;
	volatile int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 149;

	t16 = (x65<(x66==(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 1LLU;
	int64_t x71 = -954596LL;
	int32_t t17 = -29719;

	t17 = (x69<(x70==(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -315717;
	int16_t x74 = -1;
	uint16_t x75 = 2U;
	int64_t x76 = 488LL;
	int32_t t18 = 700;

	t18 = (x73<(x74==(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	int32_t t19 = -1;

	t19 = (x77<(x78==(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint64_t x82 = 812378LLU;
	volatile uint16_t x84 = 0U;
	volatile int32_t t20 = -6;

	t20 = (x81<(x82==(x83==x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int32_t x87 = -640946;
	uint8_t x88 = 57U;
	int32_t t21 = -94248905;

	t21 = (x85<(x86==(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 105U;
	static volatile int8_t x90 = INT8_MAX;
	static int8_t x92 = -1;
	volatile int32_t t22 = 251700;

	t22 = (x89<(x90==(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = INT8_MAX;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -1;

	t23 = (x93<(x94==(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = UINT64_MAX;
	static volatile int32_t x99 = INT32_MAX;
	int64_t x100 = INT64_MAX;
	volatile int32_t t24 = -539;

	t24 = (x97<(x98==(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MAX;
	int8_t x103 = -1;
	static int16_t x104 = INT16_MAX;
	int32_t t25 = 0;

	t25 = (x101<(x102==(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 2U;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	static volatile int32_t t26 = -42069;

	t26 = (x105<(x106==(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x109 = 60U;
	static int64_t x111 = INT64_MIN;
	volatile int32_t t27 = -3446;

	t27 = (x109<(x110==(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 43U;
	static volatile uint32_t x114 = 38U;
	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -821733;

	t28 = (x113<(x114==(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = -1;
	int32_t x119 = 4158;
	int32_t x120 = -1;
	volatile int32_t t29 = 0;

	t29 = (x117<(x118==(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int8_t x122 = INT8_MIN;
	int8_t x124 = -1;
	volatile int32_t t30 = 58526;

	t30 = (x121<(x122==(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 7919366;
	uint32_t x127 = 647622617U;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -13003645;

	t31 = (x125<(x126==(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile uint32_t x130 = UINT32_MAX;
	uint8_t x131 = 3U;
	int8_t x132 = -1;

	t32 = (x129<(x130==(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	static int16_t x134 = -1;
	uint16_t x135 = 1318U;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -1;

	t33 = (x133<(x134==(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = -1;
	volatile uint16_t x139 = 1U;
	int32_t t34 = -487;

	t34 = (x137<(x138==(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile uint64_t x142 = 33477645863541LLU;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -24;
	volatile int32_t t35 = -5;

	t35 = (x141<(x142==(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = UINT32_MAX;
	static uint8_t x147 = UINT8_MAX;
	volatile int32_t t36 = 476762;

	t36 = (x145<(x146==(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int32_t x150 = -817;
	uint8_t x151 = 0U;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 0;

	t37 = (x149<(x150==(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static int8_t x154 = -1;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = UINT16_MAX;

	t38 = (x153<(x154==(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = -436902026861606242LL;
	int64_t x160 = -1LL;
	volatile int32_t t39 = 152681;

	t39 = (x157<(x158==(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 63U;
	static int32_t x162 = INT32_MIN;
	uint8_t x164 = 13U;
	int32_t t40 = 741563107;

	t40 = (x161<(x162==(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 22567602U;
	int8_t x166 = INT8_MIN;
	static int16_t x168 = INT16_MIN;
	static int32_t t41 = -65096956;

	t41 = (x165<(x166==(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x171 = 30U;
	int32_t t42 = 46933115;

	t42 = (x169<(x170==(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -1;
	uint64_t x175 = 562097803LLU;
	int64_t x176 = -1LL;

	t43 = (x173<(x174==(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = 1;
	uint32_t x179 = 4681U;
	int8_t x180 = -1;
	volatile int32_t t44 = 4917894;

	t44 = (x177<(x178==(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	uint16_t x182 = UINT16_MAX;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MAX;

	t45 = (x181<(x182==(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 29U;
	int8_t x186 = 20;
	uint32_t x187 = 1566822U;
	volatile int32_t t46 = -59;

	t46 = (x185<(x186==(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 7176U;
	uint32_t x190 = UINT32_MAX;
	int32_t t47 = -413;

	t47 = (x189<(x190==(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x195 = -1;
	static int32_t t48 = -85659;

	t48 = (x193<(x194==(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int8_t x199 = -1;

	t49 = (x197<(x198==(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int64_t x202 = INT64_MAX;
	int16_t x203 = -1;
	volatile uint64_t x204 = 5363LLU;
	volatile int32_t t50 = 0;

	t50 = (x201<(x202==(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 1U;
	static uint16_t x208 = 213U;
	int32_t t51 = 5765;

	t51 = (x205<(x206==(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 0;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -3638323;

	t52 = (x209<(x210==(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 52999521726313931LLU;
	volatile int8_t x214 = -1;
	int32_t x216 = INT32_MAX;

	t53 = (x213<(x214==(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -110;
	int16_t x219 = -1;
	volatile int16_t x220 = -962;
	volatile int32_t t54 = -20621;

	t54 = (x217<(x218==(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = -1;
	uint16_t x223 = 117U;
	static uint16_t x224 = 3U;
	static int32_t t55 = 1347485;

	t55 = (x221<(x222==(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x227 = 1830821482U;
	volatile uint16_t x228 = UINT16_MAX;
	int32_t t56 = -405;

	t56 = (x225<(x226==(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = INT8_MIN;
	volatile int16_t x230 = 1;
	volatile int16_t x232 = -2;
	volatile int32_t t57 = 11250960;

	t57 = (x229<(x230==(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = 85181LL;
	int32_t x235 = -217651493;
	static uint8_t x236 = 1U;
	int32_t t58 = -675144436;

	t58 = (x233<(x234==(x235==x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static uint64_t x239 = 2936014837735313971LLU;

	t59 = (x237<(x238==(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 1811U;
	int16_t x242 = INT16_MIN;
	static volatile int32_t t60 = -7756139;

	t60 = (x241<(x242==(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	int16_t x246 = -85;
	volatile uint32_t x247 = 125055U;
	uint64_t x248 = 3LLU;

	t61 = (x245<(x246==(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = UINT64_MAX;
	int32_t t62 = 1;

	t62 = (x249<(x250==(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 4;
	int32_t x254 = 528;
	int8_t x255 = -1;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -12540135;

	t63 = (x253<(x254==(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = 1;
	int8_t x258 = -1;
	static int16_t x260 = -1;
	int32_t t64 = -1;

	t64 = (x257<(x258==(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	static int64_t x262 = 11682576609LL;
	uint8_t x263 = 1U;
	int8_t x264 = -1;
	static volatile int32_t t65 = 574;

	t65 = (x261<(x262==(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 4440794690316892786LLU;
	uint64_t x267 = UINT64_MAX;
	uint64_t x268 = 438183581429LLU;
	volatile int32_t t66 = 30;

	t66 = (x265<(x266==(x267==x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 393099U;
	int8_t x270 = INT8_MIN;
	int64_t x271 = 687541448LL;
	volatile int16_t x272 = INT16_MIN;

	t67 = (x269<(x270==(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	int8_t x274 = 3;
	uint32_t x275 = 2415U;
	uint64_t x276 = 19309404LLU;
	int32_t t68 = 1;

	t68 = (x273<(x274==(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x277 = 64699U;
	volatile int8_t x278 = INT8_MAX;
	static volatile int64_t x279 = INT64_MAX;
	int32_t t69 = 37;

	t69 = (x277<(x278==(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 4280U;
	int64_t x284 = -1528629657LL;
	volatile int32_t t70 = -516350402;

	t70 = (x281<(x282==(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static uint64_t x286 = UINT64_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = 13326238;

	t71 = (x285<(x286==(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x291 = 4592122239539784734LL;
	uint32_t x292 = 1702610645U;
	volatile int32_t t72 = -167479;

	t72 = (x289<(x290==(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 45;
	int32_t x295 = INT32_MIN;
	volatile int64_t x296 = 201180994004557821LL;
	volatile int32_t t73 = 7;

	t73 = (x293<(x294==(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x298 = 0LLU;
	static uint32_t x299 = 13U;
	volatile int8_t x300 = -2;
	int32_t t74 = -11725744;

	t74 = (x297<(x298==(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile int32_t x304 = INT32_MAX;
	volatile int32_t t75 = -6487;

	t75 = (x301<(x302==(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t t76 = 459719588;

	t76 = (x305<(x306==(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -1;
	uint16_t x310 = UINT16_MAX;

	t77 = (x309<(x310==(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = 16U;
	volatile uint32_t x315 = 34U;
	static volatile int64_t x316 = -28467520LL;
	static int32_t t78 = -77157122;

	t78 = (x313<(x314==(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	uint16_t x319 = 2U;
	int32_t x320 = 12;
	int32_t t79 = 116444011;

	t79 = (x317<(x318==(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 517760LL;
	int16_t x323 = -1;
	int8_t x324 = INT8_MAX;
	int32_t t80 = 5308;

	t80 = (x321<(x322==(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	static volatile int64_t x326 = INT64_MIN;
	int32_t x327 = 0;
	volatile int64_t x328 = 76354586294015150LL;
	volatile int32_t t81 = -9245610;

	t81 = (x325<(x326==(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = 3U;
	int16_t x330 = INT16_MIN;
	volatile int64_t x331 = INT64_MIN;
	static int64_t x332 = -1LL;
	volatile int32_t t82 = 3;

	t82 = (x329<(x330==(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	int64_t x335 = INT64_MAX;
	volatile int32_t x336 = INT32_MAX;

	t83 = (x333<(x334==(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MAX;
	volatile int16_t x339 = 1798;
	static volatile uint16_t x340 = 370U;
	volatile int32_t t84 = -57436;

	t84 = (x337<(x338==(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MIN;
	volatile uint8_t x343 = 5U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 472003;

	t85 = (x341<(x342==(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	static volatile int32_t x348 = INT32_MIN;
	int32_t t86 = 25265;

	t86 = (x345<(x346==(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 30438165411LLU;
	int8_t x351 = -1;
	int32_t t87 = -241062783;

	t87 = (x349<(x350==(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = 91;
	volatile int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	int32_t t88 = -1;

	t88 = (x353<(x354==(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x359 = -1LL;
	int32_t t89 = 1230;

	t89 = (x357<(x358==(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 1U;
	int8_t x362 = 13;
	volatile uint16_t x363 = 31U;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 100;

	t90 = (x361<(x362==(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 0U;
	int8_t x367 = 34;
	volatile int32_t t91 = -198;

	t91 = (x365<(x366==(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 24U;
	int32_t x371 = -1;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = -2510;

	t92 = (x369<(x370==(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -81;
	static uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = INT32_MAX;
	uint16_t x376 = UINT16_MAX;
	int32_t t93 = -13;

	t93 = (x373<(x374==(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static uint8_t x378 = 38U;
	uint8_t x379 = 57U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 5;

	t94 = (x377<(x378==(x379==x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 209U;
	static int8_t x382 = -1;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -1;
	volatile int32_t t95 = 96772;

	t95 = (x381<(x382==(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -20;
	volatile int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	int32_t x388 = INT32_MAX;
	int32_t t96 = 893;

	t96 = (x385<(x386==(x387==x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -1;
	static uint16_t x390 = 24269U;
	int32_t x391 = 92416732;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -88461;

	t97 = (x389<(x390==(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	int32_t x394 = -28;
	int16_t x395 = 3933;
	int32_t t98 = -18414719;

	t98 = (x393<(x394==(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	uint8_t x399 = UINT8_MAX;
	static volatile int32_t x400 = INT32_MAX;
	volatile int32_t t99 = -5975;

	t99 = (x397<(x398==(x399==x400)));

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

