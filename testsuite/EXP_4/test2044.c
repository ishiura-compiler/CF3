#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -54512;
static volatile int16_t x16 = -1339;
static int64_t x17 = -2LL;
uint64_t t3 = 5054227075LLU;
uint32_t x23 = UINT32_MAX;
volatile int16_t x25 = INT16_MAX;
int8_t x28 = INT8_MIN;
static int64_t t5 = 12204786902376815LL;
static uint64_t x30 = 28888LLU;
static volatile int64_t x35 = -1LL;
int32_t x42 = 48819;
volatile uint32_t x44 = 109U;
int8_t x45 = INT8_MIN;
uint32_t x46 = 177747U;
int8_t x56 = INT8_MIN;
static int16_t x58 = INT16_MIN;
int64_t x64 = -1LL;
uint16_t x65 = 13113U;
static int32_t x66 = INT32_MAX;
uint32_t t14 = 1787U;
static volatile int32_t x70 = INT32_MIN;
uint64_t t16 = 30LLU;
volatile uint8_t x101 = 54U;
int32_t x104 = INT32_MIN;
static int64_t x109 = 50861815LL;
uint16_t x116 = 54U;
int8_t x123 = INT8_MIN;
int8_t x125 = INT8_MIN;
static uint16_t x133 = 11787U;
volatile uint64_t t26 = 67963308598037LLU;
int64_t x154 = INT64_MIN;
uint64_t x156 = UINT64_MAX;
volatile uint64_t t27 = 60836218LLU;
int64_t t28 = -1324349074LL;
int64_t x165 = -1LL;
volatile int64_t x169 = -1LL;
volatile uint64_t x210 = 619609LLU;
uint64_t t37 = 9661894LLU;
volatile uint64_t t39 = 460547227189533133LLU;
int32_t x239 = INT32_MIN;
volatile int8_t x240 = INT8_MIN;
static int8_t x245 = -1;
uint64_t x247 = 6411455660906784807LLU;
uint64_t t41 = 18LLU;
uint16_t x251 = 25713U;
volatile uint64_t t42 = 975167420431712LLU;
volatile uint64_t t44 = 411029LLU;
volatile int16_t x261 = INT16_MIN;
static uint64_t x265 = UINT64_MAX;
uint8_t x269 = UINT8_MAX;
volatile uint32_t t47 = 22433891U;
int8_t x273 = INT8_MAX;
int16_t x276 = -1;
uint64_t t48 = 352786LLU;
int8_t x289 = -24;
volatile uint64_t t50 = 11965322910455LLU;
uint32_t t52 = 483757U;
uint8_t x306 = 55U;
int64_t t53 = -5677LL;
int8_t x314 = -2;
uint16_t x315 = 0U;
uint16_t x328 = 3922U;
uint64_t t56 = 173159215LLU;
static int16_t x339 = -1;
uint8_t x340 = UINT8_MAX;
static int8_t x341 = INT8_MIN;
int32_t x346 = INT32_MAX;
static uint64_t x348 = 142LLU;
volatile int64_t t60 = 23546886219LL;
int64_t t61 = 30612261658LL;
int8_t x399 = -1;
uint16_t x404 = UINT16_MAX;
uint16_t x409 = UINT16_MAX;
int16_t x412 = 50;
volatile uint64_t t65 = 8534510716960211LLU;
int32_t t66 = -46120496;
uint32_t x422 = 134597U;
volatile uint64_t x433 = 705913312293107LLU;
volatile uint64_t t69 = 10542LLU;
static uint32_t x439 = 33867U;
static volatile int16_t x443 = INT16_MIN;
int64_t x447 = 155297760887792LL;
int64_t x451 = -1LL;
volatile int64_t t73 = 28203474602490LL;
int16_t x454 = INT16_MIN;
int8_t x455 = -1;
static uint64_t x475 = UINT64_MAX;
int8_t x485 = INT8_MIN;
int32_t x486 = 685;
int8_t x488 = -1;
int16_t x495 = INT16_MIN;
uint8_t x497 = 27U;
static int16_t x500 = -5;
int64_t t81 = 0LL;
int8_t x502 = 9;
int16_t x504 = INT16_MAX;
uint32_t t82 = 1577085U;
int16_t x509 = -1;
static int64_t x530 = 2667810LL;
uint64_t x533 = 55936346407016LLU;
int8_t x540 = 0;
static volatile uint64_t x551 = 95167636LLU;
uint64_t t89 = 25415LLU;
int8_t x556 = INT8_MAX;
int32_t x557 = INT32_MIN;
int16_t x562 = 1;
static volatile uint64_t t92 = 2703978LLU;
static int16_t x568 = -458;
uint8_t x577 = 24U;
uint8_t x579 = 113U;
uint32_t t95 = 131531U;
static int32_t x581 = INT32_MIN;
int8_t x582 = INT8_MIN;
int8_t x593 = -62;


void f0(void) {
	uint64_t x1 = 23659LLU;
	int64_t x2 = INT64_MAX;
	uint64_t x3 = UINT64_MAX;
	static int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 38623305614LLU;

	t0 = (x1*(x2-(x3^x4)));

	if (t0 != 9223321229539147776LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	uint8_t x10 = 1U;
	uint8_t x11 = 3U;
	volatile int16_t x12 = -1;

	t1 = (x9*(x10-(x11^x12)));

	if (t1 != 635) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1753263728115LL;
	int16_t x14 = -1;
	uint16_t x15 = 470U;
	int64_t t2 = -2098986LL;

	t2 = (x13*(x14-(x15^x16)));

	if (t2 != -2209112297424900LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x18 = 1U;
	uint64_t x19 = 2924LLU;
	static volatile int8_t x20 = 19;

	t3 = (x17*(x18-(x19^x20)));

	if (t3 != 5884LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	int8_t x22 = INT8_MIN;
	uint64_t x24 = 1188998908317LLU;
	volatile uint64_t t4 = 2046906LLU;

	t4 = (x21*(x22-(x23^x24)));

	if (t4 != 1186118006498LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -63070999;
	volatile int64_t x27 = -1LL;

	t5 = (x25*(x26-(x27^x28)));

	if (t5 != -2066651585642LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 4U;
	volatile uint32_t x31 = 41787488U;
	volatile int64_t x32 = INT64_MIN;
	uint64_t t6 = 2084365187114114351LLU;

	t6 = (x29*(x30-(x31^x32)));

	if (t6 != 18446744073542517216LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = UINT8_MAX;
	static volatile int32_t x34 = -1;
	static uint16_t x36 = UINT16_MAX;
	int64_t t7 = 396466LL;

	t7 = (x33*(x34-(x35^x36)));

	if (t7 != 16711425LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 34944945546LLU;
	int8_t x38 = 1;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = 1;
	uint64_t t8 = 283632810548524111LLU;

	t8 = (x37*(x38-(x39^x40)));

	if (t8 != 104834836638LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint32_t x43 = UINT32_MAX;
	volatile uint32_t t9 = 183381827U;

	t9 = (x41*(x42-(x43^x44)));

	if (t9 != 2147434719U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x47 = 14U;
	static int32_t x48 = INT32_MIN;
	volatile uint32_t t10 = 104025U;

	t10 = (x45*(x46-(x47^x48)));

	if (t10 != 4272217472U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	static volatile int32_t t11 = 920691;

	t11 = (x53*(x54-(x55^x56)));

	if (t11 != 32385) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1673;
	uint16_t x59 = 3U;
	static uint16_t x60 = 5472U;
	static volatile int32_t t12 = -764;

	t12 = (x57*(x58-(x59^x60)));

	if (t12 != 63980539) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = -335325300;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = 5;
	volatile int64_t t13 = -140269773680831488LL;

	t13 = (x61*(x62-(x63^x64)));

	if (t13 != -1440211198698015300LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x67 = 2U;
	volatile uint32_t x68 = UINT32_MAX;

	t14 = (x65*(x66-(x67^x68)));

	if (t14 != 2147509874U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 760050482434219LLU;
	uint64_t t15 = 1718862LLU;

	t15 = (x69*(x70-(x71^x72)));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 3024376376196LLU;
	static int16_t x78 = INT16_MAX;
	static int16_t x79 = INT16_MIN;
	int32_t x80 = -12;

	t16 = (x77*(x78-(x79^x80)));

	if (t16 != 33268140138156LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x93 = 26647272680829LLU;
	volatile uint16_t x94 = 1U;
	int64_t x95 = -14444LL;
	static int8_t x96 = INT8_MIN;
	volatile uint64_t t17 = 5616524686LLU;

	t17 = (x93*(x94-(x95^x96)));

	if (t17 != 18064222474376251321LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -150528000LL;
	int8_t x103 = INT8_MIN;
	volatile int64_t t18 = 26852868826965LL;

	t18 = (x101*(x102-(x103^x104)));

	if (t18 != -124092622080LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = 200564LL;
	uint8_t x107 = 4U;
	uint32_t x108 = 190870U;
	static volatile uint64_t t19 = 5327013326074060851LLU;

	t19 = (x105*(x106-(x107^x108)));

	if (t19 != 18446744073709541918LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x110 = 117381LLU;
	static uint64_t x111 = 1LLU;
	uint8_t x112 = 0U;
	volatile uint64_t t20 = 34LLU;

	t20 = (x109*(x110-(x111^x112)));

	if (t20 != 5970159844700LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = UINT64_MAX;
	uint64_t t21 = 881LLU;

	t21 = (x113*(x114-(x115^x116)));

	if (t21 != 274877899904LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x121 = -24;
	int8_t x122 = -3;
	int16_t x124 = INT16_MIN;
	int32_t t22 = -379;

	t22 = (x121*(x122-(x123^x124)));

	if (t22 != 783432) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x126 = 103U;
	uint16_t x127 = 5U;
	uint8_t x128 = 34U;
	int32_t t23 = 2477;

	t23 = (x125*(x126-(x127^x128)));

	if (t23 != -8192) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = 78;
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t24 = 16709756;

	t24 = (x129*(x130-(x131^x132)));

	if (t24 != -2536014) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x134 = 101U;
	uint8_t x135 = 7U;
	int16_t x136 = INT16_MAX;
	static int32_t t25 = -26105320;

	t25 = (x133*(x134-(x135^x136)));

	if (t25 != -384951633) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = -3;
	uint64_t x142 = 4736856049LLU;
	volatile int64_t x143 = INT64_MAX;
	int64_t x144 = -1LL;

	t26 = (x141*(x142-(x143^x144)));

	if (t26 != 9223372022644207661LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 20;
	int8_t x155 = INT8_MIN;

	t27 = (x153*(x154-(x155^x156)));

	if (t27 != 18446744073709549076LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = 20U;
	int64_t x158 = -937671LL;
	static int32_t x159 = -801325;
	int8_t x160 = INT8_MIN;

	t28 = (x157*(x158-(x159^x160)));

	if (t28 != -34780680LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = INT8_MAX;
	static uint64_t x162 = 268666LLU;
	volatile int8_t x163 = 1;
	int16_t x164 = INT16_MAX;
	uint64_t t29 = 708091731LLU;

	t29 = (x161*(x162-(x163^x164)));

	if (t29 != 29959300LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x166 = -1;
	int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;
	volatile int64_t t30 = -1LL;

	t30 = (x165*(x166-(x167^x168)));

	if (t30 != 2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x170 = -1;
	int8_t x171 = -1;
	int8_t x172 = -1;
	volatile int64_t t31 = -5749530087327LL;

	t31 = (x169*(x170-(x171^x172)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = 41509;
	uint8_t x178 = 1U;
	int64_t x179 = -1LL;
	int32_t x180 = 824150280;
	int64_t t32 = -810783196444453441LL;

	t32 = (x177*(x178-(x179^x180)));

	if (t32 != 34209654055538LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x181 = 7U;
	volatile uint32_t x182 = 5775413U;
	static int8_t x183 = 1;
	uint16_t x184 = 4713U;
	uint32_t t33 = 2929811U;

	t33 = (x181*(x182-(x183^x184)));

	if (t33 != 40394907U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = UINT16_MAX;
	static int16_t x186 = -1;
	static uint16_t x187 = UINT16_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t34 = -1989;

	t34 = (x185*(x186-(x187^x188)));

	if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x201 = 7U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 0U;
	volatile uint64_t x204 = 916155085999LLU;
	static volatile uint64_t t35 = 8626688LLU;

	t35 = (x201*(x202-(x203^x204)));

	if (t35 != 18446737645591564087LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x205 = INT16_MAX;
	int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	static int8_t x208 = INT8_MAX;
	uint64_t t36 = 1LLU;

	t36 = (x205*(x206-(x207^x208)));

	if (t36 != 9223372036858969984LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = 1;
	int32_t x211 = -1;
	int32_t x212 = INT32_MAX;

	t37 = (x209*(x210-(x211^x212)));

	if (t37 != 2148103257LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 4559U;
	static volatile int16_t x215 = INT16_MIN;
	int64_t x216 = -104LL;
	volatile int64_t t38 = 4458305LL;

	t38 = (x213*(x214-(x215^x216)));

	if (t38 != 3597440LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	uint64_t x224 = 7084744730LLU;

	t39 = (x221*(x222-(x223^x224)));

	if (t39 != 18446743166862242432LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = 11U;
	volatile int16_t x238 = INT16_MAX;
	volatile uint32_t t40 = 12370U;

	t40 = (x237*(x238-(x239^x240)));

	if (t40 != 2147845493U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x246 = 1LLU;
	volatile uint8_t x248 = UINT8_MAX;

	t41 = (x245*(x246-(x247^x248)));

	if (t41 != 6411455660906784983LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static int64_t x250 = -3116LL;
	int32_t x252 = INT32_MIN;

	t42 = (x249*(x250-(x251^x252)));

	if (t42 != 18446744071562096797LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	volatile uint64_t x255 = 55066898276LLU;
	uint64_t x256 = 1LLU;
	static volatile uint64_t t43 = 340018368LLU;

	t43 = (x253*(x254-(x255^x256)));

	if (t43 != 3297005083928997733LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;

	t44 = (x257*(x258-(x259^x260)));

	if (t44 != 2147451008LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x262 = UINT32_MAX;
	uint8_t x263 = 37U;
	static volatile int32_t x264 = -148680;
	uint32_t t45 = 35821U;

	t45 = (x261*(x262-(x263^x264)));

	if (t45 != 3717136384U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MIN;
	static int32_t x268 = INT32_MIN;
	uint64_t t46 = 8999699518653LLU;

	t46 = (x265*(x266-(x267^x268)));

	if (t46 != 2147483648LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MAX;
	int16_t x272 = -1;

	t47 = (x269*(x270-(x271^x272)));

	if (t47 != 2147483393U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x274 = 1631LLU;
	int8_t x275 = INT8_MIN;

	t48 = (x273*(x274-(x275^x276)));

	if (t48 != 191008LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = -1;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = -1;
	static uint32_t t49 = 70260U;

	t49 = (x285*(x286-(x287^x288)));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x290 = 26932U;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = INT8_MAX;

	t50 = (x289*(x290-(x291^x292)));

	if (t50 != 18446744073708902176LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int64_t x294 = 44276703980LL;
	int32_t x295 = INT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile int64_t t51 = -29LL;

	t51 = (x293*(x294-(x295^x296)));

	if (t51 != 2901673795394835LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x297 = 5U;
	static int32_t x298 = INT32_MAX;
	static int32_t x299 = 14;
	uint8_t x300 = UINT8_MAX;

	t52 = (x297*(x298-(x299^x300)));

	if (t52 != 2147482438U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x305 = 2U;
	static int64_t x307 = 20886690104273431LL;
	static volatile uint32_t x308 = 2U;

	t53 = (x305*(x306-(x307^x308)));

	if (t53 != -41773380208546748LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = INT16_MIN;
	uint16_t x311 = 49U;
	int16_t x312 = -1;
	int32_t t54 = 371;

	t54 = (x309*(x310-(x311^x312)));

	if (t54 != 4187904) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = INT16_MIN;
	volatile uint8_t x316 = 90U;
	volatile int32_t t55 = -171358;

	t55 = (x313*(x314-(x315^x316)));

	if (t55 != 3014656) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 10725989958764136LLU;

	t56 = (x325*(x326-(x327^x328)));

	if (t56 != 10569355263469420544LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x337 = 10189U;
	uint16_t x338 = 6405U;
	int32_t t57 = 794798405;

	t57 = (x337*(x338-(x339^x340)));

	if (t57 != 67868929) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x342 = 243LLU;
	int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	uint64_t t58 = 266231161LLU;

	t58 = (x341*(x342-(x343^x344)));

	if (t58 != 18446744073709520384LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x347 = 5251978U;
	volatile uint64_t t59 = 1450426912LLU;

	t59 = (x345*(x346-(x347^x348)));

	if (t59 != 13846336306541494272LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = -1LL;
	int16_t x351 = INT16_MAX;
	int16_t x352 = 269;

	t60 = (x349*(x350-(x351^x352)));

	if (t60 != 4159872LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x365 = 1U;
	volatile int16_t x366 = -96;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;

	t61 = (x365*(x366-(x367^x368)));

	if (t61 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x369 = 84U;
	volatile int32_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static int64_t x372 = -1LL;
	volatile int64_t t62 = -166695032LL;

	t62 = (x369*(x370-(x371^x372)));

	if (t62 != -10752LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x397 = 7041U;
	int64_t x398 = -1LL;
	uint8_t x400 = UINT8_MAX;
	volatile int64_t t63 = -5651LL;

	t63 = (x397*(x398-(x399^x400)));

	if (t63 != 1795455LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x401 = INT64_MIN;
	volatile int32_t x402 = INT32_MIN;
	uint64_t x403 = 981LLU;
	static uint64_t t64 = 111866288991807LLU;

	t64 = (x401*(x402-(x403^x404)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x410 = -1;
	volatile uint64_t x411 = 24665288015LLU;

	t65 = (x409*(x410-(x411^x412)));

	if (t65 != 18445127634056408446LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x413 = 3025;
	static int8_t x414 = INT8_MAX;
	uint16_t x415 = 51U;
	volatile int16_t x416 = 205;

	t66 = (x413*(x414-(x415^x416)));

	if (t66 != -384175) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x417 = 223365305LL;
	uint8_t x418 = UINT8_MAX;
	static volatile uint32_t x419 = UINT32_MAX;
	int16_t x420 = INT16_MIN;
	int64_t t67 = -44074798LL;

	t67 = (x417*(x418-(x419^x420)));

	if (t67 != 959339417983269120LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = 4;
	int16_t x423 = -1;
	int32_t x424 = -587805;
	volatile uint32_t t68 = 101U;

	t68 = (x421*(x422-(x423^x424)));

	if (t68 != 4293154468U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;

	t69 = (x433*(x434-(x435^x436)));

	if (t69 != 6852570280767160320LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x437 = 0;
	uint8_t x438 = 0U;
	int64_t x440 = -3411161317762054303LL;
	int64_t t70 = -20LL;

	t70 = (x437*(x438-(x439^x440)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x441 = INT8_MAX;
	static uint32_t x442 = UINT32_MAX;
	int16_t x444 = -1;
	uint32_t t71 = 14U;

	t71 = (x441*(x442-(x443^x444)));

	if (t71 != 4290805760U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x445 = 28;
	int32_t x446 = INT32_MIN;
	static int32_t x448 = INT32_MIN;
	volatile int64_t t72 = 86LL;

	t72 = (x445*(x446-(x447^x448)));

	if (t72 != 4348318634512832LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x449 = 2;
	uint8_t x450 = 5U;
	static uint32_t x452 = 252U;

	t73 = (x449*(x450-(x451^x452)));

	if (t73 != 516LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x453 = INT16_MIN;
	uint16_t x456 = 70U;
	volatile int32_t t74 = -1;

	t74 = (x453*(x454-(x455^x456)));

	if (t74 != 1071415296) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x461 = 31224313576654LLU;
	int16_t x462 = -156;
	volatile int8_t x463 = INT8_MIN;
	static int64_t x464 = -260688332144464LL;
	volatile uint64_t t75 = 2576793468038LLU;

	t75 = (x461*(x462-(x463^x464)));

	if (t75 != 8910762067370957272LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x473 = INT64_MIN;
	static uint8_t x474 = 6U;
	int8_t x476 = -1;
	volatile uint64_t t76 = 816186LLU;

	t76 = (x473*(x474-(x475^x476)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x477 = 787020554U;
	static int32_t x478 = -1;
	volatile int64_t x479 = INT64_MIN;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t77 = 2609788LLU;

	t77 = (x477*(x478-(x479^x480)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x481 = 1;
	int8_t x482 = -1;
	uint16_t x483 = 2556U;
	int16_t x484 = -2;
	volatile int32_t t78 = 7305808;

	t78 = (x481*(x482-(x483^x484)));

	if (t78 != 2557) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x487 = 6204U;
	uint32_t t79 = 19985215U;

	t79 = (x485*(x486-(x487^x488)));

	if (t79 != 4294085376U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x493 = INT8_MIN;
	uint64_t x494 = 584724790LLU;
	static uint32_t x496 = 1U;
	static uint64_t t80 = 22086719575779LLU;

	t80 = (x493*(x494-(x495^x496)));

	if (t80 != 474906846592LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x498 = -366152732LL;
	int16_t x499 = -1;

	t81 = (x497*(x498-(x499^x500)));

	if (t81 != -9886123872LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x501 = 39764124U;
	int16_t x503 = INT16_MIN;

	t82 = (x501*(x502-(x503^x504)));

	if (t82 != 397641240U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x505 = -2589966LL;
	volatile uint16_t x506 = 2U;
	volatile uint8_t x507 = 32U;
	uint64_t x508 = UINT64_MAX;
	uint64_t t83 = 12302478LLU;

	t83 = (x505*(x506-(x507^x508)));

	if (t83 != 18446744073618902806LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x510 = UINT32_MAX;
	volatile int32_t x511 = INT32_MAX;
	static volatile int16_t x512 = 4044;
	uint32_t t84 = 696786726U;

	t84 = (x509*(x510-(x511^x512)));

	if (t84 != 2147479604U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x513 = -5985;
	static int32_t x514 = -1;
	int8_t x515 = INT8_MIN;
	int16_t x516 = 4771;
	int32_t t85 = 2894438;

	t85 = (x513*(x514-(x515^x516)));

	if (t85 != -28895580) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x529 = 201U;
	int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MIN;
	volatile int64_t t86 = 2909LL;

	t86 = (x529*(x530-(x531^x532)));

	if (t86 != -431101397070LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x534 = 6901U;
	static int8_t x535 = 1;
	int16_t x536 = -3633;
	uint64_t t87 = 425LLU;

	t87 = (x533*(x534-(x535^x536)));

	if (t87 != 589289409397913560LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x537 = 32321567U;
	uint8_t x538 = UINT8_MAX;
	uint16_t x539 = 334U;
	static volatile uint32_t t88 = 56U;

	t88 = (x537*(x538-(x539^x540)));

	if (t88 != 1741563503U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x549 = 5907448198534331632LLU;
	int16_t x550 = INT16_MIN;
	static int16_t x552 = -1;

	t89 = (x549*(x550-(x551^x552)));

	if (t89 != 13264575287480612784LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x553 = 0U;
	uint64_t x554 = 28237LLU;
	static uint8_t x555 = 0U;
	volatile uint64_t t90 = 42222075LLU;

	t90 = (x553*(x554-(x555^x556)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x558 = UINT8_MAX;
	static uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	uint64_t t91 = 4610602617919070718LLU;

	t91 = (x557*(x558-(x559^x560)));

	if (t91 != 69818988363776LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x561 = INT8_MIN;
	volatile int32_t x563 = INT32_MAX;
	volatile uint64_t x564 = 474297308091LLU;

	t92 = (x561*(x562-(x563^x564)));

	if (t92 != 60511101526400LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x565 = UINT8_MAX;
	int8_t x566 = INT8_MIN;
	static uint64_t x567 = 26035736LLU;
	volatile uint64_t t93 = 43LLU;

	t93 = (x565*(x566-(x567^x568)));

	if (t93 != 6639192750LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x573 = 30U;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = UINT16_MAX;
	uint32_t x576 = 27801U;
	static volatile uint32_t t94 = 1846305U;

	t94 = (x573*(x574-(x575^x576)));

	if (t94 != 4293831436U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x578 = -17;
	uint32_t x580 = 0U;

	t95 = (x577*(x578-(x579^x580)));

	if (t95 != 4294964176U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x583 = 4;
	static uint32_t x584 = 2087155U;
	uint32_t t96 = 7790U;

	t96 = (x581*(x582-(x583^x584)));

	if (t96 != 2147483648U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x589 = 179319355126637764LLU;
	volatile int32_t x590 = 14;
	int64_t x591 = INT64_MAX;
	int32_t x592 = INT32_MAX;
	volatile uint64_t t97 = 229209LLU;

	t97 = (x589*(x590-(x591^x592)));

	if (t97 != 10569225320231371448LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x594 = INT32_MIN;
	uint64_t x595 = UINT64_MAX;
	static int32_t x596 = INT32_MIN;
	uint64_t t98 = 7510171LLU;

	t98 = (x593*(x594-(x595^x596)));

	if (t98 != 266287972290LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x597 = UINT64_MAX;
	int16_t x598 = INT16_MIN;
	static uint16_t x599 = UINT16_MAX;
	volatile int64_t x600 = -1LL;
	volatile uint64_t t99 = 1001LLU;

	t99 = (x597*(x598-(x599^x600)));

	if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
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

