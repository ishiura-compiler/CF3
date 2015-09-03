#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = INT16_MIN;
int32_t x12 = -19574291;
uint16_t x15 = UINT16_MAX;
volatile int32_t t4 = -5244653;
int16_t x24 = -1;
uint32_t x26 = 11805893U;
int32_t x27 = -1;
volatile int32_t t6 = 57957240;
uint16_t x43 = UINT16_MAX;
volatile int16_t x46 = INT16_MAX;
volatile int32_t t12 = -3118638;
static int8_t x53 = INT8_MIN;
volatile int32_t x61 = INT32_MAX;
volatile uint8_t x62 = 2U;
volatile int32_t t16 = -413328;
uint8_t x69 = 56U;
static uint32_t x70 = 725U;
uint8_t x73 = UINT8_MAX;
int16_t x74 = -1;
uint32_t x76 = UINT32_MAX;
static int32_t x79 = -809;
int32_t t19 = -15;
uint16_t x86 = 0U;
volatile int16_t x93 = -1;
uint64_t x97 = 2766563LLU;
int8_t x99 = -1;
static volatile uint8_t x100 = 30U;
int16_t x102 = INT16_MIN;
volatile int32_t t26 = 101756;
volatile uint32_t x112 = 6176846U;
volatile int32_t t27 = 355651;
volatile int32_t t28 = -1441881;
static uint8_t x130 = UINT8_MAX;
int32_t x131 = INT32_MIN;
int32_t x135 = -374;
int64_t x136 = -58077268766375607LL;
int8_t x143 = 9;
static int32_t t35 = 513387;
int32_t x150 = INT32_MAX;
uint8_t x152 = UINT8_MAX;
volatile int32_t t37 = -1;
int32_t t39 = 3;
int16_t x173 = INT16_MAX;
volatile int32_t t42 = 61776;
static int32_t x185 = INT32_MIN;
volatile int8_t x186 = INT8_MAX;
int8_t x189 = INT8_MIN;
uint64_t x198 = 2125372955253LLU;
volatile int8_t x199 = 5;
volatile int16_t x200 = 4;
static int32_t t47 = -4239451;
int32_t t48 = -33981;
uint8_t x211 = UINT8_MAX;
static uint16_t x214 = 2855U;
uint16_t x215 = UINT16_MAX;
int32_t t51 = -331893565;
static int16_t x232 = INT16_MIN;
uint16_t x240 = 712U;
uint64_t x244 = 776421625422LLU;
int32_t t58 = -391;
volatile int32_t t59 = 3851;
uint32_t x249 = UINT32_MAX;
volatile uint64_t x251 = UINT64_MAX;
static uint32_t x254 = 2U;
uint32_t x261 = 48669U;
int64_t x264 = INT64_MAX;
int32_t t63 = -122643;
uint16_t x271 = 0U;
uint8_t x282 = 2U;
static uint32_t x284 = UINT32_MAX;
int32_t t72 = 69;
uint8_t x301 = 3U;
uint64_t x304 = 24LLU;
uint8_t x307 = 0U;
static uint16_t x308 = 1734U;
int64_t x311 = -367LL;
int32_t t76 = -7739;
static volatile uint16_t x320 = 219U;
volatile uint8_t x321 = 3U;
volatile int8_t x328 = -1;
int32_t t79 = -23984;
int64_t x331 = 1206885425LL;
int16_t x333 = INT16_MAX;
int64_t x336 = 78608743905LL;
volatile uint8_t x339 = 8U;
int16_t x341 = INT16_MIN;
int32_t t86 = -408826070;
volatile int32_t t87 = -49487;
volatile int32_t t88 = 620080;
volatile uint64_t x370 = 3988389986359605958LLU;
uint8_t x384 = 0U;
uint8_t x391 = 34U;
static volatile int16_t x396 = INT16_MAX;
int16_t x398 = -1;
int8_t x407 = 14;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -453860;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -1;

	t0 = (x1<(x2%(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static int64_t x6 = -1LL;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 44142;

	t1 = (x5<(x6%(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile int16_t x11 = -1;
	static volatile int32_t t2 = -66790;

	t2 = (x9<(x10%(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile int32_t x14 = 22652116;
	uint64_t x16 = 2LLU;
	int32_t t3 = -117840388;

	t3 = (x13<(x14%(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int16_t x18 = INT16_MIN;
	uint32_t x19 = 7567U;
	int64_t x20 = -1LL;

	t4 = (x17<(x18%(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int32_t x22 = 2663648;
	int16_t x23 = 10141;
	int32_t t5 = -27;

	t5 = (x21<(x22%(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	static int64_t x28 = INT64_MAX;

	t6 = (x25<(x26%(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -312651LL;
	volatile uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 238U;
	static int32_t x32 = 2522;
	volatile int32_t t7 = 2132;

	t7 = (x29<(x30%(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 395303LLU;
	uint16_t x34 = 443U;
	uint32_t x35 = 905U;
	volatile uint16_t x36 = 60U;
	volatile int32_t t8 = -105446;

	t8 = (x33<(x34%(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 892463836187931571LL;
	int16_t x38 = -111;
	int8_t x39 = INT8_MAX;
	int64_t x40 = 31319LL;
	int32_t t9 = 700500672;

	t9 = (x37<(x38%(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 25628693LLU;
	static uint8_t x42 = UINT8_MAX;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 57261281;

	t10 = (x41<(x42%(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = -69;
	volatile int32_t t11 = 1406;

	t11 = (x45<(x46%(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 9692U;
	int32_t x51 = -10;
	static int16_t x52 = -1;

	t12 = (x49<(x50%(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = INT32_MIN;
	uint64_t x55 = 127636LLU;
	static int64_t x56 = -1LL;
	static volatile int32_t t13 = -104234437;

	t13 = (x53<(x54%(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	int16_t x60 = -248;
	int32_t t14 = 1;

	t14 = (x57<(x58%(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -1;

	t15 = (x61<(x62%(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile uint32_t x66 = 219614286U;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -21;

	t16 = (x65<(x66%(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = 14327274327LL;
	static volatile int8_t x72 = INT8_MAX;
	int32_t t17 = -1;

	t17 = (x69<(x70%(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x75 = 83603882547290784LLU;
	int32_t t18 = -249172521;

	t18 = (x73<(x74%(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 3526;
	volatile int16_t x78 = 1;
	uint16_t x80 = 1U;

	t19 = (x77<(x78%(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile uint16_t x82 = 0U;
	uint32_t x83 = 42226538U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 4622;

	t20 = (x81<(x82%(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x87 = -1;
	int32_t x88 = 0;
	int32_t t21 = -13923;

	t21 = (x85<(x86%(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = INT32_MAX;
	static int32_t x92 = -1;
	static int32_t t22 = -228;

	t22 = (x89<(x90%(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	volatile int8_t x95 = 1;
	static uint64_t x96 = UINT64_MAX;
	int32_t t23 = 44774;

	t23 = (x93<(x94%(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = 2222LL;
	static int32_t t24 = 4143;

	t24 = (x97<(x98%(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	uint64_t x103 = 4310699690928373510LLU;
	static int64_t x104 = INT64_MAX;
	static int32_t t25 = -53859;

	t25 = (x101<(x102%(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 4U;
	uint64_t x106 = 66428997232LLU;
	volatile uint64_t x107 = 9113459880LLU;
	uint16_t x108 = 1U;

	t26 = (x105<(x106%(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	static volatile int8_t x111 = INT8_MIN;

	t27 = (x109<(x110%(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;

	t28 = (x113<(x114%(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = -49;
	volatile int32_t x119 = 1;
	int16_t x120 = -50;
	int32_t t29 = 96;

	t29 = (x117<(x118%(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int16_t x122 = INT16_MIN;
	uint16_t x123 = 3U;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 329291;

	t30 = (x121<(x122%(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 476677730;
	uint16_t x126 = 7254U;
	int16_t x127 = INT16_MAX;
	static int8_t x128 = -1;
	volatile int32_t t31 = -91;

	t31 = (x125<(x126%(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 38LL;
	int8_t x132 = -1;
	int32_t t32 = 39145;

	t32 = (x129<(x130%(x131^x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	static volatile uint32_t x134 = 408U;
	volatile int32_t t33 = -15;

	t33 = (x133<(x134%(x135^x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 350161U;
	uint16_t x138 = 8784U;
	static uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -1125188;

	t34 = (x137<(x138%(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	volatile int32_t x142 = INT32_MIN;
	int32_t x144 = INT32_MAX;

	t35 = (x141<(x142%(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 17374U;
	static int8_t x146 = INT8_MIN;
	volatile int64_t x147 = 252397275LL;
	static volatile uint16_t x148 = 12U;
	volatile int32_t t36 = 14141;

	t36 = (x145<(x146%(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 25275462967492LL;
	uint32_t x151 = 340U;

	t37 = (x149<(x150%(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = 514051003698445460LL;
	uint64_t x156 = UINT64_MAX;
	int32_t t38 = -71;

	t38 = (x153<(x154%(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 125315U;
	int32_t x162 = 2132130;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;

	t39 = (x161<(x162%(x163^x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 82839837172LLU;
	static uint32_t x170 = UINT32_MAX;
	uint64_t x171 = 8401768274280167832LLU;
	int8_t x172 = 1;
	int32_t t40 = 161;

	t40 = (x169<(x170%(x171^x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	int64_t x176 = -4898392714583LL;
	volatile int32_t t41 = 1;

	t41 = (x173<(x174%(x175^x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = INT64_MIN;
	static uint64_t x178 = 5196LLU;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 3839;

	t42 = (x177<(x178%(x179^x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 2LL;
	int32_t x182 = INT32_MAX;
	int32_t x183 = 1636;
	uint64_t x184 = UINT64_MAX;
	static int32_t t43 = -5;

	t43 = (x181<(x182%(x183^x184)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x187 = -9;
	uint16_t x188 = 85U;
	int32_t t44 = 0;

	t44 = (x185<(x186%(x187^x188)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x190 = 23019516391565LLU;
	int64_t x191 = 10159718LL;
	uint8_t x192 = 13U;
	static volatile int32_t t45 = -5803693;

	t45 = (x189<(x190%(x191^x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x193 = INT32_MIN;
	int64_t x194 = -1LL;
	static int8_t x195 = 1;
	int32_t x196 = -1;
	static int32_t t46 = 1;

	t46 = (x193<(x194%(x195^x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x197 = 2196U;

	t47 = (x197<(x198%(x199^x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = -12;
	int16_t x203 = INT16_MIN;
	uint64_t x204 = 205039854424985211LLU;

	t48 = (x201<(x202%(x203^x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = 11;
	int8_t x207 = -6;
	int64_t x208 = 60293911679LL;
	int32_t t49 = 133200;

	t49 = (x205<(x206%(x207^x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x209 = 0U;
	volatile int8_t x210 = INT8_MIN;
	static uint64_t x212 = UINT64_MAX;
	int32_t t50 = 4319537;

	t50 = (x209<(x210%(x211^x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -661;
	int64_t x216 = INT64_MIN;

	t51 = (x213<(x214%(x215^x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = 0;
	static volatile int8_t x218 = INT8_MIN;
	static int16_t x219 = -1483;
	static uint8_t x220 = UINT8_MAX;
	int32_t t52 = -28271;

	t52 = (x217<(x218%(x219^x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = INT8_MAX;
	int32_t x223 = -1;
	int32_t x224 = INT32_MIN;
	int32_t t53 = 24433;

	t53 = (x221<(x222%(x223^x224)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	static volatile int64_t x226 = 54478416LL;
	volatile int32_t x227 = INT32_MAX;
	int32_t x228 = -471;
	static volatile int32_t t54 = 474697116;

	t54 = (x225<(x226%(x227^x228)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = 81073;
	int8_t x230 = 3;
	int32_t x231 = INT32_MIN;
	int32_t t55 = 1339152;

	t55 = (x229<(x230%(x231^x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = INT64_MIN;
	volatile uint8_t x234 = 6U;
	uint32_t x235 = 20757U;
	volatile int16_t x236 = -1;
	volatile int32_t t56 = -22;

	t56 = (x233<(x234%(x235^x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -636;
	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int32_t t57 = -196212;

	t57 = (x237<(x238%(x239^x240)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -8;
	volatile int64_t x242 = 376577115295165247LL;
	static volatile uint8_t x243 = 3U;

	t58 = (x241<(x242%(x243^x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 30U;
	static uint8_t x246 = 0U;
	static int16_t x247 = -1;
	static int16_t x248 = INT16_MIN;

	t59 = (x245<(x246%(x247^x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = -14LL;
	int8_t x252 = 1;
	int32_t t60 = -86;

	t60 = (x249<(x250%(x251^x252)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	static int32_t x255 = INT32_MIN;
	volatile uint64_t x256 = 380660LLU;
	volatile int32_t t61 = -364;

	t61 = (x253<(x254%(x255^x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = 26939;
	int16_t x258 = INT16_MIN;
	static volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t62 = -332276897;

	t62 = (x257<(x258%(x259^x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = UINT16_MAX;

	t63 = (x261<(x262%(x263^x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 3349543148813182322LLU;
	static int8_t x266 = INT8_MIN;
	volatile int16_t x267 = INT16_MIN;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t64 = 356;

	t64 = (x265<(x266%(x267^x268)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x270 = 43U;
	uint64_t x272 = UINT64_MAX;
	static volatile int32_t t65 = -1;

	t65 = (x269<(x270%(x271^x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x273 = 3554;
	int32_t x274 = -1;
	uint16_t x275 = 10U;
	volatile uint8_t x276 = 4U;
	int32_t t66 = -363519337;

	t66 = (x273<(x274%(x275^x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int32_t t67 = -14936;

	t67 = (x277<(x278%(x279^x280)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x281 = INT32_MIN;
	int32_t x283 = -23083761;
	volatile int32_t t68 = 0;

	t68 = (x281<(x282%(x283^x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x285 = 6397LLU;
	static int32_t x286 = -15623;
	int16_t x287 = 498;
	volatile int8_t x288 = 16;
	int32_t t69 = -1;

	t69 = (x285<(x286%(x287^x288)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x289 = -742;
	uint32_t x290 = 4628794U;
	static int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t70 = 3;

	t70 = (x289<(x290%(x291^x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	static volatile uint8_t x294 = 3U;
	static volatile uint64_t x295 = 265419537756803876LLU;
	int32_t x296 = -1;
	volatile int32_t t71 = 7602;

	t71 = (x293<(x294%(x295^x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = -1;
	static volatile int32_t x300 = 71694;

	t72 = (x297<(x298%(x299^x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x302 = INT16_MAX;
	int16_t x303 = -1;
	int32_t t73 = -178;

	t73 = (x301<(x302%(x303^x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x305 = 1U;
	static volatile int8_t x306 = -1;
	volatile int32_t t74 = -5;

	t74 = (x305<(x306%(x307^x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 56U;
	int8_t x312 = -1;
	static int32_t t75 = 524063;

	t75 = (x309<(x310%(x311^x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = 0LL;
	int16_t x316 = -1;

	t76 = (x313<(x314%(x315^x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -31;
	int16_t x318 = -1;
	uint32_t x319 = 116851U;
	int32_t t77 = 1826;

	t77 = (x317<(x318%(x319^x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MAX;
	uint16_t x323 = 1U;
	static int8_t x324 = INT8_MIN;
	int32_t t78 = -886;

	t78 = (x321<(x322%(x323^x324)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = INT16_MIN;
	static volatile int64_t x326 = -24693LL;
	static uint16_t x327 = UINT16_MAX;

	t79 = (x325<(x326%(x327^x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	uint16_t x332 = 1314U;
	static volatile int32_t t80 = -8708006;

	t80 = (x329<(x330%(x331^x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = 54488LL;
	static volatile int16_t x335 = INT16_MIN;
	int32_t t81 = -119635;

	t81 = (x333<(x334%(x335^x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	static int16_t x338 = INT16_MAX;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t82 = -192117;

	t82 = (x337<(x338%(x339^x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x342 = 1;
	int32_t x343 = -1;
	int32_t x344 = 179;
	static int32_t t83 = 281638;

	t83 = (x341<(x342%(x343^x344)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x345 = 2;
	int64_t x346 = -12LL;
	volatile int32_t x347 = INT32_MAX;
	uint32_t x348 = 420U;
	static int32_t t84 = -8;

	t84 = (x345<(x346%(x347^x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	int8_t x350 = INT8_MAX;
	volatile int64_t x351 = 846201765715007307LL;
	int32_t x352 = INT32_MAX;
	static int32_t t85 = 245301;

	t85 = (x349<(x350%(x351^x352)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MAX;

	t86 = (x353<(x354%(x355^x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = 1LL;
	int16_t x358 = INT16_MAX;
	static int64_t x359 = INT64_MIN;
	static int64_t x360 = 12455015LL;

	t87 = (x357<(x358%(x359^x360)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	volatile int8_t x363 = INT8_MIN;
	static int8_t x364 = -1;

	t88 = (x361<(x362%(x363^x364)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 1331243285549033LL;
	uint64_t x366 = 16512428763138180LLU;
	uint64_t x367 = 4704823LLU;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t89 = -13881;

	t89 = (x365<(x366%(x367^x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -1;
	uint64_t x371 = 13920LLU;
	int16_t x372 = 37;
	volatile int32_t t90 = 53412443;

	t90 = (x369<(x370%(x371^x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x373 = 139322LLU;
	uint8_t x374 = 26U;
	int16_t x375 = INT16_MIN;
	static int8_t x376 = INT8_MIN;
	int32_t t91 = -113;

	t91 = (x373<(x374%(x375^x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = 127;
	uint64_t x378 = 43003928LLU;
	static volatile int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;
	static volatile int32_t t92 = 255113;

	t92 = (x377<(x378%(x379^x380)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	static int8_t x382 = INT8_MAX;
	uint32_t x383 = 19664472U;
	int32_t t93 = 5324;

	t93 = (x381<(x382%(x383^x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = INT8_MAX;
	int16_t x386 = 57;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t94 = 82840278;

	t94 = (x385<(x386%(x387^x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x389 = 4704U;
	uint64_t x390 = 17494454678LLU;
	int8_t x392 = -1;
	int32_t t95 = -10693;

	t95 = (x389<(x390%(x391^x392)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x393 = INT64_MAX;
	uint32_t x394 = 2U;
	int64_t x395 = INT64_MIN;
	static int32_t t96 = 886256;

	t96 = (x393<(x394%(x395^x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t97 = -86580996;

	t97 = (x397<(x398%(x399^x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = -31031122LL;
	int16_t x403 = INT16_MAX;
	int32_t x404 = 1059656771;
	int32_t t98 = 21;

	t98 = (x401<(x402%(x403^x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x405 = 1LLU;
	int8_t x406 = INT8_MAX;
	uint16_t x408 = 51U;
	static int32_t t99 = -996314;

	t99 = (x405<(x406%(x407^x408)));

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

