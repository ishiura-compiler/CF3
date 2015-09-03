#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
volatile uint64_t x4 = 221419534LLU;
static volatile uint64_t x6 = 279180152320LLU;
int16_t x11 = 0;
static int32_t t2 = -533;
int32_t x22 = -472134;
static uint16_t x24 = 5375U;
int16_t x27 = INT16_MIN;
int32_t x30 = INT32_MAX;
int8_t x31 = INT8_MIN;
volatile int32_t t7 = 19097;
volatile int64_t x35 = INT64_MIN;
int32_t t8 = 779914447;
static int32_t t9 = 14;
static int64_t x44 = -1LL;
uint8_t x52 = 1U;
static int64_t x58 = INT64_MIN;
volatile int64_t x60 = -1LL;
int32_t x65 = -1;
volatile int32_t t16 = -1121071;
uint8_t x76 = UINT8_MAX;
static int8_t x79 = -1;
int32_t t19 = 6156492;
int8_t x84 = INT8_MAX;
volatile int64_t t20 = -191301LL;
int16_t x90 = -7;
int32_t t21 = 2858609;
uint16_t x98 = 12597U;
int64_t t23 = 3016577012139544091LL;
volatile uint8_t x117 = 3U;
volatile int32_t t27 = 3923456;
int16_t x121 = INT16_MIN;
int32_t t28 = 51520257;
int32_t t29 = -45405;
int16_t x130 = INT16_MIN;
static volatile int32_t t30 = -4577;
uint16_t x143 = 937U;
uint64_t x144 = 26897568LLU;
volatile uint32_t t34 = 3U;
static uint16_t x154 = 503U;
static int8_t x155 = 0;
volatile int64_t x157 = INT64_MAX;
int32_t x159 = 3208820;
int64_t x165 = -1LL;
int64_t x168 = 30720LL;
int64_t x170 = -1190303LL;
volatile int32_t t40 = -735752501;
int32_t t42 = -12591;
static volatile int64_t t44 = -23063172264LL;
int32_t x197 = INT32_MIN;
static volatile int32_t t45 = -85;
int16_t x203 = -1;
int8_t x206 = 54;
int64_t x217 = INT64_MAX;
int64_t x228 = 1LL;
volatile uint16_t x230 = UINT16_MAX;
static uint16_t x231 = UINT16_MAX;
int32_t t53 = -775;
int64_t x234 = -125443591889LL;
uint8_t x236 = 108U;
int32_t t55 = 215;
int16_t x243 = INT16_MIN;
int16_t x245 = INT16_MAX;
int32_t x248 = -198591476;
static int16_t x251 = -73;
int32_t x252 = 61;
uint16_t x260 = 62U;
int64_t x264 = 10015167758LL;
uint64_t x265 = UINT64_MAX;
uint16_t x273 = UINT16_MAX;
int16_t x277 = INT16_MAX;
int16_t x279 = 14812;
int32_t x292 = -815;
uint16_t x293 = 8292U;
int32_t x294 = INT32_MIN;
volatile int32_t t67 = 0;
uint64_t x302 = 7072LLU;
int16_t x303 = INT16_MIN;
volatile int64_t x305 = INT64_MIN;
volatile int32_t t70 = 14;
static int8_t x313 = INT8_MIN;
volatile uint16_t x319 = 2025U;
uint8_t x326 = 2U;
static volatile uint32_t t74 = 9U;
int64_t x332 = -1998527037876382LL;
int8_t x339 = -1;
int32_t x346 = -2;
static int32_t t78 = 155355;
int32_t x350 = INT32_MIN;
uint64_t x356 = 52595432200018466LLU;
volatile int8_t x362 = -4;
uint64_t x368 = 1639024LLU;
int32_t t83 = -11;
int16_t x377 = 0;
uint16_t x391 = 2981U;
uint8_t x393 = 3U;
static int16_t x394 = INT16_MIN;
int16_t x404 = INT16_MAX;
uint16_t x406 = 18929U;
static volatile int32_t x420 = INT32_MIN;
volatile int32_t t91 = 13937465;
int16_t x426 = -1;
static int32_t x427 = INT32_MAX;
int32_t t93 = -2059516;
int32_t x429 = -1;
int64_t x437 = INT64_MIN;
int8_t x440 = INT8_MIN;
volatile int64_t t96 = 288116955350847146LL;
volatile int32_t t97 = -528336605;
int32_t x448 = INT32_MAX;
int32_t x450 = INT32_MAX;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	uint64_t x3 = UINT64_MAX;
	static uint32_t t0 = 1227U;

	t0 = (x1&((x2+x3)<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x7 = 29U;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = -208693;

	t1 = (x5&((x6+x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -3374;
	uint64_t x10 = 274078676820887879LLU;
	int16_t x12 = INT16_MAX;

	t2 = (x9&((x10+x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile int8_t x14 = -1;
	static int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 1;

	t3 = (x13&((x14+x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 0U;
	uint64_t x18 = 4252612409LLU;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MAX;
	volatile uint32_t t4 = 2814995U;

	t4 = (x17&((x18+x19)<x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = -8693;

	t5 = (x21&((x22+x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static uint16_t x26 = 3455U;
	int32_t x28 = -54;
	uint64_t t6 = 481494220LLU;

	t6 = (x25&((x26+x27)<x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x32 = 3U;

	t7 = (x29&((x30+x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 94764U;
	uint8_t x36 = UINT8_MAX;

	t8 = (x33&((x34+x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x38 = 51;
	uint16_t x39 = UINT16_MAX;
	volatile int32_t x40 = INT32_MIN;

	t9 = (x37&((x38+x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	static uint32_t x42 = UINT32_MAX;
	uint32_t x43 = 13U;
	int32_t t10 = 237661683;

	t10 = (x41&((x42+x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = 358U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = -48;
	volatile int32_t t11 = 374312;

	t11 = (x45&((x46+x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MAX;
	int16_t x50 = INT16_MIN;
	static volatile uint64_t x51 = UINT64_MAX;
	volatile int64_t t12 = 740682LL;

	t12 = (x49&((x50+x51)<x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 48U;
	int8_t x54 = 1;
	static int8_t x55 = -1;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -2650413;

	t13 = (x53&((x54+x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	int64_t t14 = -101793LL;

	t14 = (x57&((x58+x59)<x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	volatile uint64_t x63 = 15260955958LLU;
	int64_t x64 = 75LL;
	static volatile int64_t t15 = -92790789244LL;

	t15 = (x61&((x62+x63)<x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = 7139008;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MAX;

	t16 = (x65&((x66+x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -124;
	uint32_t x70 = 12517795U;
	uint32_t x71 = UINT32_MAX;
	volatile int64_t x72 = INT64_MAX;
	int32_t t17 = -8;

	t17 = (x69&((x70+x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	uint16_t x74 = UINT16_MAX;
	volatile int16_t x75 = INT16_MAX;
	volatile int32_t t18 = -925171;

	t18 = (x73&((x74+x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	volatile uint32_t x78 = 0U;
	static int8_t x80 = -1;

	t19 = (x77&((x78+x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint8_t x82 = 3U;
	static int64_t x83 = -1LL;

	t20 = (x81&((x82+x83)<x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 0U;
	static int8_t x91 = -2;
	int16_t x92 = INT16_MIN;

	t21 = (x89&((x90+x91)<x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MAX;
	volatile int32_t x96 = INT32_MIN;
	volatile int64_t t22 = 6628LL;

	t22 = (x93&((x94+x95)<x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	static int8_t x99 = -1;
	int16_t x100 = INT16_MIN;

	t23 = (x97&((x98+x99)<x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = UINT8_MAX;
	volatile uint32_t x102 = 7684U;
	int8_t x103 = -1;
	uint64_t x104 = 1001550947LLU;
	int32_t t24 = 243900607;

	t24 = (x101&((x102+x103)<x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = 5;
	static uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 6080326822LLU;
	static volatile int32_t t25 = 758;

	t25 = (x105&((x106+x107)<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 1313163394U;
	volatile int32_t x110 = -1;
	int8_t x111 = -1;
	volatile uint8_t x112 = 6U;
	volatile uint32_t t26 = 1168U;

	t26 = (x109&((x110+x111)<x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x118 = 97U;
	static int32_t x119 = INT32_MIN;
	int16_t x120 = 309;

	t27 = (x117&((x118+x119)<x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x122 = 28U;
	int8_t x123 = -5;
	uint16_t x124 = 29066U;

	t28 = (x121&((x122+x123)<x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = 14269;
	static int8_t x127 = -1;
	volatile int32_t x128 = INT32_MIN;

	t29 = (x125&((x126+x127)<x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 262117;
	static int8_t x131 = -1;
	volatile uint32_t x132 = 19740967U;

	t30 = (x129&((x130+x131)<x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x133 = UINT8_MAX;
	volatile uint64_t x134 = 96LLU;
	int64_t x135 = -65201942077912LL;
	uint16_t x136 = 108U;
	static int32_t t31 = -165458;

	t31 = (x133&((x134+x135)<x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -41;
	volatile uint16_t x139 = 63U;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t32 = 1LLU;

	t32 = (x137&((x138+x139)<x140));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 204U;
	volatile int8_t x142 = -1;
	uint32_t t33 = 750U;

	t33 = (x141&((x142+x143)<x144));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	int8_t x147 = 32;
	int16_t x148 = INT16_MIN;

	t34 = (x145&((x146+x147)<x148));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 7633697U;
	int8_t x150 = -1;
	static int32_t x151 = INT32_MAX;
	int8_t x152 = -1;
	volatile uint32_t t35 = 226U;

	t35 = (x149&((x150+x151)<x152));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int16_t x156 = INT16_MIN;
	int32_t t36 = 1821717;

	t36 = (x153&((x154+x155)<x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = UINT64_MAX;
	volatile int16_t x160 = -1;
	volatile int64_t t37 = -15417975201046516LL;

	t37 = (x157&((x158+x159)<x160));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	uint32_t x162 = UINT32_MAX;
	static int16_t x163 = INT16_MIN;
	uint8_t x164 = 1U;
	volatile int64_t t38 = -151131LL;

	t38 = (x161&((x162+x163)<x164));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MAX;
	static volatile int64_t t39 = 22771076972LL;

	t39 = (x165&((x166+x167)<x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	uint16_t x171 = 2273U;
	static uint8_t x172 = 18U;

	t40 = (x169&((x170+x171)<x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x173 = UINT64_MAX;
	int16_t x174 = INT16_MIN;
	static int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	uint64_t t41 = 9LLU;

	t41 = (x173&((x174+x175)<x176));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile uint8_t x186 = 31U;
	volatile int32_t x187 = -236133;
	uint64_t x188 = 37643LLU;

	t42 = (x185&((x186+x187)<x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 629U;
	int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	int8_t x192 = -1;
	volatile int32_t t43 = 2;

	t43 = (x189&((x190+x191)<x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 0U;
	volatile uint32_t x196 = 2644727U;

	t44 = (x193&((x194+x195)<x196));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x198 = 39LLU;
	int64_t x199 = INT64_MAX;
	volatile uint32_t x200 = 845758362U;

	t45 = (x197&((x198+x199)<x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	uint16_t x202 = 7U;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t46 = -815533;

	t46 = (x201&((x202+x203)<x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	static volatile uint64_t t47 = 59604442LLU;

	t47 = (x205&((x206+x207)<x208));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = UINT16_MAX;
	uint8_t x210 = 1U;
	uint8_t x211 = 10U;
	uint32_t x212 = 787582U;
	volatile int32_t t48 = 89605737;

	t48 = (x209&((x210+x211)<x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -285491977910LL;
	uint32_t x214 = 237924529U;
	uint16_t x215 = 50U;
	int8_t x216 = 0;
	int64_t t49 = -89270333341646833LL;

	t49 = (x213&((x214+x215)<x216));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x218 = 462U;
	uint8_t x219 = 16U;
	int64_t x220 = INT64_MAX;
	int64_t t50 = -1567441406578LL;

	t50 = (x217&((x218+x219)<x220));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 2769066660476969LLU;
	int32_t t51 = -186672;

	t51 = (x221&((x222+x223)<x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = -2;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = UINT16_MAX;
	volatile int32_t t52 = 59899;

	t52 = (x225&((x226+x227)<x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = 1U;
	uint16_t x232 = UINT16_MAX;

	t53 = (x229&((x230+x231)<x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	uint32_t x235 = 3683555U;
	volatile int64_t t54 = 16049170871LL;

	t54 = (x233&((x234+x235)<x236));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = 0U;
	int8_t x238 = INT8_MAX;
	int64_t x239 = 533746473009LL;
	uint32_t x240 = 13794411U;

	t55 = (x237&((x238+x239)<x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -14;
	static int32_t x242 = INT32_MAX;
	volatile uint32_t x244 = 13612U;
	int32_t t56 = 4214781;

	t56 = (x241&((x242+x243)<x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 1387022315U;
	volatile int32_t t57 = 145416855;

	t57 = (x245&((x246+x247)<x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = -1LL;
	int8_t x250 = INT8_MAX;
	volatile int64_t t58 = -366155002541551863LL;

	t58 = (x249&((x250+x251)<x252));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x257 = -2403774567414860380LL;
	int8_t x258 = -27;
	int8_t x259 = 3;
	int64_t t59 = 7713810LL;

	t59 = (x257&((x258+x259)<x260));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	int16_t x262 = INT16_MAX;
	uint64_t x263 = 161857366620814LLU;
	volatile int32_t t60 = -248272;

	t60 = (x261&((x262+x263)<x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x266 = 955923991LLU;
	uint8_t x267 = 1U;
	volatile int16_t x268 = INT16_MIN;
	volatile uint64_t t61 = 2381751189907093096LLU;

	t61 = (x265&((x266+x267)<x268));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x274 = 50331696728LL;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = 15238;
	static int32_t t62 = -3646;

	t62 = (x273&((x274+x275)<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x278 = 38673005U;
	volatile int64_t x280 = 52434LL;
	int32_t t63 = 9;

	t63 = (x277&((x278+x279)<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = 1U;
	uint8_t x282 = 14U;
	int8_t x283 = INT8_MAX;
	static int8_t x284 = INT8_MAX;
	int32_t t64 = -640181444;

	t64 = (x281&((x282+x283)<x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x285 = UINT16_MAX;
	uint32_t x286 = 489U;
	int64_t x287 = 97LL;
	volatile uint16_t x288 = UINT16_MAX;
	int32_t t65 = 2170029;

	t65 = (x285&((x286+x287)<x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MAX;
	static int32_t x290 = 1927;
	static uint32_t x291 = 7U;
	volatile int32_t t66 = -85938873;

	t66 = (x289&((x290+x291)<x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x295 = INT16_MAX;
	volatile uint64_t x296 = 20226407366LLU;

	t67 = (x293&((x294+x295)<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 1U;
	static uint64_t x304 = UINT64_MAX;
	volatile int32_t t68 = -898637;

	t68 = (x301&((x302+x303)<x304));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x306 = 1425058274U;
	int32_t x307 = 83598;
	volatile int16_t x308 = INT16_MIN;
	volatile int64_t t69 = -21593LL;

	t69 = (x305&((x306+x307)<x308));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 0U;
	uint64_t x310 = UINT64_MAX;
	volatile uint8_t x311 = 0U;
	int8_t x312 = 6;

	t70 = (x309&((x310+x311)<x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x314 = -15550059LL;
	int16_t x315 = -4840;
	int32_t x316 = INT32_MAX;
	volatile int32_t t71 = 561464;

	t71 = (x313&((x314+x315)<x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -1;
	int16_t x318 = -71;
	static volatile int16_t x320 = -55;
	static int32_t t72 = 978880369;

	t72 = (x317&((x318+x319)<x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x321 = 9;
	static int8_t x322 = INT8_MIN;
	uint64_t x323 = 2620287LLU;
	int16_t x324 = -1;
	int32_t t73 = 2;

	t73 = (x321&((x322+x323)<x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x325 = 4400305U;
	uint32_t x327 = 521231U;
	int16_t x328 = INT16_MAX;

	t74 = (x325&((x326+x327)<x328));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = 1769283LLU;
	int16_t x330 = -1;
	volatile uint8_t x331 = 5U;
	volatile uint64_t t75 = 274272158LLU;

	t75 = (x329&((x330+x331)<x332));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = -390;
	int32_t x338 = INT32_MAX;
	static uint8_t x340 = 59U;
	int32_t t76 = -195914764;

	t76 = (x337&((x338+x339)<x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = INT64_MIN;
	int64_t x343 = 25353775187881LL;
	int8_t x344 = -1;
	uint64_t t77 = 15898LLU;

	t77 = (x341&((x342+x343)<x344));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MAX;
	volatile uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 45U;

	t78 = (x345&((x346+x347)<x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = INT64_MIN;
	int16_t x351 = INT16_MAX;
	int64_t x352 = -62772108169LL;
	int64_t t79 = 11182656277LL;

	t79 = (x349&((x350+x351)<x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = 0;
	static int16_t x355 = -77;
	int32_t t80 = 879004644;

	t80 = (x353&((x354+x355)<x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x357 = -1;
	static volatile int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MAX;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t81 = 10655;

	t81 = (x357&((x358+x359)<x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x361 = UINT16_MAX;
	int32_t x363 = -58890;
	volatile uint64_t x364 = 249510571388LLU;
	int32_t t82 = -62317869;

	t82 = (x361&((x362+x363)<x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = UINT8_MAX;
	volatile uint64_t x366 = 44535642204LLU;
	int8_t x367 = -1;

	t83 = (x365&((x366+x367)<x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 4U;
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	int32_t x372 = -7161;
	static volatile int32_t t84 = -1;

	t84 = (x369&((x370+x371)<x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x378 = 176U;
	int16_t x379 = 15;
	int64_t x380 = -243199575LL;
	volatile int32_t t85 = -109519418;

	t85 = (x377&((x378+x379)<x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile int16_t x390 = 2;
	volatile int64_t x392 = INT64_MAX;
	volatile int32_t t86 = 74;

	t86 = (x389&((x390+x391)<x392));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x395 = 1681251616U;
	int8_t x396 = -1;
	static volatile int32_t t87 = -920188;

	t87 = (x393&((x394+x395)<x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = INT64_MAX;
	int8_t x402 = -1;
	int16_t x403 = -2026;
	int64_t t88 = 10979LL;

	t88 = (x401&((x402+x403)<x404));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = 1468;
	uint64_t x407 = 1199215LLU;
	static volatile int32_t x408 = -1;
	int32_t t89 = 11;

	t89 = (x405&((x406+x407)<x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MIN;
	volatile int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t90 = 3;

	t90 = (x409&((x410+x411)<x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x417 = INT8_MIN;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MAX;

	t91 = (x417&((x418+x419)<x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	int32_t x423 = -29386;
	int8_t x424 = -1;
	volatile int64_t t92 = -568725272255172105LL;

	t92 = (x421&((x422+x423)<x424));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MIN;
	static volatile int32_t x428 = -7932;

	t93 = (x425&((x426+x427)<x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x430 = INT8_MIN;
	uint64_t x431 = 2158179473042047LLU;
	int64_t x432 = INT64_MIN;
	int32_t t94 = 15538452;

	t94 = (x429&((x430+x431)<x432));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = INT32_MAX;
	int32_t x434 = INT32_MAX;
	int64_t x435 = -1LL;
	static int16_t x436 = -1;
	volatile int32_t t95 = -3;

	t95 = (x433&((x434+x435)<x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x438 = -1;
	volatile int8_t x439 = 1;

	t96 = (x437&((x438+x439)<x440));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = 74U;
	volatile int16_t x442 = -1;
	int16_t x443 = 70;
	int16_t x444 = INT16_MAX;

	t97 = (x441&((x442+x443)<x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x445 = 26U;
	static volatile int32_t x446 = INT32_MIN;
	uint64_t x447 = 115438746LLU;
	int32_t t98 = 11;

	t98 = (x445&((x446+x447)<x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = -336LL;
	int32_t x451 = -1;
	int64_t x452 = -1LL;
	int64_t t99 = 222986665794LL;

	t99 = (x449&((x450+x451)<x452));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

