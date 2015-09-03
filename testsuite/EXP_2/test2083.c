#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 4080U;
volatile uint64_t x15 = UINT64_MAX;
volatile int32_t x16 = INT32_MAX;
uint32_t x20 = 2948U;
static volatile uint64_t x21 = 748170255524847LLU;
uint64_t x22 = 38LLU;
int8_t x28 = INT8_MAX;
volatile int64_t x33 = INT64_MIN;
static int64_t x34 = -1LL;
int64_t t7 = 5LL;
int32_t x41 = -20519982;
static int32_t x53 = INT32_MIN;
uint64_t t11 = 9068829LLU;
uint8_t x68 = 3U;
uint16_t x70 = UINT16_MAX;
int16_t x71 = INT16_MAX;
int16_t x82 = INT16_MIN;
volatile uint32_t x89 = 31142359U;
static int8_t x90 = INT8_MIN;
uint8_t x110 = 0U;
static int8_t x112 = -37;
static int8_t x113 = INT8_MAX;
static volatile int64_t t24 = -1303841909468808437LL;
volatile uint32_t x126 = UINT32_MAX;
uint32_t t25 = 252049065U;
uint32_t x131 = 2U;
volatile uint16_t x136 = 28U;
static volatile uint64_t t27 = 16701944903535LLU;
uint32_t x144 = 32078U;
int32_t x145 = -1;
uint64_t x148 = 3071LLU;
static volatile uint64_t t30 = 15004398773883406LLU;
uint32_t t31 = 1401U;
int64_t x158 = 65771580708628839LL;
volatile uint64_t t33 = 14399762LLU;
uint64_t x162 = UINT64_MAX;
int64_t x165 = -1LL;
volatile int64_t t35 = -3653817914LL;
volatile int64_t x176 = -1LL;
int64_t x185 = -1LL;
volatile uint32_t x202 = 12137586U;
uint8_t x203 = 42U;
volatile int64_t x207 = -1LL;
static volatile uint32_t x212 = 1439310U;
int64_t x218 = -9456108953773249LL;
int64_t x223 = 1013041366656664611LL;
int64_t t49 = 98LL;
int8_t x240 = -1;
volatile uint64_t t50 = 738386LLU;
int32_t x247 = -1;
uint32_t t53 = 300U;
int8_t x256 = INT8_MIN;
int32_t x257 = INT32_MIN;
int64_t x259 = INT64_MIN;
int32_t x260 = INT32_MIN;
volatile int8_t x267 = INT8_MAX;
uint16_t x272 = UINT16_MAX;
int16_t x278 = INT16_MAX;
int16_t x281 = INT16_MIN;
uint64_t x288 = 1LLU;
volatile uint32_t t63 = 372833U;
int8_t x300 = -10;
static int32_t x315 = -1;
static uint8_t x317 = UINT8_MAX;
uint8_t x319 = 2U;
int64_t x323 = 54836874287098LL;
static int64_t t70 = 1255819282977242LL;
int64_t x326 = 67939947LL;
int64_t t71 = 130834LL;
volatile int64_t x330 = -30785100312450LL;
static uint16_t x331 = 977U;
volatile int64_t t72 = -80574097LL;
volatile int32_t x337 = 87;
int16_t x344 = -1;
uint32_t x348 = 1U;
volatile uint32_t t75 = 5U;
int32_t t77 = -17706;
int64_t x358 = 245405429668223LL;
uint16_t x363 = 3107U;
uint32_t x364 = 48158U;
int64_t x368 = -1589073LL;
volatile int16_t x370 = 1278;
uint16_t x379 = 13825U;
static volatile int16_t x382 = -7749;
uint64_t t85 = 6817669659743499574LLU;
static int16_t x401 = INT16_MIN;
int16_t x408 = -15935;
uint32_t x414 = UINT32_MAX;
int64_t t88 = 1992397173903LL;
int8_t x426 = INT8_MIN;
int64_t x428 = -363LL;
int64_t t91 = 790453LL;
static int64_t x443 = 93901267903047245LL;
int64_t x457 = INT64_MIN;
int32_t x462 = INT32_MAX;
volatile int64_t t99 = 15LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static volatile int8_t x2 = -3;
	static volatile uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 92U;

	t0 = ((x1%(x2^x3))*x4);

	if (t0 != 4294967169U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MAX;
	int16_t x6 = INT16_MIN;
	volatile int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = 6447531081606LLU;
	uint64_t t1 = 9194855LLU;

	t1 = ((x5%(x6^x7))*x8);

	if (t1 != 818836447363962LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 659202457U;
	volatile int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile int16_t x12 = 16010;
	volatile uint32_t t2 = 133601U;

	t2 = ((x9%(x10^x11))*x12);

	if (t2 != 1096690298U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	uint32_t x14 = 6U;
	uint64_t t3 = 4665LLU;

	t3 = ((x13%(x14^x15))*x16);

	if (t3 != 12884901882LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 0U;
	int64_t x18 = INT64_MAX;
	static volatile int32_t x19 = INT32_MIN;
	volatile int64_t t4 = -764261621624LL;

	t4 = ((x17%(x18^x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x23 = 1339U;
	static int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 100577LLU;

	t5 = ((x21%(x22^x23))*x24);

	if (t5 != 18446742417999659008LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static volatile int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	static int64_t t6 = -12LL;

	t6 = ((x25%(x26^x27))*x28);

	if (t6 != 16129LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x35 = 1U;
	int32_t x36 = INT32_MAX;

	t7 = ((x33%(x34^x35))*x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 4U;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = 202U;
	static uint32_t t8 = 49513799U;

	t8 = ((x41%(x42^x43))*x44);

	if (t8 != 149930932U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 3078139;
	int8_t x46 = INT8_MIN;
	static uint64_t x47 = 1763762725105080064LLU;
	static volatile uint16_t x48 = UINT16_MAX;
	uint64_t t9 = 47LLU;

	t9 = ((x45%(x46^x47))*x48);

	if (t9 != 201725839365LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x54 = INT16_MIN;
	volatile uint16_t x55 = 265U;
	int16_t x56 = 4;
	int32_t t10 = 38614;

	t10 = ((x53%(x54^x55))*x56);

	if (t10 != -41752) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = -1;
	uint8_t x62 = 28U;
	uint64_t x63 = 3689781509160125LLU;
	int64_t x64 = -11750863971LL;

	t11 = ((x61%(x62^x63))*x64);

	if (t11 != 1316980303223265976LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -1;
	int32_t x66 = INT32_MAX;
	volatile int32_t x67 = -1;
	volatile int32_t t12 = 394;

	t12 = ((x65%(x66^x67))*x68);

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -29;
	int16_t x72 = INT16_MAX;
	int32_t t13 = 6344000;

	t13 = ((x69%(x70^x71))*x72);

	if (t13 != -950243) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x73 = 13U;
	int64_t x74 = 29LL;
	int32_t x75 = -41;
	int32_t x76 = INT32_MAX;
	volatile int64_t t14 = 740483983288LL;

	t14 = ((x73%(x74^x75))*x76);

	if (t14 != 27917287411LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = 1;
	int8_t x83 = INT8_MIN;
	volatile int32_t x84 = 371;
	volatile int32_t t15 = -978348;

	t15 = ((x81%(x82^x83))*x84);

	if (t15 != 371) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = 156228222839717593LL;
	int8_t x86 = -1;
	static volatile uint64_t x87 = 9LLU;
	int8_t x88 = INT8_MAX;
	volatile uint64_t t16 = 2890503983LLU;

	t16 = ((x85%(x86^x87))*x88);

	if (t16 != 1394240226934582695LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x91 = -1LL;
	static uint8_t x92 = 2U;
	int64_t t17 = 11762645709304LL;

	t17 = ((x89%(x90^x91))*x92);

	if (t17 != 108LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = 22;
	static int64_t x94 = 17083LL;
	volatile uint16_t x95 = UINT16_MAX;
	uint8_t x96 = UINT8_MAX;
	static volatile int64_t t18 = -88LL;

	t18 = ((x93%(x94^x95))*x96);

	if (t18 != 5610LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = -234;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = -2;
	uint64_t t19 = 588666095807416190LLU;

	t19 = ((x97%(x98^x99))*x100);

	if (t19 != 18446744073709113570LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MAX;
	static int8_t x102 = INT8_MIN;
	static volatile int32_t x103 = -1;
	volatile uint32_t x104 = UINT32_MAX;
	uint32_t t20 = 11586508U;

	t20 = ((x101%(x102^x103))*x104);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = INT32_MAX;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t21 = 12;

	t21 = ((x105%(x106^x107))*x108);

	if (t21 != -4128768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = INT64_MIN;
	static int64_t x111 = INT64_MIN;
	static volatile int64_t t22 = 58040LL;

	t22 = ((x109%(x110^x111))*x112);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	static uint16_t x116 = 726U;
	int64_t t23 = -83574469443833957LL;

	t23 = ((x113%(x114^x115))*x116);

	if (t23 != 92202LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x117 = 470U;
	int16_t x118 = INT16_MIN;
	static int64_t x119 = 5LL;
	int32_t x120 = -47;

	t24 = ((x117%(x118^x119))*x120);

	if (t24 != -22090LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = 251434U;

	t25 = ((x125%(x126^x127))*x128);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = 3;
	int32_t x130 = INT32_MAX;
	static int64_t x132 = -18178966722365911LL;
	volatile int64_t t26 = 1LL;

	t26 = ((x129%(x130^x131))*x132);

	if (t26 != -54536900167097733LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = -10136516604203LL;
	int16_t x134 = -11369;
	volatile uint64_t x135 = 999762258812774306LLU;

	t27 = ((x133%(x134^x135))*x136);

	if (t27 != 9546315350583011712LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -47;
	static int32_t x140 = 104;
	static volatile int32_t t28 = -708932610;

	t28 = ((x137%(x138^x139))*x140);

	if (t28 != -104) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x141 = INT64_MAX;
	uint16_t x142 = 8856U;
	volatile uint64_t x143 = UINT64_MAX;
	volatile uint64_t t29 = 2867618LLU;

	t29 = ((x141%(x142^x143))*x144);

	if (t29 != 18446744073709519538LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 21299365LLU;

	t30 = ((x145%(x146^x147))*x148);

	if (t30 != 6529511930022LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int32_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	int8_t x152 = -11;

	t31 = ((x149%(x150^x151))*x152);

	if (t31 != 4294246411U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MIN;
	volatile uint64_t x154 = 1515043821303LLU;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 7232792U;
	uint64_t t32 = 928349048008432901LLU;

	t32 = ((x153%(x154^x155))*x156);

	if (t32 != 10957996592570032600LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	uint8_t x160 = 13U;

	t33 = ((x157%(x158^x159))*x160);

	if (t33 != 855030549212173256LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = -1;
	volatile int32_t x163 = -14099349;
	int16_t x164 = 1;
	static uint64_t t34 = 23LLU;

	t34 = ((x161%(x162^x163))*x164);

	if (t34 != 1832367LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x166 = INT32_MIN;
	int8_t x167 = -1;
	int32_t x168 = INT32_MAX;

	t35 = ((x165%(x166^x167))*x168);

	if (t35 != -2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 56724948678107LLU;
	volatile int16_t x170 = 1706;
	uint8_t x171 = 64U;
	int32_t x172 = INT32_MAX;
	static volatile uint64_t t36 = 41132233LLU;

	t36 = ((x169%(x170^x171))*x172);

	if (t36 != 1711544466659LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = 15597628;
	uint32_t x175 = UINT32_MAX;
	int64_t t37 = -416LL;

	t37 = ((x173%(x174^x175))*x176);

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MAX;
	static int64_t x183 = INT64_MIN;
	uint64_t x184 = 3805411340332LLU;
	volatile uint64_t t38 = 928963113LLU;

	t38 = ((x181%(x182^x183))*x184);

	if (t38 != 249387632188657620LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x186 = 35721568241352545LLU;
	int16_t x187 = INT16_MIN;
	static int8_t x188 = 0;
	uint64_t t39 = 62397575657LLU;

	t39 = ((x185%(x186^x187))*x188);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	static int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	static volatile int64_t x196 = -1LL;
	volatile int64_t t40 = -127636935035143LL;

	t40 = ((x193%(x194^x195))*x196);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = -1LL;
	int16_t x198 = -3687;
	int8_t x199 = INT8_MIN;
	volatile int32_t x200 = -1;
	static volatile int64_t t41 = -192LL;

	t41 = ((x197%(x198^x199))*x200);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = 1;
	volatile int16_t x204 = -44;
	volatile uint32_t t42 = 6U;

	t42 = ((x201%(x202^x203))*x204);

	if (t42 != 4294967252U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x206 = 26880984033754LL;
	int32_t x208 = INT32_MAX;
	volatile int64_t t43 = -266LL;

	t43 = ((x205%(x206^x207))*x208);

	if (t43 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x209 = INT64_MAX;
	uint32_t x210 = 445393U;
	static volatile int16_t x211 = -1;
	volatile int64_t t44 = -16392841LL;

	t44 = ((x209%(x210^x211))*x212);

	if (t44 != 595735980569010LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x213 = 1U;
	static volatile int32_t x214 = -64020;
	volatile int8_t x215 = 11;
	int16_t x216 = INT16_MIN;
	int32_t t45 = 1779;

	t45 = ((x213%(x214^x215))*x216);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -1LL;
	static int8_t x219 = -6;
	volatile int32_t x220 = -7605495;
	int64_t t46 = 415LL;

	t46 = ((x217%(x218^x219))*x220);

	if (t46 != 7605495LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -740889557LL;
	uint64_t x222 = 169LLU;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x221%(x222^x223))*x224);

	if (t47 != 1960036451122937856LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x225 = -1;
	int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = -1LL;
	int64_t t48 = 34859471804094LL;

	t48 = ((x225%(x226^x227))*x228);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x229 = -1LL;
	int16_t x230 = -79;
	static int64_t x231 = 2LL;
	int16_t x232 = -1;

	t49 = ((x229%(x230^x231))*x232);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = -1873;
	int8_t x238 = 0;
	uint64_t x239 = UINT64_MAX;

	t50 = ((x237%(x238^x239))*x240);

	if (t50 != 1873LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MAX;
	uint32_t x242 = 14588484U;
	volatile uint64_t x243 = 34434889419LLU;
	volatile int64_t x244 = INT64_MIN;
	uint64_t t51 = 438710LLU;

	t51 = ((x241%(x242^x243))*x244);

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = -4;
	volatile uint8_t x246 = UINT8_MAX;
	int32_t x248 = 4;
	int32_t t52 = -5;

	t52 = ((x245%(x246^x247))*x248);

	if (t52 != -16) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x249 = 90;
	static int8_t x250 = INT8_MIN;
	uint32_t x251 = 173913356U;
	uint16_t x252 = 755U;

	t53 = ((x249%(x250^x251))*x252);

	if (t53 != 67950U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x253 = 3;
	int32_t x254 = INT32_MIN;
	int16_t x255 = 4;
	int32_t t54 = 4062339;

	t54 = ((x253%(x254^x255))*x256);

	if (t54 != -384) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x258 = 17840U;
	volatile int64_t t55 = -2090890104106566158LL;

	t55 = ((x257%(x258^x259))*x260);

	if (t55 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static int64_t x263 = INT64_MAX;
	volatile int8_t x264 = -1;
	volatile int64_t t56 = 177LL;

	t56 = ((x261%(x262^x263))*x264);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -386581371967LL;
	int16_t x266 = INT16_MAX;
	int16_t x268 = -1;
	int64_t t57 = -375559881061962354LL;

	t57 = ((x265%(x266^x267))*x268);

	if (t57 != 1087LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int32_t x270 = 1380164;
	int64_t x271 = INT64_MIN;
	volatile int64_t t58 = 13686979567376836LL;

	t58 = ((x269%(x270^x271))*x272);

	if (t58 != 16711425LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 3295U;
	volatile int8_t x275 = 0;
	int8_t x276 = -1;
	static volatile uint32_t t59 = 31U;

	t59 = ((x273%(x274^x275))*x276);

	if (t59 != 4294966948U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = 1U;
	uint32_t x279 = 120377U;
	volatile uint64_t x280 = 1092LLU;
	volatile uint64_t t60 = 125134089262087904LLU;

	t60 = ((x277%(x278^x279))*x280);

	if (t60 != 1092LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x282 = 35;
	uint64_t x283 = 2999LLU;
	static uint32_t x284 = 14680409U;
	uint64_t t61 = 695646647326063945LLU;

	t61 = ((x281%(x282^x283))*x284);

	if (t61 != 9278018488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -14;
	uint64_t x286 = 7LLU;
	volatile uint16_t x287 = 3530U;
	uint64_t t62 = 88579371762380LLU;

	t62 = ((x285%(x286^x287))*x288);

	if (t62 != 1386LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = UINT16_MAX;
	volatile uint32_t x292 = 22996U;

	t63 = ((x289%(x290^x291))*x292);

	if (t63 != 4294944300U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x297 = 1565;
	int32_t x298 = -1;
	int16_t x299 = 122;
	volatile int32_t t64 = 286320;

	t64 = ((x297%(x298^x299))*x300);

	if (t64 != -890) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x301 = 58989292U;
	static int16_t x302 = INT16_MAX;
	int64_t x303 = -1LL;
	static volatile uint16_t x304 = UINT16_MAX;
	volatile int64_t t65 = -218680LL;

	t65 = ((x301%(x302^x303))*x304);

	if (t65 != 451667220LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = 9899044090LL;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MAX;
	static volatile uint64_t t66 = 155666048270053494LLU;

	t66 = ((x305%(x306^x307))*x308);

	if (t66 != 18446744072400442114LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MAX;
	static uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MIN;
	volatile uint32_t t67 = 0U;

	t67 = ((x309%(x310^x311))*x312);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	volatile uint8_t x314 = UINT8_MAX;
	static int8_t x316 = 6;
	volatile int32_t t68 = -3992;

	t68 = ((x313%(x314^x315))*x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x318 = 9260U;
	volatile int64_t x320 = -5619LL;
	int64_t t69 = -64790353LL;

	t69 = ((x317%(x318^x319))*x320);

	if (t69 != -1432845LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -6;
	volatile int32_t x322 = -3574;
	int32_t x324 = -1;

	t70 = ((x321%(x322^x323))*x324);

	if (t70 != 6LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -3;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = 10264U;

	t71 = ((x325%(x326^x327))*x328);

	if (t71 != -30792LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -1;
	volatile uint8_t x332 = UINT8_MAX;

	t72 = ((x329%(x330^x331))*x332);

	if (t72 != -255LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x338 = 15202U;
	volatile int16_t x339 = 248;
	volatile int32_t x340 = INT32_MIN;
	volatile uint32_t t73 = 648U;

	t73 = ((x337%(x338^x339))*x340);

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = UINT16_MAX;
	static volatile int8_t x342 = 7;
	volatile uint32_t x343 = 21U;
	volatile uint32_t t74 = 61315U;

	t74 = ((x341%(x342^x343))*x344);

	if (t74 != 4294967281U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 25U;

	t75 = ((x345%(x346^x347))*x348);

	if (t75 != 25U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = -8;
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = 0;
	static volatile int64_t x352 = -1LL;
	static int64_t t76 = -960206983985230LL;

	t76 = ((x349%(x350^x351))*x352);

	if (t76 != 8LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = -2;
	int8_t x354 = INT8_MIN;
	uint8_t x355 = 72U;
	uint16_t x356 = 1U;

	t77 = ((x353%(x354^x355))*x356);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = UINT32_MAX;
	static volatile int64_t x359 = INT64_MIN;
	int8_t x360 = -56;
	int64_t t78 = -8777872634939567LL;

	t78 = ((x357%(x358^x359))*x360);

	if (t78 != -240518168520LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	volatile uint64_t t79 = 0LLU;

	t79 = ((x361%(x362^x363))*x364);

	if (t79 != 103418517472226LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = 4794666U;
	int64_t t80 = -26755LL;

	t80 = ((x365%(x366^x367))*x368);

	if (t80 != -7585582982070LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x369 = 2U;
	volatile uint32_t x371 = 1984595U;
	volatile int16_t x372 = INT16_MIN;
	static volatile uint32_t t81 = 311U;

	t81 = ((x369%(x370^x371))*x372);

	if (t81 != 4294901760U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = INT64_MAX;
	static int64_t x374 = -1LL;
	uint16_t x375 = 1U;
	int8_t x376 = -1;
	static volatile int64_t t82 = -52LL;

	t82 = ((x373%(x374^x375))*x376);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 123357544246968513LLU;
	volatile int32_t x378 = 3;
	uint16_t x380 = UINT16_MAX;
	uint64_t t83 = 533660644696LLU;

	t83 = ((x377%(x378^x379))*x380);

	if (t83 != 430761555LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = -1;
	int32_t x383 = 0;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t84 = 51;

	t84 = ((x381%(x382^x383))*x384);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	static volatile int32_t x399 = -52706554;
	int32_t x400 = 4050479;

	t85 = ((x397%(x398^x399))*x400);

	if (t85 != 108008809264552LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x402 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = -1;
	static uint64_t t86 = 4LLU;

	t86 = ((x401%(x402^x403))*x404);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x405 = 12LLU;
	volatile int8_t x406 = 5;
	volatile int32_t x407 = -84365179;
	volatile uint64_t t87 = 30311LLU;

	t87 = ((x405%(x406^x407))*x408);

	if (t87 != 18446744073709360396LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = INT32_MIN;
	int64_t x415 = INT64_MIN;
	static uint16_t x416 = 14U;

	t88 = ((x413%(x414^x415))*x416);

	if (t88 != -30064771072LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x417 = 1676LLU;
	static int8_t x418 = -1;
	int32_t x419 = INT32_MIN;
	uint16_t x420 = 634U;
	static uint64_t t89 = 2978529392LLU;

	t89 = ((x417%(x418^x419))*x420);

	if (t89 != 1062584LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x425 = 1U;
	int8_t x427 = -6;
	volatile int64_t t90 = 61930904LL;

	t90 = ((x425%(x426^x427))*x428);

	if (t90 != -363LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MIN;
	static int64_t x430 = INT64_MAX;
	volatile uint32_t x431 = UINT32_MAX;
	int32_t x432 = INT32_MIN;

	t91 = ((x429%(x430^x431))*x432);

	if (t91 != 274877906944LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = -1;
	int64_t x434 = INT64_MIN;
	static int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	static int64_t t92 = 161113842133819LL;

	t92 = ((x433%(x434^x435))*x436);

	if (t92 != 128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x437 = -1LL;
	static uint16_t x438 = 0U;
	static int64_t x439 = INT64_MAX;
	int8_t x440 = -40;
	volatile int64_t t93 = 16LL;

	t93 = ((x437%(x438^x439))*x440);

	if (t93 != 40LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -7;
	int32_t x442 = 33;
	int8_t x444 = -5;
	int64_t t94 = -1877694LL;

	t94 = ((x441%(x442^x443))*x444);

	if (t94 != 35LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = -716648693LL;
	int64_t x446 = -1LL;
	int64_t x447 = 83401336287LL;
	int8_t x448 = INT8_MIN;
	int64_t t95 = -1300708447029181450LL;

	t95 = ((x445%(x446^x447))*x448);

	if (t95 != 91731032704LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x449 = 0;
	static volatile uint8_t x450 = UINT8_MAX;
	static int8_t x451 = -1;
	static int64_t x452 = -447438LL;
	volatile int64_t t96 = -929666988883859LL;

	t96 = ((x449%(x450^x451))*x452);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x453 = 754992U;
	static uint16_t x454 = UINT16_MAX;
	volatile int16_t x455 = -1;
	uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t97 = 247361U;

	t97 = ((x453%(x454^x455))*x456);

	if (t97 != 4294212304U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x458 = UINT16_MAX;
	volatile int8_t x459 = INT8_MIN;
	static int8_t x460 = -1;
	static volatile int64_t t98 = -3283116LL;

	t98 = ((x457%(x458^x459))*x460);

	if (t98 != 6524LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x461 = 499170689U;
	static int64_t x463 = INT64_MAX;
	int64_t x464 = -1LL;

	t99 = ((x461%(x462^x463))*x464);

	if (t99 != -499170689LL) { NG(); } else { ; }
	
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

