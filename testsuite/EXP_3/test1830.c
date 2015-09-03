#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int64_t x5 = 163198LL;
int32_t t1 = 46179234;
int32_t t2 = 89;
volatile int32_t x16 = INT32_MAX;
int8_t x21 = 1;
uint64_t x22 = 652298373249935LLU;
static int32_t t5 = -386248;
static int32_t x28 = 42328;
int64_t x29 = INT64_MIN;
int32_t x30 = 17872090;
static int16_t x39 = INT16_MIN;
volatile int32_t t9 = -1;
int32_t t10 = -15;
static volatile int8_t x63 = INT8_MIN;
uint64_t x83 = 6407930LLU;
volatile int16_t x87 = 13;
int64_t x90 = INT64_MIN;
volatile uint64_t x94 = 235217063942504LLU;
int32_t t24 = 30950447;
static int16_t x101 = -1;
uint64_t x104 = UINT64_MAX;
int32_t x123 = INT32_MAX;
int64_t x128 = INT64_MAX;
static int16_t x133 = INT16_MIN;
static int16_t x138 = -27;
int64_t x140 = INT64_MIN;
int64_t x148 = INT64_MIN;
volatile int8_t x155 = INT8_MAX;
uint8_t x156 = 10U;
volatile int16_t x165 = 656;
static int32_t x182 = 48;
int16_t x183 = -1;
static int16_t x189 = INT16_MIN;
int64_t x191 = INT64_MAX;
uint64_t x193 = UINT64_MAX;
uint64_t x194 = 10LLU;
volatile int32_t t51 = -11;
int8_t x212 = 33;
volatile int32_t t52 = 14769;
int32_t x215 = INT32_MIN;
int32_t t57 = -4077;
uint8_t x235 = UINT8_MAX;
uint64_t x236 = 163326LLU;
int32_t x237 = INT32_MIN;
volatile int32_t t60 = 7;
volatile uint16_t x245 = 1629U;
int32_t x246 = -1;
static volatile int8_t x250 = 8;
static int8_t x254 = -35;
volatile int16_t x255 = INT16_MAX;
uint16_t x261 = 1U;
int64_t x266 = INT64_MAX;
int64_t x275 = INT64_MIN;
volatile int32_t t68 = 1256358;
int64_t x277 = INT64_MIN;
int64_t x284 = INT64_MIN;
static uint32_t x290 = 318U;
int16_t x299 = -58;
static int64_t x300 = INT64_MIN;
int16_t x303 = -1;
static int16_t x307 = INT16_MIN;
int8_t x308 = -1;
static volatile uint16_t x310 = UINT16_MAX;
volatile int32_t t77 = 42500;
int32_t x315 = -1;
static int64_t x320 = INT64_MAX;
volatile int32_t t84 = 3;
int16_t x348 = INT16_MAX;
int64_t x349 = INT64_MIN;
int32_t x357 = INT32_MIN;
int16_t x363 = INT16_MIN;
int8_t x364 = INT8_MAX;
uint16_t x368 = 18970U;
uint16_t x370 = 89U;
uint8_t x371 = 26U;
int64_t x380 = -1LL;
static volatile int32_t t94 = -4903;
volatile uint32_t x383 = 5584958U;
int32_t t95 = -5369349;
volatile int32_t x387 = INT32_MIN;
static volatile uint32_t x397 = UINT32_MAX;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	volatile int32_t x3 = INT32_MIN;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -28;

	t0 = ((x1&x2)<=(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int64_t x7 = -5905LL;
	uint32_t x8 = 10737U;

	t1 = ((x5&x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 5U;
	int32_t x10 = INT32_MIN;
	int8_t x11 = -1;
	uint64_t x12 = UINT64_MAX;

	t2 = ((x9&x10)<=(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	volatile uint32_t x14 = 98359U;
	int64_t x15 = INT64_MIN;
	static volatile int32_t t3 = 21885;

	t3 = ((x13&x14)<=(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	static int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 52349;

	t4 = ((x17&x18)<=(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = 1468;
	uint8_t x24 = UINT8_MAX;

	t5 = ((x21&x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	int8_t x26 = 6;
	volatile int8_t x27 = INT8_MIN;
	volatile int32_t t6 = 1609;

	t6 = ((x25&x26)<=(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 7637U;
	int8_t x32 = -1;
	int32_t t7 = 3869050;

	t7 = ((x29&x30)<=(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = 28;
	int16_t x35 = INT16_MIN;
	int16_t x36 = -1;
	int32_t t8 = 875;

	t8 = ((x33&x34)<=(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -5238;
	static uint8_t x38 = 5U;
	static int64_t x40 = -123839711LL;

	t9 = ((x37&x38)<=(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -927182756;
	int64_t x42 = INT64_MIN;
	int16_t x43 = -154;
	static uint32_t x44 = 335253U;

	t10 = ((x41&x42)<=(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 2;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MAX;
	static uint8_t x48 = 2U;
	static volatile int32_t t11 = -257;

	t11 = ((x45&x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	volatile uint64_t x50 = 1246114046LLU;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t x52 = 203;
	volatile int32_t t12 = -10;

	t12 = ((x49&x50)<=(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -161962775LL;
	int32_t x54 = -201;
	int8_t x55 = 9;
	int16_t x56 = INT16_MIN;
	static int32_t t13 = 209734;

	t13 = ((x53&x54)<=(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 0LLU;
	int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = 440796U;
	volatile int32_t t14 = -1973;

	t14 = ((x57&x58)<=(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 1;
	int16_t x62 = -1;
	int64_t x64 = -1LL;
	static int32_t t15 = -636;

	t15 = ((x61&x62)<=(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	volatile int8_t x68 = 0;
	volatile int32_t t16 = -32;

	t16 = ((x65&x66)<=(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int64_t x72 = -1LL;
	volatile int32_t t17 = 56;

	t17 = ((x69&x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = -1;
	volatile int8_t x76 = 1;
	int32_t t18 = 1019;

	t18 = ((x73&x74)<=(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	int16_t x78 = INT16_MAX;
	int8_t x79 = 1;
	int32_t x80 = -164;
	volatile int32_t t19 = 636;

	t19 = ((x77&x78)<=(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int64_t x82 = 136853625071LL;
	volatile int64_t x84 = INT64_MAX;
	int32_t t20 = 97;

	t20 = ((x81&x82)<=(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 186297459141LL;
	volatile int64_t x86 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 38;

	t21 = ((x85&x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 0;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -126950;

	t22 = ((x89&x90)<=(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 1120586717880980030LL;
	int32_t x95 = INT32_MAX;
	volatile int16_t x96 = 0;
	int32_t t23 = 10812523;

	t23 = ((x93&x94)<=(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	uint64_t x98 = 1LLU;
	int8_t x99 = INT8_MIN;
	int8_t x100 = 22;

	t24 = ((x97&x98)<=(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	int8_t x103 = -28;
	static int32_t t25 = 6965781;

	t25 = ((x101&x102)<=(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static int32_t x106 = 31;
	int8_t x107 = 1;
	volatile int8_t x108 = INT8_MAX;
	static volatile int32_t t26 = -13;

	t26 = ((x105&x106)<=(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int16_t x110 = -1;
	static int8_t x111 = -1;
	volatile int32_t x112 = INT32_MAX;
	static int32_t t27 = 230467245;

	t27 = ((x109&x110)<=(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 16;
	volatile uint64_t x114 = 71235LLU;
	uint32_t x115 = 61903600U;
	int32_t x116 = -1;
	static volatile int32_t t28 = 3076535;

	t28 = ((x113&x114)<=(x115&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	int32_t x119 = INT32_MIN;
	int16_t x120 = -29;
	volatile int32_t t29 = -168;

	t29 = ((x117&x118)<=(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = 512267833;
	int16_t x122 = 3947;
	static volatile int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 94;

	t30 = ((x121&x122)<=(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 1;
	int32_t x126 = INT32_MIN;
	static uint8_t x127 = 6U;
	int32_t t31 = 0;

	t31 = ((x125&x126)<=(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 4895744543571996923LLU;
	int8_t x130 = 18;
	static int8_t x131 = -1;
	uint32_t x132 = 1647U;
	volatile int32_t t32 = 7514166;

	t32 = ((x129&x130)<=(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MAX;
	uint64_t x135 = 36927765013LLU;
	uint32_t x136 = 20591044U;
	int32_t t33 = -23108;

	t33 = ((x133&x134)<=(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 189U;
	static volatile uint64_t x139 = 28087609LLU;
	int32_t t34 = -1;

	t34 = ((x137&x138)<=(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	volatile int32_t x142 = INT32_MAX;
	volatile int8_t x143 = -1;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t35 = 123;

	t35 = ((x141&x142)<=(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 3859U;
	int32_t x146 = INT32_MAX;
	int8_t x147 = -1;
	volatile int32_t t36 = -72140897;

	t36 = ((x145&x146)<=(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 33201895U;
	int32_t x150 = INT32_MIN;
	volatile uint16_t x151 = 1503U;
	int64_t x152 = 824047692LL;
	int32_t t37 = -40325951;

	t37 = ((x149&x150)<=(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 26U;
	uint8_t x154 = 55U;
	static int32_t t38 = 0;

	t38 = ((x153&x154)<=(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 1U;
	int32_t x159 = INT32_MIN;
	static volatile uint8_t x160 = UINT8_MAX;
	static int32_t t39 = -243096;

	t39 = ((x157&x158)<=(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = 164000;

	t40 = ((x161&x162)<=(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x166 = 964814375U;
	int64_t x167 = 541092754024871LL;
	static uint8_t x168 = 73U;
	int32_t t41 = 24;

	t41 = ((x165&x166)<=(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	uint64_t x170 = 64LLU;
	uint32_t x171 = 26U;
	int64_t x172 = -1LL;
	volatile int32_t t42 = 910889;

	t42 = ((x169&x170)<=(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	volatile uint64_t x174 = 3LLU;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -1LL;
	int32_t t43 = -4;

	t43 = ((x173&x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 8530063643121028LLU;
	uint16_t x178 = 3480U;
	int16_t x179 = INT16_MAX;
	int32_t x180 = -1042;
	int32_t t44 = 340805796;

	t44 = ((x177&x178)<=(x179&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 0U;
	int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -475;

	t45 = ((x181&x182)<=(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 1U;
	volatile int32_t x186 = INT32_MIN;
	volatile int16_t x187 = 1;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 605249083;

	t46 = ((x185&x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = 15123;
	static uint32_t x192 = 11176U;
	int32_t t47 = 416;

	t47 = ((x189&x190)<=(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x195 = -1;
	uint16_t x196 = 1141U;
	volatile int32_t t48 = 62638;

	t48 = ((x193&x194)<=(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	volatile uint64_t x198 = 2057928235404715107LLU;
	volatile uint64_t x199 = 4690190722641LLU;
	volatile int32_t x200 = INT32_MIN;
	static volatile int32_t t49 = 15568;

	t49 = ((x197&x198)<=(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -171;
	static int64_t x202 = INT64_MAX;
	volatile int64_t x203 = INT64_MAX;
	static uint64_t x204 = UINT64_MAX;
	static int32_t t50 = -1054213759;

	t50 = ((x201&x202)<=(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -4297;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	static volatile int8_t x208 = INT8_MIN;

	t51 = ((x205&x206)<=(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = 1189260824LLU;
	int32_t x211 = -2;

	t52 = ((x209&x210)<=(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	static int64_t x214 = INT64_MIN;
	int8_t x216 = 1;
	int32_t t53 = -4775;

	t53 = ((x213&x214)<=(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	volatile int16_t x218 = INT16_MIN;
	static uint64_t x219 = UINT64_MAX;
	volatile int32_t x220 = INT32_MAX;
	int32_t t54 = 169;

	t54 = ((x217&x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -26916;
	static volatile uint16_t x222 = UINT16_MAX;
	int32_t x223 = INT32_MAX;
	uint8_t x224 = 3U;
	int32_t t55 = -1960;

	t55 = ((x221&x222)<=(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 462677511721293803LLU;
	static uint8_t x226 = UINT8_MAX;
	int32_t x227 = -111047;
	uint8_t x228 = 2U;
	volatile int32_t t56 = 137402121;

	t56 = ((x225&x226)<=(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 1;
	static uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = 1546;
	int64_t x232 = INT64_MIN;

	t57 = ((x229&x230)<=(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 3451;
	static uint64_t x234 = 7137251045LLU;
	volatile int32_t t58 = -7;

	t58 = ((x233&x234)<=(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 1872U;
	volatile int64_t x239 = 1268130324576LL;
	volatile int16_t x240 = 241;
	int32_t t59 = -4676073;

	t59 = ((x237&x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	static int64_t x242 = -24196027290290LL;
	int16_t x243 = INT16_MAX;
	static int64_t x244 = INT64_MIN;

	t60 = ((x241&x242)<=(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x247 = -1;
	uint64_t x248 = 40LLU;
	int32_t t61 = 15;

	t61 = ((x245&x246)<=(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 53U;
	volatile int8_t x251 = -1;
	int32_t x252 = INT32_MIN;
	static int32_t t62 = -2667;

	t62 = ((x249&x250)<=(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	uint32_t x256 = 1251250334U;
	static volatile int32_t t63 = -597;

	t63 = ((x253&x254)<=(x255&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	static int8_t x258 = INT8_MIN;
	static volatile int64_t x259 = -6143915589LL;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 194519419;

	t64 = ((x257&x258)<=(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -1LL;
	volatile uint16_t x263 = 23U;
	uint8_t x264 = 3U;
	static volatile int32_t t65 = -67124;

	t65 = ((x261&x262)<=(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = UINT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 668;

	t66 = ((x265&x266)<=(x267&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x269 = 15513U;
	static int32_t x270 = -1;
	int16_t x271 = 198;
	int32_t x272 = 3;
	int32_t t67 = 2934184;

	t67 = ((x269&x270)<=(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	static uint8_t x276 = 19U;

	t68 = ((x273&x274)<=(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = 4356U;
	uint64_t x279 = 158172961436LLU;
	int32_t x280 = -1015086;
	volatile int32_t t69 = 20299495;

	t69 = ((x277&x278)<=(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 1U;
	int16_t x282 = INT16_MIN;
	int64_t x283 = 1932200886LL;
	volatile int32_t t70 = -152093;

	t70 = ((x281&x282)<=(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	static int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	volatile int32_t x288 = 28;
	volatile int32_t t71 = -793;

	t71 = ((x285&x286)<=(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int32_t x292 = 2435;
	volatile int32_t t72 = -180928;

	t72 = ((x289&x290)<=(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = UINT16_MAX;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = INT8_MAX;
	int8_t x296 = -1;
	int32_t t73 = -3;

	t73 = ((x293&x294)<=(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -246;
	volatile int32_t t74 = 2379334;

	t74 = ((x297&x298)<=(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 12U;
	int16_t x302 = 6269;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -13457;

	t75 = ((x301&x302)<=(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	static volatile int32_t t76 = 126;

	t76 = ((x305&x306)<=(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = 4001U;

	t77 = ((x309&x310)<=(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	volatile int64_t x314 = INT64_MIN;
	int64_t x316 = 37839829941929339LL;
	int32_t t78 = -724952383;

	t78 = ((x313&x314)<=(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = -2857;
	uint16_t x319 = 0U;
	volatile int32_t t79 = -79585449;

	t79 = ((x317&x318)<=(x319&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 53077LLU;
	uint32_t x322 = 1588U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 5855315;

	t80 = ((x321&x322)<=(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -29269886;
	int32_t x326 = -1;
	uint32_t x327 = 57U;
	int8_t x328 = -15;
	volatile int32_t t81 = -2631;

	t81 = ((x325&x326)<=(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 11576248500452789LLU;
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 141;

	t82 = ((x329&x330)<=(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 11930U;
	static volatile int64_t x334 = 4LL;
	volatile int32_t x335 = -1;
	volatile uint8_t x336 = 85U;
	static volatile int32_t t83 = -7;

	t83 = ((x333&x334)<=(x335&x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 0;
	static volatile int16_t x338 = 3710;
	int8_t x339 = 5;
	int32_t x340 = -1;

	t84 = ((x337&x338)<=(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int8_t x342 = -1;
	volatile int64_t x343 = -813LL;
	int32_t x344 = -1;
	int32_t t85 = 21;

	t85 = ((x341&x342)<=(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	uint64_t x346 = 50LLU;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t86 = -45;

	t86 = ((x345&x346)<=(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -1LL;
	volatile int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t87 = -994;

	t87 = ((x349&x350)<=(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 1U;
	static int16_t x354 = INT16_MIN;
	int32_t x355 = -46271024;
	static volatile uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = 29;

	t88 = ((x353&x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MIN;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 271;

	t89 = ((x357&x358)<=(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t t90 = -19712902;

	t90 = ((x361&x362)<=(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	static volatile int32_t x366 = -112439889;
	volatile uint32_t x367 = 3U;
	volatile int32_t t91 = -80;

	t91 = ((x365&x366)<=(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 308330U;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 15593214;

	t92 = ((x369&x370)<=(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -6698;

	t93 = ((x373&x374)<=(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static int8_t x378 = INT8_MIN;
	int32_t x379 = -1;

	t94 = ((x377&x378)<=(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	uint32_t x382 = 10U;
	static volatile int8_t x384 = INT8_MIN;

	t95 = ((x381&x382)<=(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -12;
	int32_t x386 = INT32_MAX;
	volatile uint8_t x388 = 3U;
	int32_t t96 = -34722926;

	t96 = ((x385&x386)<=(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -12;
	volatile int32_t x390 = 1707968;
	int64_t x391 = -72555003580LL;
	uint64_t x392 = 1268407845299813LLU;
	int32_t t97 = -1;

	t97 = ((x389&x390)<=(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	int64_t x395 = 62830734469607LL;
	int16_t x396 = -11657;
	int32_t t98 = -5867;

	t98 = ((x393&x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -166342;
	static uint32_t x399 = 474U;
	uint16_t x400 = 14644U;
	static int32_t t99 = 243;

	t99 = ((x397&x398)<=(x399&x400));

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

