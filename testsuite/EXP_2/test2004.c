#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MAX;
volatile int32_t t3 = -120;
int16_t x23 = INT16_MIN;
volatile int64_t t5 = 5191710398281LL;
static volatile int16_t x30 = 123;
volatile uint8_t x32 = 0U;
int32_t x34 = INT32_MIN;
int64_t t7 = -35362LL;
int64_t x41 = INT64_MIN;
volatile int16_t x50 = -1;
uint64_t t12 = 1025881769LLU;
static int64_t x57 = INT64_MAX;
int64_t x60 = 12405020611039729LL;
int32_t x62 = -1;
uint64_t x63 = 19697106296LLU;
int8_t x66 = 56;
uint8_t x70 = 4U;
uint16_t x77 = UINT16_MAX;
static uint64_t x80 = 16700943921261029LLU;
int16_t x86 = -3;
uint64_t x94 = 901484183363825387LLU;
static uint8_t x97 = UINT8_MAX;
uint32_t t23 = 2693402U;
int8_t x107 = 1;
volatile uint16_t x125 = 317U;
volatile uint16_t x127 = UINT16_MAX;
static int16_t x128 = 4879;
static int16_t x130 = 64;
int64_t x132 = -1LL;
static int32_t x135 = INT32_MIN;
uint64_t t29 = 172LLU;
uint64_t x139 = 23069648531LLU;
static int64_t t31 = -112722913313LL;
int16_t x148 = INT16_MAX;
int8_t x153 = INT8_MIN;
static int64_t x158 = -59987LL;
int32_t x160 = INT32_MIN;
int32_t x162 = INT32_MIN;
static volatile int32_t t36 = -3185303;
volatile int64_t x169 = INT64_MIN;
volatile int16_t x170 = -2301;
int8_t x172 = -6;
int64_t x173 = -1LL;
static uint64_t t39 = 7LLU;
int32_t x177 = INT32_MIN;
int32_t x184 = INT32_MIN;
int64_t x189 = INT64_MAX;
int64_t t43 = -5LL;
volatile uint64_t t44 = 1684LLU;
static uint8_t x218 = UINT8_MAX;
int64_t x225 = INT64_MIN;
int64_t t50 = -1277430971292191LL;
uint32_t x232 = 11461028U;
int16_t x242 = INT16_MIN;
volatile int64_t t57 = -1LL;
uint8_t x261 = 41U;
int64_t x263 = 1LL;
int8_t x271 = -1;
uint64_t x273 = 9696LLU;
static int32_t x275 = 1;
int64_t x281 = -1LL;
int8_t x282 = INT8_MIN;
int8_t x284 = INT8_MIN;
static uint8_t x286 = 9U;
int16_t x295 = INT16_MAX;
static volatile uint16_t x297 = UINT16_MAX;
static int32_t x301 = INT32_MAX;
int8_t x302 = -1;
volatile int32_t t68 = -29658;
int32_t x319 = 22021936;
static uint32_t x320 = 1U;
volatile int64_t t71 = -88273419LL;
int8_t x324 = INT8_MIN;
static uint64_t t72 = 22030791024LLU;
volatile int64_t x330 = -492819808425632LL;
volatile uint64_t x333 = 8LLU;
int32_t x335 = -57709;
static uint64_t t75 = 458375LLU;
int8_t x360 = 0;
int64_t x383 = INT64_MIN;
volatile int16_t x387 = 1540;
volatile int16_t x394 = INT16_MIN;
volatile int32_t x395 = INT32_MIN;
int8_t x398 = INT8_MIN;
int32_t x408 = -1;
static int64_t x411 = -1324125934887518497LL;
uint32_t x418 = 2034253996U;
int16_t x419 = 0;
int32_t x422 = INT32_MIN;
int64_t t95 = INT64_MIN;
int32_t t97 = 26715034;
int8_t x437 = 35;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint32_t x2 = 63294917U;
	volatile int8_t x3 = -3;
	static int8_t x4 = INT8_MIN;
	uint32_t t0 = 96055418U;

	t0 = ((x1|(x2|x3))-x4);

	if (t0 != 127U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2550U;
	int64_t x6 = INT64_MAX;
	static int32_t x7 = -2737;
	int16_t x8 = -1;
	volatile int64_t t1 = 29458634812900LL;

	t1 = ((x5|(x6|x7))-x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int64_t x11 = -1LL;
	int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MAX;

	t2 = ((x9|(x10|x11))-x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	uint16_t x14 = 5030U;
	int8_t x15 = -12;
	static int16_t x16 = INT16_MIN;

	t3 = ((x13|(x14|x15))-x16);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = -1;
	int64_t t4 = -34118LL;

	t4 = ((x17|(x18|x19))-x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 973853593778839LL;
	int32_t x22 = INT32_MAX;
	volatile int16_t x24 = INT16_MAX;

	t5 = ((x21|(x22|x23))-x24);

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -19;
	static uint8_t x31 = UINT8_MAX;
	volatile int32_t t6 = 1457580;

	t6 = ((x29|(x30|x31))-x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static int64_t x35 = INT64_MAX;
	int8_t x36 = 1;

	t7 = ((x33|(x34|x35))-x36);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -7045096LL;
	volatile uint64_t x38 = 23266519170971LLU;
	uint32_t x39 = 1609316942U;
	int8_t x40 = INT8_MAX;
	uint64_t t8 = 6576006LLU;

	t8 = ((x37|(x38|x39))-x40);

	if (t8 != 18446744073709338464LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = 198;
	int16_t x43 = -661;
	uint32_t x44 = 452094U;
	static int64_t t9 = 2821963559138057844LL;

	t9 = ((x41|(x42|x43))-x44);

	if (t9 != -452623LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	uint8_t x46 = 14U;
	int64_t x47 = 5504524LL;
	int8_t x48 = 15;
	static volatile int64_t t10 = -256LL;

	t10 = ((x45|(x46|x47))-x48);

	if (t10 != -513LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	uint64_t x51 = 28LLU;
	uint64_t x52 = 670275517LLU;
	uint64_t t11 = 483943542LLU;

	t11 = ((x49|(x50|x51))-x52);

	if (t11 != 18446744073039276098LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MAX;
	int64_t x54 = -1LL;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 43LLU;

	t12 = ((x53|(x54|x55))-x56);

	if (t12 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = 4032675352118315689LL;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t t13 = 2939LLU;

	t13 = ((x57|(x58|x59))-x60);

	if (t13 != 18434339053098511886LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = 1LL;
	int64_t x64 = -568330509LL;
	volatile uint64_t t14 = 11794749327416486LLU;

	t14 = ((x61|(x62|x63))-x64);

	if (t14 != 568330508LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = 6027514;
	static int64_t x67 = -1LL;
	int32_t x68 = INT32_MIN;
	volatile int64_t t15 = 21092299LL;

	t15 = ((x65|(x66|x67))-x68);

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 44U;
	static volatile int64_t x71 = 675482762588610140LL;
	static volatile uint32_t x72 = 63578860U;
	volatile int64_t t16 = -529303143917LL;

	t16 = ((x69|(x70|x71))-x72);

	if (t16 != 675482762525031312LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x78 = 0;
	static volatile int64_t x79 = 691236555LL;
	uint64_t t17 = 3125464742424LLU;

	t17 = ((x77|(x78|x79))-x80);

	if (t17 != 18430043130479564314LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x82 = 111LLU;
	uint16_t x83 = 6024U;
	int8_t x84 = INT8_MIN;
	static uint64_t t18 = 190333687664793LLU;

	t18 = ((x81|(x82|x83))-x84);

	if (t18 != 32895LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 6275585U;
	static volatile int8_t x87 = -1;
	static uint32_t x88 = 18210984U;
	uint32_t t19 = 603888U;

	t19 = ((x85|(x86|x87))-x88);

	if (t19 != 4276756311U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = -4614275692011043LL;
	uint64_t x90 = UINT64_MAX;
	uint16_t x91 = 7U;
	uint8_t x92 = 33U;
	uint64_t t20 = 9140053622471915322LLU;

	t20 = ((x89|(x90|x91))-x92);

	if (t20 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 0;
	uint64_t x95 = UINT64_MAX;
	uint32_t x96 = UINT32_MAX;
	static volatile uint64_t t21 = 69539959275712LLU;

	t21 = ((x93|(x94|x95))-x96);

	if (t21 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = INT8_MIN;
	static int64_t x99 = -1LL;
	uint16_t x100 = 4U;
	volatile int64_t t22 = 6383099562427655LL;

	t22 = ((x97|(x98|x99))-x100);

	if (t22 != -5LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = -1;
	volatile uint16_t x103 = 18U;
	int8_t x104 = INT8_MIN;

	t23 = ((x101|(x102|x103))-x104);

	if (t23 != 127U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	uint64_t x108 = 8459693205LLU;
	uint64_t t24 = 104LLU;

	t24 = ((x105|(x106|x107))-x108);

	if (t24 != 18446744065249825644LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MAX;
	volatile int8_t x116 = INT8_MAX;
	volatile int64_t t25 = -65080429LL;

	t25 = ((x113|(x114|x115))-x116);

	if (t25 != -2147451008LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = INT16_MAX;
	uint8_t x122 = 33U;
	static volatile uint8_t x123 = 14U;
	uint16_t x124 = 88U;
	static int32_t t26 = -69196348;

	t26 = ((x121|(x122|x123))-x124);

	if (t26 != 32679) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x126 = 274U;
	int32_t t27 = 110682016;

	t27 = ((x125|(x126|x127))-x128);

	if (t27 != 60656) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 9;
	int16_t x131 = -1;
	volatile int64_t t28 = -32185338LL;

	t28 = ((x129|(x130|x131))-x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 14567LLU;
	int64_t x134 = -1LL;
	int16_t x136 = INT16_MIN;

	t29 = ((x133|(x134|x135))-x136);

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 604521LLU;
	int64_t x138 = INT64_MIN;
	static volatile int16_t x140 = 1666;
	static volatile uint64_t t30 = 984704740881231LLU;

	t30 = ((x137|(x138|x139))-x140);

	if (t30 != 9223372059924494713LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x142 = 1925896LL;
	int64_t x143 = INT64_MAX;
	static int16_t x144 = INT16_MIN;

	t31 = ((x141|(x142|x143))-x144);

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 4938;
	volatile int64_t x146 = -1LL;
	uint16_t x147 = 1U;
	volatile int64_t t32 = -31720321248LL;

	t32 = ((x145|(x146|x147))-x148);

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 105874;
	uint64_t x150 = 6405LLU;
	int64_t x151 = -247349LL;
	volatile int32_t x152 = -1;
	uint64_t t33 = 6LLU;

	t33 = ((x149|(x150|x151))-x152);

	if (t33 != 18446744073709403616LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x154 = 766;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -425212619LL;
	volatile int64_t t34 = -343839380993972LL;

	t34 = ((x153|(x154|x155))-x156);

	if (t34 != 425212618LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	static int32_t x159 = 2;
	volatile int64_t t35 = -63436628170LL;

	t35 = ((x157|(x158|x159))-x160);

	if (t35 != 2147423743LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int16_t x163 = INT16_MAX;
	int8_t x164 = -41;

	t36 = ((x161|(x162|x163))-x164);

	if (t36 != -2147450840) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1538;
	int32_t x166 = 143511;
	int8_t x167 = 24;
	uint8_t x168 = 0U;
	int32_t t37 = 8;

	t37 = ((x165|(x166|x167))-x168);

	if (t37 != -1537) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x171 = INT8_MIN;
	volatile int64_t t38 = 115389LL;

	t38 = ((x169|(x170|x171))-x172);

	if (t38 != -119LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x174 = 71LLU;
	int16_t x175 = -1705;
	volatile int16_t x176 = INT16_MIN;

	t39 = ((x173|(x174|x175))-x176);

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = -1;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t40 = INT32_MIN;

	t40 = ((x177|(x178|x179))-x180);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = UINT8_MAX;
	static volatile int16_t x182 = INT16_MAX;
	static volatile int32_t x183 = INT32_MIN;
	int32_t t41 = -12;

	t41 = ((x181|(x182|x183))-x184);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x185 = -84200574797110293LL;
	int16_t x186 = -58;
	int16_t x187 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	volatile int64_t t42 = -187853715LL;

	t42 = ((x185|(x186|x187))-x188);

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = -6543653;
	int16_t x191 = -1;
	static int8_t x192 = INT8_MAX;

	t43 = ((x189|(x190|x191))-x192);

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -3308897267406861LL;
	int16_t x198 = -27;
	static volatile uint64_t x199 = UINT64_MAX;
	int16_t x200 = 122;

	t44 = ((x197|(x198|x199))-x200);

	if (t44 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = 1;
	static int64_t x203 = INT64_MIN;
	int64_t x204 = -630621219085359LL;
	int64_t t45 = 357221034344LL;

	t45 = ((x201|(x202|x203))-x204);

	if (t45 != -9222741415635690194LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	int8_t x207 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t46 = -7693800;

	t46 = ((x205|(x206|x207))-x208);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = -15;
	uint16_t x210 = 2U;
	volatile int8_t x211 = INT8_MIN;
	volatile int8_t x212 = 57;
	int32_t t47 = 3155;

	t47 = ((x209|(x210|x211))-x212);

	if (t47 != -70) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 7U;
	uint32_t x214 = 49U;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 1U;
	volatile uint32_t t48 = 50621U;

	t48 = ((x213|(x214|x215))-x216);

	if (t48 != 254U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 8U;
	volatile int32_t x219 = -1;
	volatile int64_t x220 = INT64_MAX;
	volatile int64_t t49 = INT64_MIN;

	t49 = ((x217|(x218|x219))-x220);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = 13;

	t50 = ((x225|(x226|x227))-x228);

	if (t50 != -14LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 245456380U;
	uint64_t x230 = 6459528616964995906LLU;
	int16_t x231 = -143;
	static uint64_t t51 = 23LLU;

	t51 = ((x229|(x230|x231))-x232);

	if (t51 != 18446744073698090587LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x233 = INT8_MAX;
	static int32_t x234 = INT32_MAX;
	uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MIN;
	volatile uint32_t t52 = 957686632U;

	t52 = ((x233|(x234|x235))-x236);

	if (t52 != 127U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = -22607;
	static uint64_t x239 = 172548325294788558LLU;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t53 = 29335371727LLU;

	t53 = ((x237|(x238|x239))-x240);

	if (t53 != 28671LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MAX;
	int16_t x243 = 0;
	uint16_t x244 = 29581U;
	volatile int64_t t54 = 1LL;

	t54 = ((x241|(x242|x243))-x244);

	if (t54 != -29582LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int16_t x248 = -1;
	uint64_t t55 = 16085151871LLU;

	t55 = ((x245|(x246|x247))-x248);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 80U;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 60U;
	static int32_t x252 = -24;
	int64_t t56 = 5LL;

	t56 = ((x249|(x250|x251))-x252);

	if (t56 != -9223372036854775660LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = -247;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = 36833963U;

	t57 = ((x253|(x254|x255))-x256);

	if (t57 != -36834210LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x257 = 7563U;
	static volatile int8_t x258 = INT8_MAX;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = -3;
	uint64_t t58 = 3342528488815860752LLU;

	t58 = ((x257|(x258|x259))-x260);

	if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x262 = 6993;
	int8_t x264 = INT8_MAX;
	int64_t t59 = 10244581844LL;

	t59 = ((x261|(x262|x263))-x264);

	if (t59 != 6906LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = 4950748061750385LLU;
	volatile int32_t x266 = 23;
	static volatile int8_t x267 = -1;
	int64_t x268 = 6378197930337455LL;
	uint64_t t60 = 67LLU;

	t60 = ((x265|(x266|x267))-x268);

	if (t60 != 18440365875779214160LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = INT8_MAX;
	int32_t x270 = INT32_MAX;
	int16_t x272 = -2;
	int32_t t61 = 1934313;

	t61 = ((x269|(x270|x271))-x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x274 = 11LLU;
	uint32_t x276 = UINT32_MAX;
	volatile uint64_t t62 = 601030589174953LLU;

	t62 = ((x273|(x274|x275))-x276);

	if (t62 != 18446744069414594028LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x283 = UINT64_MAX;
	uint64_t t63 = 1483324693243267LLU;

	t63 = ((x281|(x282|x283))-x284);

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = 1232;
	volatile int64_t x287 = -1LL;
	static volatile int64_t x288 = INT64_MAX;
	static volatile int64_t t64 = INT64_MIN;

	t64 = ((x285|(x286|x287))-x288);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 1222U;
	int8_t x292 = -59;
	int64_t t65 = -1493701402LL;

	t65 = ((x289|(x290|x291))-x292);

	if (t65 != -31487LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x293 = INT64_MIN;
	int64_t x294 = 35415LL;
	int16_t x296 = INT16_MAX;
	int64_t t66 = 2020631789588LL;

	t66 = ((x293|(x294|x295))-x296);

	if (t66 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = -926;
	int64_t x299 = INT64_MIN;
	int32_t x300 = 11983;
	int64_t t67 = 1438LL;

	t67 = ((x297|(x298|x299))-x300);

	if (t67 != -11984LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x303 = INT32_MIN;
	static int16_t x304 = INT16_MIN;

	t68 = ((x301|(x302|x303))-x304);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 10724U;
	volatile int8_t x307 = INT8_MIN;
	uint64_t x308 = UINT64_MAX;
	uint64_t t69 = 1781813861971LLU;

	t69 = ((x305|(x306|x307))-x308);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	static int16_t x312 = INT16_MIN;
	int64_t t70 = 1451470101017725LL;

	t70 = ((x309|(x310|x311))-x312);

	if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = INT64_MAX;
	int64_t x318 = -1408LL;

	t71 = ((x317|(x318|x319))-x320);

	if (t71 != -2LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = 25415LLU;
	uint16_t x322 = 1U;
	int8_t x323 = INT8_MIN;

	t72 = ((x321|(x322|x323))-x324);

	if (t72 != 71LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = INT32_MAX;
	uint32_t x326 = 335378U;
	int32_t x327 = 2701088;
	static int64_t x328 = -1LL;
	volatile int64_t t73 = -2029192LL;

	t73 = ((x325|(x326|x327))-x328);

	if (t73 != 2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = UINT64_MAX;
	uint64_t t74 = 3080105464LLU;

	t74 = ((x329|(x330|x331))-x332);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = -1;
	uint64_t x336 = 206545179275337LLU;

	t75 = ((x333|(x334|x335))-x336);

	if (t75 != 18446537528530276278LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x337 = UINT32_MAX;
	int32_t x338 = -1;
	uint32_t x339 = 151768U;
	int32_t x340 = -1;
	static uint32_t t76 = 240738U;

	t76 = ((x337|(x338|x339))-x340);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = 5;
	static volatile int32_t x343 = INT32_MIN;
	volatile int64_t x344 = -1LL;
	static volatile int64_t t77 = -1LL;

	t77 = ((x341|(x342|x343))-x344);

	if (t77 != -2147483642LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = UINT16_MAX;
	static int64_t x346 = -635063585LL;
	volatile int8_t x347 = 30;
	int8_t x348 = 1;
	volatile int64_t t78 = -155719472028LL;

	t78 = ((x345|(x346|x347))-x348);

	if (t78 != -635043842LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = UINT64_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x351 = 13;
	static int16_t x352 = INT16_MIN;
	volatile uint64_t t79 = 74920LLU;

	t79 = ((x349|(x350|x351))-x352);

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MAX;
	static volatile uint64_t x356 = 22031296799LLU;
	volatile uint64_t t80 = 2076703LLU;

	t80 = ((x353|(x354|x355))-x356);

	if (t80 != 18446744051678254816LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = 2655648U;
	uint32_t x358 = 1376957546U;
	int8_t x359 = 10;
	uint32_t t81 = 74U;

	t81 = ((x357|(x358|x359))-x360);

	if (t81 != 1379579370U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x361 = 8;
	uint16_t x362 = 1852U;
	int8_t x363 = INT8_MIN;
	int32_t x364 = 14;
	int32_t t82 = -139;

	t82 = ((x361|(x362|x363))-x364);

	if (t82 != -82) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = -6054412232LL;
	int64_t x366 = -2191692436832045593LL;
	int16_t x367 = INT16_MIN;
	int32_t x368 = -1;
	static int64_t t83 = 1LL;

	t83 = ((x365|(x366|x367))-x368);

	if (t83 != -18944LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x369 = INT16_MIN;
	volatile int64_t x370 = 2LL;
	static uint16_t x371 = UINT16_MAX;
	volatile int64_t x372 = INT64_MIN;
	int64_t t84 = INT64_MAX;

	t84 = ((x369|(x370|x371))-x372);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = 242458;
	static int64_t x374 = -580LL;
	volatile int8_t x375 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	static volatile int64_t t85 = 62685LL;

	t85 = ((x373|(x374|x375))-x376);

	if (t85 != 9223372036854775742LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x377 = 0U;
	int8_t x378 = 1;
	int16_t x379 = -1;
	volatile int8_t x380 = 1;
	int32_t t86 = -28;

	t86 = ((x377|(x378|x379))-x380);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = INT64_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t87 = 1LL;

	t87 = ((x381|(x382|x383))-x384);

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = -133;
	volatile int8_t x388 = -24;
	volatile int32_t t88 = -52694065;

	t88 = ((x385|(x386|x387))-x388);

	if (t88 != 23) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x396 = 59U;
	volatile int32_t t89 = -3;

	t89 = ((x393|(x394|x395))-x396);

	if (t89 != -60) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x397 = -1;
	uint16_t x399 = 1U;
	volatile int8_t x400 = 3;
	static volatile int32_t t90 = -846408212;

	t90 = ((x397|(x398|x399))-x400);

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = INT32_MIN;
	static uint64_t x402 = 1522745268896431LLU;
	uint64_t x403 = 48923212LLU;
	int32_t x404 = INT32_MAX;
	uint64_t t91 = 93LLU;

	t91 = ((x401|(x402|x403))-x404);

	if (t91 != 18446744070538560240LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	int8_t x407 = -2;
	int64_t t92 = 337533217479LL;

	t92 = ((x405|(x406|x407))-x408);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x409 = UINT8_MAX;
	int16_t x410 = INT16_MIN;
	volatile uint64_t x412 = UINT64_MAX;
	uint64_t t93 = 3940656LLU;

	t93 = ((x409|(x410|x411))-x412);

	if (t93 != 18446744073709534976LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 51435LLU;
	uint32_t x420 = 5U;
	volatile uint64_t t94 = 7723444813838LLU;

	t94 = ((x417|(x418|x419))-x420);

	if (t94 != 2034288874LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 28324U;
	int8_t x423 = -1;
	static int64_t x424 = INT64_MAX;

	t95 = ((x421|(x422|x423))-x424);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = -1;
	volatile int32_t x426 = 6;
	volatile int16_t x427 = 457;
	static volatile int64_t x428 = -1LL;
	volatile int64_t t96 = 483302974648LL;

	t96 = ((x425|(x426|x427))-x428);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x429 = INT8_MIN;
	int32_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int16_t x432 = INT16_MIN;

	t97 = ((x429|(x430|x431))-x432);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x433 = UINT8_MAX;
	uint64_t x434 = 12LLU;
	static int16_t x435 = -1;
	static volatile uint32_t x436 = 53497U;
	volatile uint64_t t98 = 25814775808LLU;

	t98 = ((x433|(x434|x435))-x436);

	if (t98 != 18446744073709498118LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x438 = INT64_MIN;
	int8_t x439 = -1;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t99 = INT64_MAX;

	t99 = ((x437|(x438|x439))-x440);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

