#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
int32_t x15 = INT32_MAX;
uint16_t x16 = 13298U;
int64_t x19 = -1LL;
volatile int8_t x32 = 3;
volatile uint8_t x46 = 7U;
volatile int16_t x47 = INT16_MAX;
int16_t x51 = 120;
volatile int32_t x59 = INT32_MIN;
uint16_t x68 = UINT16_MAX;
volatile uint64_t x75 = UINT64_MAX;
static volatile uint64_t t16 = 500LLU;
volatile uint64_t x83 = 17090LLU;
int32_t x89 = -1;
static volatile uint64_t x91 = 81876659856LLU;
static volatile uint64_t t19 = 149545869933269975LLU;
int64_t t21 = -478372376015988248LL;
int8_t x106 = -1;
uint32_t x108 = 12563433U;
int32_t x110 = INT32_MIN;
int32_t x118 = INT32_MAX;
volatile int32_t x122 = INT32_MIN;
int16_t x125 = 39;
static uint64_t x130 = 984595324106LLU;
int8_t x141 = INT8_MIN;
static int32_t x142 = 904729;
uint64_t x153 = UINT64_MAX;
int8_t x158 = INT8_MAX;
static volatile int64_t t34 = -4177349LL;
static uint64_t x162 = UINT64_MAX;
int8_t x164 = -1;
int64_t x170 = INT64_MIN;
volatile uint8_t x174 = UINT8_MAX;
int64_t x175 = INT64_MIN;
int16_t x176 = -1;
int16_t x181 = INT16_MIN;
uint32_t x182 = UINT32_MAX;
int16_t x188 = INT16_MIN;
uint32_t x193 = 58489093U;
uint8_t x202 = 27U;
int16_t x210 = INT16_MAX;
static int16_t x216 = INT16_MIN;
static uint16_t x225 = 92U;
static int64_t x226 = INT64_MIN;
uint64_t x227 = 31LLU;
static uint64_t x228 = 3174089739486LLU;
volatile int16_t x230 = -1;
int16_t x236 = -692;
int64_t x245 = -1LL;
int32_t x249 = -1;
volatile int32_t x252 = -77;
static volatile uint64_t t56 = 1065178939416LLU;
uint16_t x254 = 40U;
volatile int64_t t57 = 2LL;
volatile int8_t x260 = 3;
static int64_t t58 = 111LL;
int32_t x261 = INT32_MAX;
uint8_t x264 = 1U;
int32_t x272 = INT32_MIN;
volatile int64_t x273 = 784092482349695252LL;
uint32_t t63 = 13431471U;
int16_t x292 = INT16_MIN;
int64_t x297 = -1LL;
int64_t x303 = INT64_MIN;
uint16_t x310 = 3U;
int64_t x312 = 1495859209199879531LL;
volatile uint64_t t69 = 138345376283625LLU;
static int16_t x328 = -51;
int32_t x337 = INT32_MAX;
volatile uint32_t x351 = UINT32_MAX;
volatile int32_t x361 = -1011;
uint64_t x365 = 27257LLU;
uint8_t x369 = 29U;
volatile int32_t t81 = 7504624;
int64_t x373 = -1LL;
static int8_t x391 = INT8_MAX;
int64_t x393 = INT64_MAX;
volatile uint16_t x411 = 2U;
int32_t x412 = -1;
volatile int32_t t90 = -21963818;
uint32_t x413 = 1495087785U;
int16_t x414 = -8723;
static uint8_t x422 = 31U;
uint16_t x426 = 25U;
uint32_t x428 = 253U;
uint64_t x431 = UINT64_MAX;
uint32_t x433 = 1U;
static uint32_t x439 = 308U;
uint16_t x441 = 2826U;
int32_t x450 = INT32_MAX;


void f0(void) {
	uint32_t x1 = 30555U;
	uint64_t x2 = 211749304393354LLU;
	uint16_t x3 = 529U;
	int8_t x4 = -1;
	uint64_t t0 = 2312472284LLU;

	t0 = (((x1&x2)/x3)-x4);

	if (t0 != 42LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	uint64_t x6 = 6509921969145656LLU;
	static uint64_t x8 = 239524747LLU;
	uint64_t t1 = 12376LLU;

	t1 = (((x5&x6)/x7)-x8);

	if (t1 != 18446744073470026869LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 1282U;
	volatile int16_t x10 = 1650;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	int64_t t2 = 330LL;

	t2 = (((x9&x10)/x11)-x12);

	if (t2 != -32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 99721LLU;
	int16_t x14 = -1;
	static volatile uint64_t t3 = 331835304701627LLU;

	t3 = (((x13&x14)/x15)-x16);

	if (t3 != 18446744073709538318LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 1018536214LLU;
	uint64_t x20 = 1549454911LLU;
	volatile uint64_t t4 = 18LLU;

	t4 = (((x17&x18)/x19)-x20);

	if (t4 != 18446744072160096705LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	volatile int8_t x22 = -1;
	volatile int16_t x23 = INT16_MIN;
	static volatile int8_t x24 = -1;
	static volatile uint32_t t5 = 128386400U;

	t5 = (((x21&x22)/x23)-x24);

	if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MAX;
	volatile int16_t x30 = -126;
	volatile int32_t x31 = 788056;
	int64_t t6 = -1LL;

	t6 = (((x29&x30)/x31)-x32);

	if (t6 != 11703955095643LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	static volatile uint64_t x34 = 496576417174LLU;
	uint64_t x35 = 2345LLU;
	static int8_t x36 = 16;
	uint64_t t7 = 164210906596LLU;

	t7 = (((x33&x34)/x35)-x36);

	if (t7 != 211759650LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MAX;
	int8_t x39 = -1;
	static uint16_t x40 = 385U;
	static volatile int32_t t8 = -558267;

	t8 = (((x37&x38)/x39)-x40);

	if (t8 != -33152) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	uint8_t x42 = UINT8_MAX;
	static int32_t x43 = -1;
	volatile int8_t x44 = -1;
	volatile int64_t t9 = 36315854LL;

	t9 = (((x41&x42)/x43)-x44);

	if (t9 != -254LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -3793081103686987LL;
	volatile int32_t x48 = INT32_MIN;
	int64_t t10 = 464992368LL;

	t10 = (((x45&x46)/x47)-x48);

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -13651;
	int64_t x50 = 103625420233LL;
	uint8_t x52 = 0U;
	static volatile int64_t t11 = -32515LL;

	t11 = (((x49&x50)/x51)-x52);

	if (t11 != 863545089LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	int32_t x60 = -182445915;
	uint32_t t12 = 4U;

	t12 = (((x57&x58)/x59)-x60);

	if (t12 != 182445916U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -6;
	int8_t x62 = -1;
	int32_t x63 = INT32_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t13 = -3347005;

	t13 = (((x61&x62)/x63)-x64);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static volatile int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = 2431914LLU;
	uint64_t t14 = 1650LLU;

	t14 = (((x65&x66)/x67)-x68);

	if (t14 != 7585278062601LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x69 = UINT64_MAX;
	static uint32_t x70 = 22125U;
	volatile uint8_t x71 = UINT8_MAX;
	static int64_t x72 = INT64_MIN;
	uint64_t t15 = 2697771891251143615LLU;

	t15 = (((x69&x70)/x71)-x72);

	if (t15 != 9223372036854775894LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = -1;
	static int16_t x74 = -5;
	static int8_t x76 = 0;

	t16 = (((x73&x74)/x75)-x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 50707587139LL;
	volatile uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;
	int16_t x80 = INT16_MIN;
	int64_t t17 = -1994957785970588LL;

	t17 = (((x77&x78)/x79)-x80);

	if (t17 != -3462914115LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x81 = 12728U;
	int64_t x82 = 768956559016LL;
	static int8_t x84 = 0;
	uint64_t t18 = 480821434365LLU;

	t18 = (((x81&x82)/x83)-x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x90 = 49348U;
	int8_t x92 = INT8_MIN;

	t19 = (((x89&x90)/x91)-x92);

	if (t19 != 128LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x93 = INT32_MAX;
	uint32_t x94 = 3587U;
	volatile int32_t x95 = -4;
	int8_t x96 = INT8_MIN;
	static uint32_t t20 = 0U;

	t20 = (((x93&x94)/x95)-x96);

	if (t20 != 128U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	static int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MIN;

	t21 = (((x101&x102)/x103)-x104);

	if (t21 != 33026LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = -47638353702792354LL;
	int16_t x107 = 12;
	int64_t t22 = 17LL;

	t22 = (((x105&x106)/x107)-x108);

	if (t22 != -3969862821129462LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MIN;
	static volatile int64_t x111 = 2621440751841595774LL;
	int16_t x112 = INT16_MAX;
	static int64_t t23 = 20151LL;

	t23 = (((x109&x110)/x111)-x112);

	if (t23 != -32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	volatile uint16_t x119 = 5669U;
	int64_t x120 = INT64_MAX;
	static int64_t t24 = -95077115LL;

	t24 = (((x117&x118)/x119)-x120);

	if (t24 != -9223372036854396996LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -1LL;
	uint64_t x123 = UINT64_MAX;
	uint16_t x124 = UINT16_MAX;
	uint64_t t25 = 5073863989LLU;

	t25 = (((x121&x122)/x123)-x124);

	if (t25 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x126 = 1U;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 157795954391LLU;
	uint64_t t26 = 86488642LLU;

	t26 = (((x125&x126)/x127)-x128);

	if (t26 != 18446743915913597225LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MAX;
	int8_t x131 = -1;
	uint32_t x132 = 6U;
	volatile uint64_t t27 = 53006LLU;

	t27 = (((x129&x130)/x131)-x132);

	if (t27 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = 3;
	static volatile int32_t x134 = INT32_MIN;
	volatile int64_t x135 = -1LL;
	static uint16_t x136 = 28295U;
	static int64_t t28 = -21299272LL;

	t28 = (((x133&x134)/x135)-x136);

	if (t28 != -28295LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = -1;
	int64_t x138 = -1256968882228693LL;
	int32_t x139 = 14143;
	volatile int64_t x140 = INT64_MIN;
	int64_t t29 = -56LL;

	t29 = (((x137&x138)/x139)-x140);

	if (t29 != 9223371947979085910LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x143 = 64380328569150LL;
	volatile int16_t x144 = -421;
	volatile int64_t t30 = -116849902LL;

	t30 = (((x141&x142)/x143)-x144);

	if (t30 != 421LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x145 = 29U;
	static uint8_t x146 = 85U;
	uint8_t x147 = 1U;
	volatile uint32_t x148 = 5119012U;
	volatile uint32_t t31 = 1491785218U;

	t31 = (((x145&x146)/x147)-x148);

	if (t31 != 4289848305U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x149 = 17;
	uint16_t x150 = 4U;
	static int64_t x151 = INT64_MAX;
	int64_t x152 = -103701783222635LL;
	volatile int64_t t32 = 19531943LL;

	t32 = (((x149&x150)/x151)-x152);

	if (t32 != 103701783222635LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = -1;
	volatile int16_t x155 = INT16_MAX;
	uint8_t x156 = 16U;
	uint64_t t33 = 112518791LLU;

	t33 = (((x153&x154)/x155)-x156);

	if (t33 != 562967133814784LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x159 = 103913447U;
	int64_t x160 = -1LL;

	t34 = (((x157&x158)/x159)-x160);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x163 = INT32_MAX;
	volatile uint64_t t35 = 65446921337LLU;

	t35 = (((x161&x162)/x163)-x164);

	if (t35 != 8589934597LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	int64_t x166 = -1LL;
	int8_t x167 = 1;
	int16_t x168 = INT16_MIN;
	int64_t t36 = -7782054LL;

	t36 = (((x165&x166)/x167)-x168);

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = 13;
	int8_t x171 = -1;
	int32_t x172 = -1;
	int64_t t37 = -3343LL;

	t37 = (((x169&x170)/x171)-x172);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = 467247732835563028LL;
	int64_t t38 = 0LL;

	t38 = (((x173&x174)/x175)-x176);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = UINT32_MAX;
	uint32_t x178 = 1479221905U;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MIN;
	volatile uint32_t t39 = 97U;

	t39 = (((x177&x178)/x179)-x180);

	if (t39 != 32768U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x183 = INT64_MIN;
	int32_t x184 = -311299817;
	volatile int64_t t40 = -56184146030LL;

	t40 = (((x181&x182)/x183)-x184);

	if (t40 != 311299817LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = -4;
	int16_t x186 = INT16_MIN;
	static volatile int32_t x187 = INT32_MIN;
	volatile int32_t t41 = 82959;

	t41 = (((x185&x186)/x187)-x188);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = 5;
	int8_t x195 = -1;
	static int32_t x196 = INT32_MIN;
	volatile uint32_t t42 = 1077377U;

	t42 = (((x193&x194)/x195)-x196);

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 67U;
	int16_t x198 = -731;
	int32_t x199 = -1;
	int16_t x200 = INT16_MAX;
	static volatile int32_t t43 = 7965;

	t43 = (((x197&x198)/x199)-x200);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = 190;
	int64_t x203 = -8286875754LL;
	volatile int8_t x204 = 49;
	volatile int64_t t44 = 16396921166LL;

	t44 = (((x201&x202)/x203)-x204);

	if (t44 != -49LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = 53878323986LL;
	int16_t x206 = -1;
	volatile int32_t x207 = -1899400;
	int16_t x208 = INT16_MIN;
	volatile int64_t t45 = -271683699235973831LL;

	t45 = (((x205&x206)/x207)-x208);

	if (t45 != 4403LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x209 = INT32_MIN;
	static uint64_t x211 = UINT64_MAX;
	static int32_t x212 = 0;
	static uint64_t t46 = 66407254LLU;

	t46 = (((x209&x210)/x211)-x212);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	volatile int16_t x215 = 337;
	volatile int32_t t47 = -3865374;

	t47 = (((x213&x214)/x215)-x216);

	if (t47 != -6339587) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 3359LLU;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 1U;
	int64_t x220 = -1LL;
	volatile uint64_t t48 = 59182613205176LLU;

	t48 = (((x217&x218)/x219)-x220);

	if (t48 != 3329LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = INT64_MIN;
	int64_t x222 = -3135987038513177461LL;
	int16_t x223 = 912;
	static int64_t x224 = INT64_MIN;
	static int64_t t49 = -1LL;

	t49 = (((x221&x222)/x223)-x224);

	if (t49 != 9213258690323136800LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t t50 = 2909095744535LLU;

	t50 = (((x225&x226)/x227)-x228);

	if (t50 != 18446740899619812130LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x231 = 785U;
	int64_t x232 = -68468828LL;
	volatile int64_t t51 = -93LL;

	t51 = (((x229&x230)/x231)-x232);

	if (t51 != 73940082LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	uint64_t t52 = 98917061195146LLU;

	t52 = (((x233&x234)/x235)-x236);

	if (t52 != 72624976668148533LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = 32U;
	int32_t x238 = -1;
	uint16_t x239 = 87U;
	static uint64_t x240 = UINT64_MAX;
	uint64_t t53 = 438384LLU;

	t53 = (((x237&x238)/x239)-x240);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	static uint64_t x243 = 9LLU;
	volatile int64_t x244 = INT64_MIN;
	volatile uint64_t t54 = 6464012210744LLU;

	t54 = (((x241&x242)/x243)-x244);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = INT64_MIN;
	static int32_t x247 = INT32_MIN;
	uint8_t x248 = 89U;
	int64_t t55 = -873897546LL;

	t55 = (((x245&x246)/x247)-x248);

	if (t55 != 4294967207LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x250 = UINT64_MAX;
	static volatile int8_t x251 = -1;

	t56 = (((x249&x250)/x251)-x252);

	if (t56 != 78LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	int64_t x255 = 68408560329646LL;
	int32_t x256 = INT32_MIN;

	t57 = (((x253&x254)/x255)-x256);

	if (t57 != 2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -3;
	int64_t x258 = -925581562432633479LL;
	volatile int8_t x259 = -1;

	t58 = (((x257&x258)/x259)-x260);

	if (t58 != 925581562432633476LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x262 = 0;
	volatile uint64_t x263 = 808962021147LLU;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (((x261&x262)/x263)-x264);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -32;
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	int32_t t60 = 10;

	t60 = (((x269&x270)/x271)-x272);

	if (t60 != 2147418110) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x274 = 1952669954LLU;
	int64_t x275 = -1LL;
	static uint64_t x276 = 759620315001956724LLU;
	volatile uint64_t t61 = 93LLU;

	t61 = (((x273&x274)/x275)-x276);

	if (t61 != 17687123758707594892LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = -1;
	int64_t x279 = -1LL;
	int32_t x280 = -1;
	volatile int64_t t62 = 9LL;

	t62 = (((x277&x278)/x279)-x280);

	if (t62 != -4294967294LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x281 = 79460650U;
	static int32_t x282 = -211;
	static uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = -10;

	t63 = (((x281&x282)/x283)-x284);

	if (t63 != 311620U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x289 = -3;
	int16_t x290 = -1;
	static volatile int16_t x291 = INT16_MAX;
	int32_t t64 = -94346498;

	t64 = (((x289&x290)/x291)-x292);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x293 = 1U;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -1LL;
	static volatile int8_t x296 = INT8_MIN;
	uint64_t t65 = 64588913852LLU;

	t65 = (((x293&x294)/x295)-x296);

	if (t65 != 128LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x298 = 1U;
	uint8_t x299 = 2U;
	uint16_t x300 = 818U;
	int64_t t66 = 548282474292498880LL;

	t66 = (((x297&x298)/x299)-x300);

	if (t66 != -818LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	static int32_t x302 = INT32_MIN;
	int64_t x304 = -1LL;
	volatile int64_t t67 = -14LL;

	t67 = (((x301&x302)/x303)-x304);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x305 = -1;
	static uint8_t x306 = 5U;
	uint64_t x307 = 48807666LLU;
	int8_t x308 = INT8_MIN;
	uint64_t t68 = 62828562814LLU;

	t68 = (((x305&x306)/x307)-x308);

	if (t68 != 128LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 1875875071504275906LLU;
	static int32_t x311 = 67303;

	t69 = (((x309&x310)/x311)-x312);

	if (t69 != 16950884864509672085LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	static uint32_t x315 = UINT32_MAX;
	int32_t x316 = INT32_MIN;
	uint32_t t70 = 1U;

	t70 = (((x313&x314)/x315)-x316);

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = UINT64_MAX;
	static volatile int32_t x318 = INT32_MIN;
	int64_t x319 = -1LL;
	int8_t x320 = -1;
	uint64_t t71 = 1496998622LLU;

	t71 = (((x317&x318)/x319)-x320);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x321 = 2416U;
	volatile int16_t x322 = -1;
	volatile int64_t x323 = -219507440228058LL;
	int8_t x324 = INT8_MIN;
	static int64_t t72 = -137036956LL;

	t72 = (((x321&x322)/x323)-x324);

	if (t72 != 128LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 848U;
	uint32_t t73 = 12U;

	t73 = (((x325&x326)/x327)-x328);

	if (t73 != 51U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x338 = INT8_MIN;
	volatile int32_t x339 = 2;
	int32_t x340 = 144548387;
	static int32_t t74 = 25724;

	t74 = (((x337&x338)/x339)-x340);

	if (t74 != 929193373) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x342 = INT32_MAX;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 273133U;
	volatile uint32_t t75 = 1346293U;

	t75 = (((x341&x342)/x343)-x344);

	if (t75 != 4294628628U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	static volatile uint32_t x348 = 498533046U;
	static uint32_t t76 = 11523275U;

	t76 = (((x345&x346)/x347)-x348);

	if (t76 != 3796434250U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MIN;
	static volatile int16_t x350 = INT16_MIN;
	int64_t x352 = 8436584325LL;
	static volatile int64_t t77 = 7376900246407LL;

	t77 = (((x349&x350)/x351)-x352);

	if (t77 != -8436584325LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = 1;
	static volatile uint32_t x358 = 7464U;
	volatile uint32_t x359 = 16U;
	int32_t x360 = 615311610;
	static volatile uint32_t t78 = 17246U;

	t78 = (((x357&x358)/x359)-x360);

	if (t78 != 3679655686U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x362 = 1LLU;
	volatile uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	volatile uint64_t t79 = 166271375836LLU;

	t79 = (((x361&x362)/x363)-x364);

	if (t79 != 128LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x366 = 10423328;
	uint32_t x367 = UINT32_MAX;
	volatile uint16_t x368 = 12871U;
	volatile uint64_t t80 = 53866507947LLU;

	t80 = (((x365&x366)/x367)-x368);

	if (t80 != 18446744073709538745LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x370 = 21U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -447987;

	t81 = (((x369&x370)/x371)-x372);

	if (t81 != 447987) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x374 = 453131147670157LL;
	int8_t x375 = -32;
	static volatile int16_t x376 = 4;
	int64_t t82 = -183724988912488LL;

	t82 = (((x373&x374)/x375)-x376);

	if (t82 != -14160348364696LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x377 = 137050U;
	uint32_t x378 = 144U;
	static int16_t x379 = -1;
	static uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t83 = 328276U;

	t83 = (((x377&x378)/x379)-x380);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = 1;
	int8_t x386 = INT8_MAX;
	int64_t x387 = -52433808948LL;
	int16_t x388 = INT16_MIN;
	static int64_t t84 = -747293730LL;

	t84 = (((x385&x386)/x387)-x388);

	if (t84 != 32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 5790058LLU;
	uint32_t x390 = UINT32_MAX;
	uint64_t x392 = 10369992690700LLU;
	uint64_t t85 = 65428LLU;

	t85 = (((x389&x390)/x391)-x392);

	if (t85 != 18446733703716906507LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x394 = INT32_MIN;
	volatile int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MAX;
	volatile int64_t t86 = -387389057949LL;

	t86 = (((x393&x394)/x395)-x396);

	if (t86 != -281474976677887LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = -1LL;
	int32_t x400 = INT32_MAX;
	volatile int64_t t87 = -833LL;

	t87 = (((x397&x398)/x399)-x400);

	if (t87 != -2147483774LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 209U;
	uint64_t x402 = UINT64_MAX;
	static volatile int16_t x403 = INT16_MIN;
	volatile int8_t x404 = INT8_MIN;
	static volatile uint64_t t88 = 984092187968895LLU;

	t88 = (((x401&x402)/x403)-x404);

	if (t88 != 128LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x405 = 56;
	uint32_t x406 = 7412U;
	int8_t x407 = 43;
	int32_t x408 = INT32_MAX;
	volatile uint32_t t89 = 308911U;

	t89 = (((x405&x406)/x407)-x408);

	if (t89 != 2147483650U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = -5561797;
	volatile int16_t x410 = INT16_MAX;

	t90 = (((x409&x410)/x411)-x412);

	if (t90 != 4382) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x415 = 121;
	int8_t x416 = 6;
	uint32_t t91 = 25U;

	t91 = (((x413&x414)/x415)-x416);

	if (t91 != 12356019U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x421 = INT8_MAX;
	uint32_t x423 = UINT32_MAX;
	static int32_t x424 = -1;
	volatile uint32_t t92 = 15067U;

	t92 = (((x421&x422)/x423)-x424);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -15;
	uint16_t x427 = 228U;
	volatile uint32_t t93 = 24U;

	t93 = (((x425&x426)/x427)-x428);

	if (t93 != 4294967043U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	static int32_t x430 = INT32_MIN;
	uint16_t x432 = 0U;
	uint64_t t94 = 61LLU;

	t94 = (((x429&x430)/x431)-x432);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x434 = -1;
	static volatile int8_t x435 = INT8_MAX;
	static int32_t x436 = -1;
	volatile uint32_t t95 = 1U;

	t95 = (((x433&x434)/x435)-x436);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = UINT32_MAX;
	static int8_t x438 = 9;
	int16_t x440 = INT16_MIN;
	uint32_t t96 = 13U;

	t96 = (((x437&x438)/x439)-x440);

	if (t96 != 32768U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x442 = UINT32_MAX;
	static int64_t x443 = INT64_MAX;
	static int16_t x444 = INT16_MIN;
	int64_t t97 = -58695890772LL;

	t97 = (((x441&x442)/x443)-x444);

	if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = -1;
	int16_t x451 = -1;
	int8_t x452 = INT8_MIN;
	int32_t t98 = 60748644;

	t98 = (((x449&x450)/x451)-x452);

	if (t98 != -2147483519) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -5573400LL;
	volatile int32_t x454 = INT32_MIN;
	int16_t x455 = 3;
	int16_t x456 = INT16_MIN;
	static int64_t t99 = -4622563LL;

	t99 = (((x453&x454)/x455)-x456);

	if (t99 != -715795114LL) { NG(); } else { ; }
	
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

