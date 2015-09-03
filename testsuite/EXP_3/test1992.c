#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
static int16_t x9 = -1;
volatile int64_t t1 = -5063571240699LL;
uint16_t x13 = UINT16_MAX;
static int16_t x19 = -1;
volatile uint32_t t3 = 2413025U;
static uint64_t x23 = 13587000386517524LLU;
int64_t x25 = -2786939LL;
uint8_t x57 = 18U;
volatile uint64_t x59 = 59412287936LLU;
uint64_t x60 = UINT64_MAX;
uint64_t x65 = 125694800940LLU;
uint64_t t12 = 38602233456729460LLU;
uint16_t x78 = 19042U;
uint16_t x79 = UINT16_MAX;
int32_t x81 = INT32_MAX;
uint32_t x84 = 655021034U;
int8_t x86 = 2;
int64_t x87 = INT64_MAX;
int8_t x88 = -6;
uint64_t x95 = 159LLU;
volatile int64_t x97 = -512170LL;
int16_t x98 = INT16_MIN;
volatile int16_t x102 = INT16_MIN;
int8_t x104 = 1;
int16_t x105 = INT16_MIN;
uint16_t x109 = 5648U;
int64_t x112 = INT64_MAX;
int64_t t22 = -483LL;
static int32_t x117 = 78710608;
uint64_t x118 = UINT64_MAX;
volatile int64_t t24 = 898LL;
volatile int64_t x127 = 91394LL;
static volatile int64_t t25 = 1430LL;
static volatile int8_t x135 = -1;
uint8_t x136 = 50U;
uint16_t x139 = 4U;
volatile int16_t x142 = INT16_MIN;
int16_t x143 = -2;
uint64_t t29 = 48092LLU;
volatile int8_t x145 = -1;
int64_t x152 = 7745LL;
volatile int64_t t31 = -933LL;
static int32_t x153 = INT32_MAX;
int64_t t33 = -748158LL;
int16_t x162 = INT16_MIN;
volatile uint64_t t34 = 237516559612LLU;
static uint32_t x167 = 41924U;
int16_t x169 = INT16_MIN;
uint32_t x173 = UINT32_MAX;
volatile int16_t x182 = INT16_MAX;
int64_t t39 = -41295LL;
static int16_t x186 = INT16_MIN;
uint32_t t41 = 9762711U;
volatile int16_t x193 = INT16_MAX;
volatile int64_t x197 = -816807222LL;
int32_t x199 = INT32_MAX;
static uint64_t t44 = 50449532419LLU;
uint64_t x205 = UINT64_MAX;
int64_t t46 = 7LL;
volatile int64_t x214 = -1LL;
volatile int8_t x219 = INT8_MIN;
int16_t x223 = -1;
volatile int8_t x234 = INT8_MAX;
uint64_t x235 = 10230LLU;
int8_t x236 = INT8_MIN;
int8_t x241 = -1;
uint32_t x242 = 512475U;
static int32_t x243 = -1;
int32_t x253 = INT32_MIN;
int32_t x276 = INT32_MAX;
int64_t x277 = INT64_MIN;
static uint8_t x278 = 14U;
int64_t x284 = -1LL;
int32_t x286 = -21634;
int32_t x290 = 1;
uint16_t x294 = 66U;
static uint16_t x298 = UINT16_MAX;
uint32_t t65 = 809205U;
int32_t x306 = -229;
static int16_t x311 = 10;
int8_t x314 = INT8_MIN;
volatile int32_t t71 = 3663;
uint64_t x325 = 8288LLU;
volatile uint64_t t72 = 569068LLU;
volatile uint32_t t73 = 12359827U;
static uint64_t x334 = 906LLU;
static int16_t x342 = INT16_MIN;
static uint64_t t76 = 25647LLU;
volatile int8_t x355 = INT8_MIN;
static volatile int32_t x357 = INT32_MIN;
volatile uint32_t t79 = 139258U;
int16_t x364 = INT16_MIN;
uint64_t x369 = 941447845LLU;
static uint64_t t83 = 16990728396089656LLU;
static uint32_t t84 = 1756018U;
volatile int64_t t88 = 1370LL;
volatile uint32_t t90 = 1555U;
static int8_t x429 = -1;
int64_t t92 = 5821325512008871LL;
volatile uint64_t t93 = 8272813939LLU;
int32_t x440 = 6;
uint64_t x442 = 13378560832227LLU;
int32_t x443 = -93;
static int16_t x444 = INT16_MIN;
volatile int64_t x448 = INT64_MAX;
uint16_t x449 = UINT16_MAX;
int16_t x451 = INT16_MIN;
uint64_t x452 = UINT64_MAX;
volatile uint64_t t98 = 31611LLU;
uint64_t x460 = 121075690LLU;
volatile uint64_t t99 = 774758LLU;


void f0(void) {
	volatile uint64_t x1 = 3673499839LLU;
	int32_t x3 = -1;
	static volatile uint32_t x4 = 221150769U;
	volatile uint64_t t0 = 1962967920LLU;

	t0 = ((x1&x2)*(x3|x4));

	if (t0 != 15777561666692765505LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MAX;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;

	t1 = ((x9&x10)*(x11|x12));

	if (t1 != -1073709056LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -1LL;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -745906776;
	static int64_t t2 = 1248505138729590LL;

	t2 = ((x13&x14)*(x15|x16));

	if (t2 != -65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	volatile int16_t x18 = -1;
	volatile uint32_t x20 = UINT32_MAX;

	t3 = ((x17&x18)*(x19|x20));

	if (t3 != 4294934529U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = 0;
	volatile int8_t x22 = 2;
	volatile uint16_t x24 = 6515U;
	static uint64_t t4 = 869895796663273130LLU;

	t4 = ((x21&x22)*(x23|x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 24U;
	uint8_t x27 = 26U;
	volatile int16_t x28 = INT16_MAX;
	static int64_t t5 = 42131083551LL;

	t5 = ((x25&x26)*(x27|x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	uint64_t x30 = 44446485660380809LLU;
	static int8_t x31 = INT8_MAX;
	int64_t x32 = -7336LL;
	uint64_t t6 = 779405255223702936LLU;

	t6 = ((x29&x30)*(x31|x32));

	if (t6 != 7715387462973165815LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -3;
	volatile int16_t x46 = INT16_MIN;
	volatile int8_t x47 = INT8_MIN;
	static uint8_t x48 = 5U;
	int32_t t7 = -10;

	t7 = ((x45&x46)*(x47|x48));

	if (t7 != 4030464) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	int32_t x52 = 15861821;
	volatile int64_t t8 = -1163879LL;

	t8 = ((x49&x50)*(x51|x52));

	if (t8 != 32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 0U;
	static int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MAX;
	static volatile uint32_t t9 = 66465U;

	t9 = ((x53&x54)*(x55|x56));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x58 = INT64_MAX;
	volatile uint64_t t10 = 48415459294LLU;

	t10 = ((x57&x58)*(x59|x60));

	if (t10 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 8U;
	int64_t x62 = INT64_MIN;
	int32_t x63 = 0;
	int8_t x64 = INT8_MIN;
	int64_t t11 = -2879251509418206LL;

	t11 = ((x61&x62)*(x63|x64));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x66 = 47U;
	static int16_t x67 = 488;
	int8_t x68 = 0;

	t12 = ((x65&x66)*(x67|x68));

	if (t12 != 21472LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MAX;
	volatile uint32_t x70 = 734U;
	uint32_t x71 = 323207U;
	static volatile int32_t x72 = INT32_MIN;
	volatile int64_t t13 = 8647088LL;

	t13 = ((x69&x70)*(x71|x72));

	if (t13 != 1576490231570LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x77 = INT16_MAX;
	int64_t x80 = -1408LL;
	int64_t t14 = 78987LL;

	t14 = ((x77&x78)*(x79|x80));

	if (t14 != -19042LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x82 = -1;
	volatile int8_t x83 = 6;
	volatile uint32_t t15 = 5U;

	t15 = ((x81&x82)*(x83|x84));

	if (t15 != 3639946258U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MAX;
	static volatile int64_t t16 = 3LL;

	t16 = ((x85&x86)*(x87|x88));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = -18;
	static int32_t t17 = 21;

	t17 = ((x89&x90)*(x91|x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = UINT8_MAX;
	static int16_t x96 = -1;
	volatile uint64_t t18 = 54892062379LLU;

	t18 = ((x93&x94)*(x95|x96));

	if (t18 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x99 = -1;
	static int32_t x100 = 1;
	volatile int64_t t19 = 60204587LL;

	t19 = ((x97&x98)*(x99|x100));

	if (t19 != 524288LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = INT64_MAX;
	volatile int8_t x103 = -1;
	volatile int64_t t20 = 4488LL;

	t20 = ((x101&x102)*(x103|x104));

	if (t20 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x106 = -1;
	int16_t x107 = 1;
	volatile int32_t x108 = -1;
	volatile int32_t t21 = 145;

	t21 = ((x105&x106)*(x107|x108));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;

	t22 = ((x109&x110)*(x111|x112));

	if (t22 != -5648LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x119 = 0;
	int16_t x120 = 1;
	uint64_t t23 = 888306003456328LLU;

	t23 = ((x117&x118)*(x119|x120));

	if (t23 != 78710608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -6325637020894841LL;
	int16_t x122 = INT16_MIN;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = -26;

	t24 = ((x121&x122)*(x123|x124));

	if (t24 != 164466562543648768LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = -1;
	int16_t x126 = INT16_MAX;
	int16_t x128 = -60;

	t25 = ((x125&x126)*(x127|x128));

	if (t25 != -1900486LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = -1;
	uint16_t x132 = 60U;
	volatile int32_t t26 = -32;

	t26 = ((x129&x130)*(x131|x132));

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	int32_t t27 = -236;

	t27 = ((x133&x134)*(x135|x136));

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	int64_t x138 = -129182221672746LL;
	static uint16_t x140 = 6U;
	static int64_t t28 = -257649330823944LL;

	t28 = ((x137&x138)*(x139|x140));

	if (t28 != -775093330036476LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = 11;
	uint64_t x144 = 20LLU;

	t29 = ((x141&x142)*(x143|x144));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	volatile uint64_t x148 = 105487LLU;
	uint64_t t30 = 885235723870LLU;

	t30 = ((x145&x146)*(x147|x148));

	if (t30 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MIN;
	int16_t x151 = -5613;

	t31 = ((x149&x150)*(x151|x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x154 = -14078;
	uint64_t x155 = UINT64_MAX;
	static uint16_t x156 = UINT16_MAX;
	uint64_t t32 = 75LLU;

	t32 = ((x153&x154)*(x155|x156));

	if (t32 != 18446744071562082046LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	static uint16_t x158 = UINT16_MAX;
	static volatile int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MAX;

	t33 = ((x157&x158)*(x159|x160));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;

	t34 = ((x161&x162)*(x163|x164));

	if (t34 != 2147483648LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -7;
	int16_t x166 = -334;
	static int64_t x168 = 3377273146LL;
	static int64_t t35 = -151LL;

	t35 = ((x165&x166)*(x167|x168));

	if (t35 != -1134777777504LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = -1LL;
	static int32_t x171 = -84;
	int32_t x172 = INT32_MIN;
	static int64_t t36 = -254001452482LL;

	t36 = ((x169&x170)*(x171|x172));

	if (t36 != 2752512LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = -384683476643LL;
	volatile uint16_t x175 = 5339U;
	static uint64_t x176 = 172679016LLU;
	uint64_t t37 = 8175552LLU;

	t37 = ((x173&x174)*(x175|x176));

	if (t37 != 321801434065502511LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 253U;
	volatile int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MIN;
	int32_t t38 = 1;

	t38 = ((x177&x178)*(x179|x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = 46LL;

	t39 = ((x181&x182)*(x183|x184));

	if (t39 != 2147385345LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	int64_t x187 = INT64_MIN;
	uint64_t x188 = 5712LLU;
	volatile uint64_t t40 = 26534513429552472LLU;

	t40 = ((x185&x186)*(x187|x188));

	if (t40 != 18446744073522380800LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = -1;
	uint32_t x191 = 477457U;
	int32_t x192 = INT32_MIN;

	t41 = ((x189&x190)*(x191|x192));

	if (t41 != 612447983U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x194 = UINT8_MAX;
	uint8_t x195 = 10U;
	int16_t x196 = -2834;
	volatile int32_t t42 = -143280;

	t42 = ((x193&x194)*(x195|x196));

	if (t42 != -722670) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x198 = 120055U;
	uint8_t x200 = 41U;
	volatile int64_t t43 = 3436571297070LL;

	t43 = ((x197&x198)*(x199|x200));

	if (t43 != 70785355972414LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x201 = 8LLU;
	int8_t x202 = -2;
	uint16_t x203 = 151U;
	int32_t x204 = INT32_MIN;

	t44 = ((x201&x202)*(x203|x204));

	if (t44 != 18446744056529683640LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = 1782108483322LL;
	uint8_t x208 = 6U;
	static volatile uint64_t t45 = 3LLU;

	t45 = ((x205&x206)*(x207|x208));

	if (t45 != 17145605511468454146LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 0U;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MAX;

	t46 = ((x209&x210)*(x211|x212));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile uint16_t x215 = 0U;
	int64_t x216 = -1LL;
	volatile int64_t t47 = 20LL;

	t47 = ((x213&x214)*(x215|x216));

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = 4985;
	int32_t x220 = 3598;
	int32_t t48 = 468;

	t48 = ((x217&x218)*(x219|x220));

	if (t48 != -568290) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = -1;
	int16_t x224 = INT16_MAX;
	static int32_t t49 = -1;

	t49 = ((x221&x222)*(x223|x224));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = UINT8_MAX;
	static uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	volatile int64_t x228 = -1LL;
	volatile int64_t t50 = 67106768376561288LL;

	t50 = ((x225&x226)*(x227|x228));

	if (t50 != -255LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 40U;
	int16_t x230 = 0;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t51 = 11944549212860LL;

	t51 = ((x229&x230)*(x231|x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 13U;
	volatile uint64_t t52 = 71328831054LLU;

	t52 = ((x233&x234)*(x235|x236));

	if (t52 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x244 = 1U;
	uint32_t t53 = 223099U;

	t53 = ((x241&x242)*(x243|x244));

	if (t53 != 4294454821U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = -1;
	volatile int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t54 = 1857LLU;

	t54 = ((x245&x246)*(x247|x248));

	if (t54 != 2147483648LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = INT64_MIN;
	int16_t x251 = 1;
	static volatile uint8_t x252 = 92U;
	int64_t t55 = -147LL;

	t55 = ((x249&x250)*(x251|x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 1247U;
	static uint32_t x255 = 52U;
	int16_t x256 = INT16_MIN;
	uint32_t t56 = 1646212U;

	t56 = ((x253&x254)*(x255|x256));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 7807642U;
	static int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	int16_t x260 = -1;
	volatile uint32_t t57 = 0U;

	t57 = ((x257&x258)*(x259|x260));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x261 = 1U;
	static volatile int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	static int64_t x264 = INT64_MIN;
	int64_t t58 = 262735304449597376LL;

	t58 = ((x261&x262)*(x263|x264));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 9U;
	static int32_t x274 = -7333;
	uint32_t x275 = 6785083U;
	static volatile uint32_t t59 = 252738357U;

	t59 = ((x273&x274)*(x275|x276));

	if (t59 != 2147483639U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x279 = 34446700U;
	int8_t x280 = -1;
	static volatile int64_t t60 = -49830065LL;

	t60 = ((x277&x278)*(x279|x280));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = -22653440793997527LL;
	uint8_t x282 = 48U;
	int64_t x283 = INT64_MIN;
	volatile int64_t t61 = 0LL;

	t61 = ((x281&x282)*(x283|x284));

	if (t61 != -32LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x285 = INT16_MAX;
	uint8_t x287 = 13U;
	static int64_t x288 = -1512714LL;
	volatile int64_t t62 = 105LL;

	t62 = ((x285&x286)*(x287|x288));

	if (t62 != -16842457470LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x289 = 1LL;
	uint32_t x291 = 1368U;
	volatile uint8_t x292 = UINT8_MAX;
	int64_t t63 = 57350155528729LL;

	t63 = ((x289&x290)*(x291|x292));

	if (t63 != 1535LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 123586733U;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = 115211908401LLU;
	uint64_t t64 = 29998083781602512LLU;

	t64 = ((x293&x294)*(x295|x296));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MAX;
	uint32_t x299 = 10884238U;
	int8_t x300 = 43;

	t65 = ((x297&x298)*(x299|x300));

	if (t65 != 162622289U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 6U;
	int32_t x302 = 500528124;
	static int16_t x303 = INT16_MIN;
	uint32_t x304 = 22068U;
	uint32_t t66 = 7137U;

	t66 = ((x301&x302)*(x303|x304));

	if (t66 != 4294924496U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = 341;
	int16_t x307 = -5147;
	static volatile int64_t x308 = -1LL;
	static int64_t t67 = 0LL;

	t67 = ((x305&x306)*(x307|x308));

	if (t67 != -273LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int64_t x310 = -1LL;
	int8_t x312 = 49;
	int64_t t68 = -161028070469832118LL;

	t68 = ((x309&x310)*(x311|x312));

	if (t68 != 15045LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MAX;
	int32_t x315 = INT32_MAX;
	static int64_t x316 = INT64_MAX;
	int64_t t69 = 12206529LL;

	t69 = ((x313&x314)*(x315|x316));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = -110439804820224370LL;
	static int16_t x318 = -1;
	int64_t x319 = -1LL;
	volatile int32_t x320 = INT32_MIN;
	int64_t t70 = -10602750640489LL;

	t70 = ((x317&x318)*(x319|x320));

	if (t70 != 110439804820224370LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MIN;
	volatile int16_t x322 = -164;
	uint16_t x323 = 60U;
	int16_t x324 = INT16_MAX;

	t71 = ((x321&x322)*(x323|x324));

	if (t71 != -1073709056) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = -1;

	t72 = ((x325&x326)*(x327|x328));

	if (t72 != 18446744073709543328LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 998;
	uint32_t x332 = 99U;

	t73 = ((x329&x330)*(x331|x332));

	if (t73 != 4262232064U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MAX;
	static volatile uint32_t x335 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	uint64_t t74 = 112813871484LLU;

	t74 = ((x333&x334)*(x335|x336));

	if (t74 != 3891240369270LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MIN;
	static int64_t x338 = 22439533720629380LL;
	volatile int32_t x339 = -1;
	int64_t x340 = -1LL;
	int64_t t75 = -1LL;

	t75 = ((x337&x338)*(x339|x340));

	if (t75 != -22439533720600576LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x341 = 8578447LLU;
	int8_t x343 = -2;
	volatile int8_t x344 = 6;

	t76 = ((x341&x342)*(x343|x344));

	if (t76 != 18446744073692446720LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	static int8_t x350 = 2;
	static uint16_t x351 = 588U;
	static int32_t x352 = INT32_MIN;
	int32_t t77 = -1823137;

	t77 = ((x349&x350)*(x351|x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x353 = 11016458U;
	int64_t x354 = INT64_MAX;
	static int32_t x356 = INT32_MAX;
	volatile int64_t t78 = 134492482262241109LL;

	t78 = ((x353&x354)*(x355|x356));

	if (t78 != -11016458LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x358 = INT32_MIN;
	volatile int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;

	t79 = ((x357&x358)*(x359|x360));

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -1LL;
	static uint64_t x363 = 15796701755942704LLU;
	static volatile uint64_t t80 = 23967LLU;

	t80 = ((x361&x362)*(x363|x364));

	if (t80 != 48825188220928LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = 12550U;
	uint32_t x366 = 25922U;
	int32_t x367 = -1;
	int8_t x368 = INT8_MAX;
	volatile uint32_t t81 = 1402423U;

	t81 = ((x365&x366)*(x367|x368));

	if (t81 != 4294958846U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x370 = INT64_MAX;
	volatile int16_t x371 = -122;
	uint16_t x372 = UINT16_MAX;
	volatile uint64_t t82 = 25054096772LLU;

	t82 = ((x369&x370)*(x371|x372));

	if (t82 != 18446744072768103771LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x373 = 2174088903780LLU;
	volatile int32_t x374 = -1;
	int8_t x375 = -1;
	uint32_t x376 = 112432U;

	t83 = ((x373&x374)*(x375|x376));

	if (t83 != 3588236860468757404LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = 3;
	uint32_t x379 = 312749930U;
	uint8_t x380 = 15U;

	t84 = ((x377&x378)*(x379|x380));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x381 = 89285U;
	static volatile int32_t x382 = -186;
	static volatile int16_t x383 = 0;
	static volatile uint32_t x384 = 14558U;
	static uint32_t t85 = 255U;

	t85 = ((x381&x382)*(x383|x384));

	if (t85 != 1297933048U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = 2238;
	int64_t x386 = 246280427372451467LL;
	int16_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int64_t t86 = -358209075027LL;

	t86 = ((x385&x386)*(x387|x388));

	if (t86 != -138LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = 706;
	int8_t x390 = INT8_MAX;
	uint8_t x391 = 20U;
	static int8_t x392 = INT8_MIN;
	int32_t t87 = -5023;

	t87 = ((x389&x390)*(x391|x392));

	if (t87 != -7128) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = 54731101352856135LL;
	int64_t x398 = INT64_MIN;
	static int32_t x399 = -1;
	int8_t x400 = INT8_MIN;

	t88 = ((x397&x398)*(x399|x400));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 0U;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = 1949;
	volatile uint32_t t89 = 23682U;

	t89 = ((x413&x414)*(x415|x416));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	static int32_t x419 = 2417;
	int32_t x420 = -30251979;

	t90 = ((x417&x418)*(x419|x420));

	if (t90 != 30249611U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x421 = INT16_MAX;
	static uint64_t x422 = 32275563529668LLU;
	int8_t x423 = INT8_MIN;
	volatile uint8_t x424 = UINT8_MAX;
	uint64_t t91 = 1207700425LLU;

	t91 = ((x421&x422)*(x423|x424));

	if (t91 != 18446744073709533756LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x430 = -27010720476153450LL;
	int8_t x431 = -1;
	int16_t x432 = INT16_MIN;

	t92 = ((x429&x430)*(x431|x432));

	if (t92 != 27010720476153450LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	uint64_t x435 = 80LLU;
	uint32_t x436 = 2002754188U;

	t93 = ((x433&x434)*(x435|x436));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = 177387LL;
	volatile int32_t x438 = -1;
	int8_t x439 = INT8_MAX;
	int64_t t94 = 1101325763753721LL;

	t94 = ((x437&x438)*(x439|x440));

	if (t94 != 22528149LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = INT32_MIN;
	static volatile uint64_t t95 = 8344355223621719LLU;

	t95 = ((x441&x442)*(x443|x444));

	if (t95 != 18445500042874716160LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x445 = 57U;
	uint16_t x446 = 4576U;
	int64_t x447 = -1LL;
	int64_t t96 = 46398979LL;

	t96 = ((x445&x446)*(x447|x448));

	if (t96 != -32LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x450 = 0;
	uint64_t t97 = 1146564411LLU;

	t97 = ((x449&x450)*(x451|x452));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x453 = 129275481966674919LLU;
	int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MAX;
	int16_t x456 = -1;

	t98 = ((x453&x454)*(x455|x456));

	if (t98 != 18317468591742876800LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x457 = 30030150586428944LLU;
	static uint8_t x458 = 33U;
	uint16_t x459 = 2U;

	t99 = ((x457&x458)*(x459|x460));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

