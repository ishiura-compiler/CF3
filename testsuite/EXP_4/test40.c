#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MAX;
int8_t x12 = -27;
volatile uint64_t t2 = 2400114980593LLU;
volatile int32_t x21 = -1;
uint64_t x29 = 131307963975430014LLU;
volatile int8_t x34 = -15;
int16_t x37 = 2567;
uint32_t x42 = UINT32_MAX;
static int64_t x46 = -4025885890923LL;
volatile uint32_t t11 = 12568U;
uint64_t x68 = UINT64_MAX;
int64_t x73 = 3LL;
static volatile int64_t t15 = -40362LL;
static int32_t t16 = -459915392;
int16_t x93 = INT16_MAX;
int16_t x95 = INT16_MAX;
int16_t x99 = INT16_MAX;
static volatile int64_t t20 = INT64_MIN;
int64_t x105 = INT64_MIN;
uint64_t x106 = UINT64_MAX;
uint32_t x107 = 31U;
uint32_t x109 = UINT32_MAX;
volatile int32_t x116 = -1;
uint64_t x117 = 255074556153996883LLU;
int8_t x124 = 1;
volatile uint64_t t25 = 198747955818LLU;
static int32_t x127 = -236;
int8_t x142 = INT8_MIN;
int64_t x144 = -1LL;
volatile int16_t x145 = INT16_MIN;
static volatile int32_t x149 = INT32_MAX;
volatile int64_t x151 = INT64_MIN;
volatile int64_t t31 = 2785LL;
int64_t x153 = -17194298984664LL;
static int8_t x156 = 1;
uint8_t x161 = 2U;
volatile int16_t x165 = -1289;
static int8_t x186 = -15;
volatile uint8_t x192 = 30U;
volatile int64_t t41 = 1759446409LL;
static volatile int32_t t42 = INT32_MIN;
volatile uint16_t x221 = 788U;
uint32_t x224 = 1796643576U;
int16_t x225 = INT16_MIN;
int8_t x243 = INT8_MIN;
uint64_t t52 = 480840LLU;
static int16_t x249 = 0;
static int16_t x251 = INT16_MIN;
int64_t t53 = 5519206896LL;
static int8_t x253 = INT8_MIN;
uint16_t x255 = UINT16_MAX;
uint64_t t57 = 771449180998396LLU;
uint64_t x282 = UINT64_MAX;
int32_t x285 = INT32_MIN;
int8_t x288 = INT8_MAX;
static uint8_t x289 = 1U;
volatile uint8_t x290 = UINT8_MAX;
uint32_t x294 = UINT32_MAX;
static uint8_t x303 = 70U;
uint32_t x306 = UINT32_MAX;
static int64_t t65 = 794932632LL;
uint16_t x314 = 10U;
static uint32_t t66 = 91U;
int32_t x318 = INT32_MIN;
static uint16_t x321 = UINT16_MAX;
uint8_t x324 = 7U;
int64_t x333 = INT64_MIN;
static uint32_t x343 = 46573959U;
static uint32_t t73 = 924853171U;
volatile int64_t x349 = INT64_MIN;
int64_t x360 = -1LL;
int64_t t77 = -108LL;
volatile int64_t x361 = 1027726974130428960LL;
volatile int16_t x374 = INT16_MIN;
uint64_t x378 = 910432015252580533LLU;
int32_t x380 = -1;
int16_t x397 = -59;
static int8_t x400 = -1;
static uint8_t x406 = UINT8_MAX;
int16_t x409 = -7;
uint32_t x414 = UINT32_MAX;
uint32_t x416 = 19U;
int32_t x419 = -1;
volatile int64_t t89 = 61121583028280717LL;
int8_t x424 = INT8_MIN;
int64_t t90 = -112202226LL;
static volatile uint32_t x425 = 8096U;
uint16_t x429 = 0U;
int8_t x432 = INT8_MIN;
static int32_t x443 = -1;
static int32_t t94 = 2015865;
uint32_t x447 = 790957746U;
volatile uint32_t t95 = UINT32_MAX;
int8_t x449 = INT8_MAX;
uint16_t x450 = 3U;
uint32_t x454 = UINT32_MAX;
static int16_t x457 = INT16_MIN;
int64_t x466 = 1242642655224128LL;


void f0(void) {
	uint16_t x5 = 3U;
	static int8_t x6 = 0;
	uint32_t x7 = 201U;
	volatile int32_t x8 = INT32_MIN;
	volatile uint32_t t0 = 67U;

	t0 = (x5+(x6/(x7+x8)));

	if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 535;
	volatile uint64_t x10 = UINT64_MAX;
	static volatile uint64_t t1 = 8325806LLU;

	t1 = (x9+(x10/(x11+x12)));

	if (t1 != 563431401152323LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 36545428436368LLU;
	volatile int32_t x15 = -1;
	static uint32_t x16 = UINT32_MAX;

	t2 = (x13+(x14/(x15+x16)));

	if (t2 != 8380LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = UINT32_MAX;
	int8_t x18 = -1;
	volatile int16_t x19 = -1;
	int16_t x20 = -1;
	uint32_t t3 = UINT32_MAX;

	t3 = (x17+(x18/(x19+x20)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x22 = 28U;
	static uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -809658;

	t4 = (x21+(x22/(x23+x24)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x30 = 28U;
	static uint16_t x31 = UINT16_MAX;
	int8_t x32 = -1;
	uint64_t t5 = 5275600858900241LLU;

	t5 = (x29+(x30/(x31+x32)));

	if (t5 != 131307963975430014LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 790U;
	uint32_t x35 = 65002U;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 187LLU;

	t6 = (x33+(x34/(x35+x36)));

	if (t6 != 283791696647142LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = UINT16_MAX;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t7 = 4757;

	t7 = (x37+(x38/(x39+x40)));

	if (t7 != 2567) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static int8_t x43 = 6;
	int8_t x44 = INT8_MIN;
	volatile uint32_t t8 = 2197U;

	t8 = (x41+(x42/(x43+x44)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 29U;
	int16_t x47 = 1;
	int64_t x48 = INT64_MIN;
	volatile int64_t t9 = -23212584LL;

	t9 = (x45+(x46/(x47+x48)));

	if (t9 != 29LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = UINT32_MAX;
	static int64_t x50 = INT64_MIN;
	uint64_t x51 = 76307028LLU;
	int16_t x52 = INT16_MIN;
	static uint64_t t10 = 9025806169663770902LLU;

	t10 = (x49+(x50/(x51+x52)));

	if (t10 != 125218749929LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x53 = INT8_MIN;
	volatile uint32_t x54 = 201U;
	volatile uint16_t x55 = UINT16_MAX;
	volatile int32_t x56 = INT32_MIN;

	t11 = (x53+(x54/(x55+x56)));

	if (t11 != 4294967168U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	volatile int8_t x62 = INT8_MIN;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 10U;
	int32_t t12 = INT32_MAX;

	t12 = (x61+(x62/(x63+x64)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	static int32_t x66 = 1;
	int32_t x67 = 2;
	static uint64_t t13 = 505LLU;

	t13 = (x65+(x66/(x67+x68)));

	if (t13 != 32768LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	static uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = -9;
	static volatile int16_t x72 = -13828;
	uint64_t t14 = 12464526LLU;

	t14 = (x69+(x70/(x71+x72)));

	if (t14 != 65536LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x74 = -126844;
	uint16_t x75 = 18U;
	int8_t x76 = INT8_MIN;

	t15 = (x73+(x74/(x75+x76)));

	if (t15 != 1156LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = 1;
	static volatile uint16_t x82 = 0U;
	volatile int8_t x83 = INT8_MAX;
	static int16_t x84 = INT16_MAX;

	t16 = (x81+(x82/(x83+x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = -1;
	volatile int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	static int32_t x92 = -1;
	volatile int32_t t17 = 1;

	t17 = (x89+(x90/(x91+x92)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x94 = -1;
	volatile uint64_t x96 = 6785862693LLU;
	static uint64_t t18 = 885803676021261727LLU;

	t18 = (x93+(x94/(x95+x96)));

	if (t18 != 2718427735LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 18U;
	int64_t x98 = 557537724417405LL;
	int64_t x100 = 19165LL;
	volatile int64_t t19 = 14984693238506577LL;

	t19 = (x97+(x98/(x99+x100)));

	if (t19 != 10735918611LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = 0;
	volatile int64_t x103 = -2909474864789045LL;
	uint32_t x104 = 10U;

	t20 = (x101+(x102/(x103+x104)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x108 = 28LL;
	uint64_t t21 = 369LLU;

	t21 = (x105+(x106/(x107+x108)));

	if (t21 != 9536028716070191937LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	int16_t x112 = INT16_MIN;
	static uint64_t t22 = 27152LLU;

	t22 = (x109+(x110/(x111+x112)));

	if (t22 != 4294967297LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MAX;
	volatile int32_t x114 = -351;
	int16_t x115 = INT16_MIN;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x113+(x114/(x115+x116)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x118 = -4;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -1;
	uint64_t t24 = 1326052099667000679LLU;

	t24 = (x117+(x118/(x119+x120)));

	if (t24 != 255074556153996883LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 50U;
	int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = 3LLU;

	t25 = (x121+(x122/(x123+x124)));

	if (t25 != 4611686018427387922LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int8_t x126 = -1;
	volatile int64_t x128 = INT64_MAX;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x125+(x126/(x127+x128)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = -1;
	uint64_t x131 = 709767LLU;
	static int16_t x132 = INT16_MIN;
	volatile uint64_t t27 = 25568353LLU;

	t27 = (x129+(x130/(x131+x132)));

	if (t27 != 27247815836944LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x134 = -1;
	int64_t x135 = 675LL;
	int32_t x136 = INT32_MAX;
	volatile int64_t t28 = 328911307927453693LL;

	t28 = (x133+(x134/(x135+x136)));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 91008;
	int32_t x143 = 113;
	volatile int64_t t29 = -50147530135647367LL;

	t29 = (x141+(x142/(x143+x144)));

	if (t29 != 91007LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = 152;
	int64_t x147 = 447959395LL;
	static volatile int32_t x148 = 73794;
	static volatile int64_t t30 = -484236LL;

	t30 = (x145+(x146/(x147+x148)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x150 = 1U;
	uint32_t x152 = 6053U;

	t31 = (x149+(x150/(x151+x152)));

	if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = 796;
	static int64_t t32 = -45LL;

	t32 = (x153+(x154/(x155+x156)));

	if (t32 != -17194298984582LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = -1LL;
	int8_t x159 = 1;
	int32_t x160 = 34536783;
	int64_t t33 = INT64_MIN;

	t33 = (x157+(x158/(x159+x160)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x162 = -286;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = UINT32_MAX;
	static uint32_t t34 = 7165658U;

	t34 = (x161+(x162/(x163+x164)));

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x166 = 3660U;
	uint32_t x167 = 16902213U;
	int64_t x168 = INT64_MIN;
	int64_t t35 = 397867224668128LL;

	t35 = (x165+(x166/(x167+x168)));

	if (t35 != -1289LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x177 = INT16_MIN;
	static volatile int8_t x178 = 7;
	int32_t x179 = -135;
	volatile int64_t x180 = 12249LL;
	volatile int64_t t36 = 621862LL;

	t36 = (x177+(x178/(x179+x180)));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x181 = 0U;
	int32_t x182 = 164;
	uint8_t x183 = 43U;
	int16_t x184 = -124;
	static int32_t t37 = 140834509;

	t37 = (x181+(x182/(x183+x184)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = 2U;
	static uint32_t x187 = 144717U;
	int64_t x188 = INT64_MIN;
	int64_t t38 = -620480LL;

	t38 = (x185+(x186/(x187+x188)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = 1;
	static uint16_t x190 = 218U;
	int32_t x191 = INT32_MIN;
	volatile int32_t t39 = 6701704;

	t39 = (x189+(x190/(x191+x192)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = 7U;
	int64_t x194 = 15213676446654LL;
	int16_t x195 = -980;
	static uint16_t x196 = 2U;
	volatile int64_t t40 = -1710LL;

	t40 = (x193+(x194/(x195+x196)));

	if (t40 != -15555906380LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	int64_t x199 = 10LL;
	static int32_t x200 = -1014;

	t41 = (x197+(x198/(x199+x200)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x202 = 1U;
	int16_t x203 = 5570;
	int8_t x204 = INT8_MIN;

	t42 = (x201+(x202/(x203+x204)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = -1;
	int64_t x206 = -1LL;
	int16_t x207 = -1;
	uint8_t x208 = 68U;
	volatile int64_t t43 = 0LL;

	t43 = (x205+(x206/(x207+x208)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -11;
	int32_t x211 = -1;
	volatile int64_t x212 = 0LL;
	volatile int64_t t44 = 117797784LL;

	t44 = (x209+(x210/(x211+x212)));

	if (t44 != -2147483637LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x213 = INT32_MIN;
	volatile int16_t x214 = -1;
	static int64_t x215 = -290564391686LL;
	int64_t x216 = INT64_MAX;
	volatile int64_t t45 = 3053LL;

	t45 = (x213+(x214/(x215+x216)));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	static int16_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = INT16_MAX;
	int32_t t46 = INT32_MIN;

	t46 = (x217+(x218/(x219+x220)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x222 = -1;
	static int16_t x223 = -1;
	uint32_t t47 = 8845U;

	t47 = (x221+(x222/(x223+x224)));

	if (t47 != 790U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x226 = 7;
	int16_t x227 = -162;
	uint8_t x228 = 121U;
	int32_t t48 = -12550;

	t48 = (x225+(x226/(x227+x228)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x229 = INT32_MIN;
	static uint16_t x230 = 13170U;
	int16_t x231 = -1;
	int32_t x232 = INT32_MAX;
	int32_t t49 = INT32_MIN;

	t49 = (x229+(x230/(x231+x232)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MAX;
	uint32_t x235 = 107U;
	int16_t x236 = 3969;
	volatile int64_t t50 = -133601388582693370LL;

	t50 = (x233+(x234/(x235+x236)));

	if (t50 != 2262848880484360LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x241 = 1;
	int32_t x242 = -1;
	static int8_t x244 = INT8_MAX;
	int32_t t51 = -3225;

	t51 = (x241+(x242/(x243+x244)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = -1;
	int16_t x246 = -4;
	int16_t x247 = INT16_MIN;
	static uint64_t x248 = 153LLU;

	t52 = (x245+(x246/(x247+x248)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = INT64_MAX;
	int16_t x252 = -1;

	t53 = (x249+(x250/(x251+x252)));

	if (t53 != -281466387038200LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x254 = INT64_MAX;
	volatile int8_t x256 = INT8_MIN;
	volatile int64_t t54 = -6346921382422999LL;

	t54 = (x253+(x254/(x255+x256)));

	if (t54 != 141015060113541LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 1639U;
	uint8_t x260 = UINT8_MAX;
	volatile int64_t t55 = 4392175491476LL;

	t55 = (x257+(x258/(x259+x260)));

	if (t55 != -4869784602384814LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = -4803;
	static volatile int32_t x262 = 29920724;
	int8_t x263 = -1;
	volatile int64_t x264 = -1LL;
	volatile int64_t t56 = -90716250053899482LL;

	t56 = (x261+(x262/(x263+x264)));

	if (t56 != -14965165LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	static uint64_t x272 = 8495190310576LLU;

	t57 = (x269+(x270/(x271+x272)));

	if (t57 != 2139214LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 3LLU;
	int8_t x280 = INT8_MAX;
	volatile uint64_t t58 = 3612LLU;

	t58 = (x277+(x278/(x279+x280)));

	if (t58 != 33038081LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = INT16_MAX;
	static uint32_t x283 = 125647U;
	int16_t x284 = -8194;
	static uint64_t t59 = 61000278LLU;

	t59 = (x281+(x282/(x283+x284)));

	if (t59 != 157056389173185LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x286 = 77650172U;
	uint8_t x287 = 0U;
	uint32_t t60 = 22468U;

	t60 = (x285+(x286/(x287+x288)));

	if (t60 != 2148095066U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x291 = 244101794260385758LLU;
	int16_t x292 = -1;
	uint64_t t61 = 744186327LLU;

	t61 = (x289+(x290/(x291+x292)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x293 = 1U;
	static uint64_t x295 = 4004865798078LLU;
	volatile int16_t x296 = -5203;
	static uint64_t t62 = 290660135740110LLU;

	t62 = (x293+(x294/(x295+x296)));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = -1;
	int32_t x302 = INT32_MAX;
	uint16_t x304 = 254U;
	volatile int32_t t63 = -226103367;

	t63 = (x301+(x302/(x303+x304)));

	if (t63 != 6628034) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x305 = 15U;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;
	volatile uint32_t t64 = 687086U;

	t64 = (x305+(x306/(x307+x308)));

	if (t64 != 131605U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = 4629LL;
	uint16_t x310 = 175U;
	int16_t x311 = -1;
	uint8_t x312 = 9U;

	t65 = (x309+(x310/(x311+x312)));

	if (t65 != 4650LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x313 = 17U;
	uint32_t x315 = UINT32_MAX;
	static uint32_t x316 = UINT32_MAX;

	t66 = (x313+(x314/(x315+x316)));

	if (t66 != 17U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x317 = INT16_MAX;
	int8_t x319 = 14;
	static uint16_t x320 = UINT16_MAX;
	int32_t t67 = -63641895;

	t67 = (x317+(x318/(x319+x320)));

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x322 = -23823099;
	uint32_t x323 = UINT32_MAX;
	uint32_t t68 = 653825962U;

	t68 = (x321+(x322/(x323+x324)));

	if (t68 != 711922901U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = -1;
	volatile int32_t x327 = 3;
	volatile uint32_t x328 = 730200476U;
	uint32_t t69 = 721U;

	t69 = (x325+(x326/(x327+x328)));

	if (t69 != 2147483653U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 361U;
	uint64_t t70 = 8410689LLU;

	t70 = (x329+(x330/(x331+x332)));

	if (t70 != 51240955760304309LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	int64_t t71 = 1004LL;

	t71 = (x333+(x334/(x335+x336)));

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x337 = -1LL;
	static uint8_t x338 = 6U;
	volatile int32_t x339 = -1;
	static int16_t x340 = -1;
	volatile int64_t t72 = -1578881168631496LL;

	t72 = (x337+(x338/(x339+x340)));

	if (t72 != -4LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x341 = INT8_MIN;
	int8_t x342 = -1;
	int16_t x344 = INT16_MIN;

	t73 = (x341+(x342/(x343+x344)));

	if (t73 != 4294967260U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x345 = 816368912094LLU;
	static int16_t x346 = INT16_MIN;
	static uint64_t x347 = 3LLU;
	uint8_t x348 = 4U;
	uint64_t t74 = 181926332LLU;

	t74 = (x345+(x346/(x347+x348)));

	if (t74 != 2635249969755986215LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x350 = 23U;
	int16_t x351 = 8;
	uint16_t x352 = 4583U;
	int64_t t75 = INT64_MIN;

	t75 = (x349+(x350/(x351+x352)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = -1;
	int64_t t76 = -15564LL;

	t76 = (x353+(x354/(x355+x356)));

	if (t76 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x357 = UINT16_MAX;
	uint16_t x358 = 1U;
	uint32_t x359 = 121595U;

	t77 = (x357+(x358/(x359+x360)));

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = -1;
	int8_t x363 = -6;
	uint16_t x364 = 14878U;
	int64_t t78 = -974LL;

	t78 = (x361+(x362/(x363+x364)));

	if (t78 != 1027726974130428960LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x369 = -9;
	int8_t x370 = INT8_MIN;
	static int64_t x371 = -7461822679119997LL;
	uint64_t x372 = 7795392740776LLU;
	uint64_t t79 = 8273LLU;

	t79 = (x369+(x370/(x371+x372)));

	if (t79 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x375 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t80 = -405;

	t80 = (x373+(x374/(x375+x376)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = 2131;
	static uint32_t x379 = 12U;
	volatile uint64_t t81 = 8186957557860990LLU;

	t81 = (x377+(x378/(x379+x380)));

	if (t81 != 82766546841145815LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x385 = INT8_MIN;
	int32_t x386 = 2038;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t82 = 507;

	t82 = (x385+(x386/(x387+x388)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = 744552074424679LLU;
	static int8_t x391 = -3;
	int8_t x392 = -31;
	uint64_t t83 = 4187782929646528475LLU;

	t83 = (x389+(x390/(x391+x392)));

	if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x393 = -7951;
	int64_t x394 = -6396LL;
	int64_t x395 = -1LL;
	uint32_t x396 = UINT32_MAX;
	int64_t t84 = -159128LL;

	t84 = (x393+(x394/(x395+x396)));

	if (t84 != -7951LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x398 = 0;
	volatile int32_t x399 = -814;
	volatile int32_t t85 = 375774074;

	t85 = (x397+(x398/(x399+x400)));

	if (t85 != -59) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x405 = INT8_MIN;
	static int16_t x407 = 7;
	static int16_t x408 = INT16_MAX;
	int32_t t86 = -1748;

	t86 = (x405+(x406/(x407+x408)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x410 = INT64_MIN;
	volatile uint64_t x411 = UINT64_MAX;
	int32_t x412 = INT32_MAX;
	volatile uint64_t t87 = 43650396954885655LLU;

	t87 = (x409+(x410/(x411+x412)));

	if (t87 != 4294967293LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x413 = 713671068947LLU;
	int8_t x415 = INT8_MIN;
	volatile uint64_t t88 = 44058607889397LLU;

	t88 = (x413+(x414/(x415+x416)));

	if (t88 != 713671068948LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x418 = -46143324;
	static int64_t x420 = 1330763LL;

	t89 = (x417+(x418/(x419+x420)));

	if (t89 != 221LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = 3505046LL;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;

	t90 = (x421+(x422/(x423+x424)));

	if (t90 != -4291462508LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x426 = UINT32_MAX;
	static volatile uint8_t x427 = UINT8_MAX;
	uint32_t x428 = 501583287U;
	static uint32_t t91 = 1934494U;

	t91 = (x425+(x426/(x427+x428)));

	if (t91 != 8104U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x430 = 0U;
	volatile int64_t x431 = -39941496761689LL;
	static int64_t t92 = 1LL;

	t92 = (x429+(x430/(x431+x432)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = 4U;
	uint32_t x434 = UINT32_MAX;
	static int16_t x435 = INT16_MAX;
	uint16_t x436 = 176U;
	volatile uint32_t t93 = 37397560U;

	t93 = (x433+(x434/(x435+x436)));

	if (t93 != 130379U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x441 = 3;
	int16_t x442 = INT16_MAX;
	volatile int8_t x444 = -1;

	t94 = (x441+(x442/(x443+x444)));

	if (t94 != -16380) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = -1;
	uint16_t x446 = UINT16_MAX;
	uint8_t x448 = 3U;

	t95 = (x445+(x446/(x447+x448)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x451 = -187591790;
	int8_t x452 = INT8_MIN;
	int32_t t96 = 27;

	t96 = (x449+(x450/(x451+x452)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x453 = 11U;
	int8_t x455 = INT8_MAX;
	int8_t x456 = INT8_MIN;
	uint32_t t97 = 2U;

	t97 = (x453+(x454/(x455+x456)));

	if (t97 != 12U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x458 = 989388838636372LLU;
	int64_t x459 = -1LL;
	uint16_t x460 = UINT16_MAX;
	volatile uint64_t t98 = 975366017327448702LLU;

	t98 = (x457+(x458/(x459+x460)));

	if (t98 != 15097303555LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x465 = 13733646LLU;
	static int64_t x467 = 456506908110175LL;
	int32_t x468 = INT32_MIN;
	uint64_t t99 = 116254029087LLU;

	t99 = (x465+(x466/(x467+x468)));

	if (t99 != 13733648LLU) { NG(); } else { ; }
	
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

