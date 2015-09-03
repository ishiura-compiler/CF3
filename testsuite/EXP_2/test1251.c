#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x33 = 0U;
volatile uint32_t t4 = 20552U;
int32_t x38 = INT32_MIN;
volatile uint8_t x45 = 62U;
static int64_t x59 = INT64_MIN;
int32_t t8 = -7314;
static int16_t x66 = INT16_MIN;
static volatile uint64_t x77 = 13601LLU;
int16_t x79 = -5163;
int64_t t11 = 828513351463924715LL;
static int64_t t12 = -530LL;
int64_t x111 = INT64_MIN;
uint16_t x116 = UINT16_MAX;
int8_t x118 = INT8_MIN;
int8_t x119 = 8;
static int64_t x124 = -1880543486LL;
int64_t t17 = -182140LL;
int8_t x146 = INT8_MIN;
uint32_t x155 = 4857007U;
int32_t x178 = -51837;
uint32_t x181 = 2U;
int32_t x184 = -5561738;
uint32_t x199 = UINT32_MAX;
int32_t t26 = -12356420;
int8_t x231 = 6;
volatile uint32_t x233 = 57U;
uint8_t x235 = 112U;
int16_t x251 = -1;
uint8_t x266 = UINT8_MAX;
uint16_t x269 = UINT16_MAX;
int32_t x271 = -1;
int32_t x272 = 6423;
volatile uint64_t x283 = 194706839LLU;
int8_t x293 = 0;
int32_t t36 = -40437;
int16_t x345 = 15849;
uint8_t x348 = 29U;
uint32_t x353 = 1066881088U;
static int64_t x356 = -7765269730LL;
uint16_t x382 = UINT16_MAX;
static int16_t x384 = INT16_MIN;
int8_t x399 = -1;
int64_t x400 = INT64_MIN;
uint64_t x414 = UINT64_MAX;
uint32_t x416 = 4030895U;
static volatile uint64_t t51 = 22544919551LLU;
int8_t x447 = INT8_MAX;
int32_t x450 = INT32_MAX;
int16_t x452 = -1;
uint64_t x461 = 4LLU;
int8_t x482 = INT8_MIN;
static int8_t x483 = -1;
int64_t x506 = -1LL;
uint64_t t58 = 77434063LLU;
uint8_t x516 = UINT8_MAX;
volatile int32_t t60 = 748363;
volatile uint32_t x522 = 1495647039U;
volatile int32_t x524 = INT32_MAX;
static int8_t x539 = INT8_MIN;
volatile uint32_t x543 = UINT32_MAX;
uint16_t x577 = 5892U;
static int32_t t66 = 10779;
static uint32_t x587 = 7423085U;
volatile uint32_t x588 = 14403036U;
uint64_t x598 = 7587682061132LLU;
int32_t x608 = -1;
uint32_t x613 = 4191783U;
uint16_t x615 = 6U;
volatile int64_t x634 = 984LL;
uint8_t x636 = 27U;
uint32_t x661 = UINT32_MAX;
int8_t x663 = INT8_MIN;
static int64_t t78 = 0LL;
int64_t x699 = INT64_MIN;
int16_t x703 = INT16_MIN;
int8_t x730 = INT8_MAX;
static uint16_t x731 = 56U;
uint64_t x733 = UINT64_MAX;
volatile int32_t x740 = INT32_MIN;
volatile uint64_t x743 = UINT64_MAX;
uint8_t x746 = 1U;
uint32_t t90 = 1539U;
uint8_t x762 = 0U;
static int64_t x771 = 140512012450LL;
volatile uint32_t x773 = UINT32_MAX;
volatile int32_t x777 = INT32_MAX;
static int32_t t94 = -14;
volatile int16_t x800 = INT16_MAX;
uint64_t t97 = 3181031LLU;
int64_t x813 = 129543LL;
static int8_t x814 = INT8_MIN;
static volatile int64_t t98 = 1880167274LL;
static int32_t x822 = INT32_MIN;
uint32_t x824 = UINT32_MAX;


void f0(void) {
	uint64_t x1 = 53568LLU;
	volatile int64_t x2 = INT64_MAX;
	static int8_t x3 = INT8_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 969421LLU;

	t0 = ((x1<<(x2==x3))*x4);

	if (t0 != 3510578880LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 4366932108LLU;
	static int64_t x6 = 7250052438LL;
	volatile uint32_t x7 = 891U;
	static volatile uint8_t x8 = UINT8_MAX;
	static volatile uint64_t t1 = 19960796860LLU;

	t1 = ((x5<<(x6==x7))*x8);

	if (t1 != 1113567687540LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int64_t x10 = -1363220241914409LL;
	int32_t x11 = INT32_MAX;
	volatile int8_t x12 = -7;
	volatile int32_t t2 = -133;

	t2 = ((x9<<(x10==x11))*x12);

	if (t2 != -229369) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = 0;
	uint8_t x30 = UINT8_MAX;
	volatile int32_t x31 = -1;
	static uint32_t x32 = UINT32_MAX;
	uint32_t t3 = 33063973U;

	t3 = ((x29<<(x30==x31))*x32);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	int8_t x36 = -1;

	t4 = ((x33<<(x34==x35))*x36);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = 4U;
	int8_t x39 = INT8_MIN;
	static uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t5 = 4LLU;

	t5 = ((x37<<(x38==x39))*x40);

	if (t5 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x46 = 7106362LLU;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t6 = -2;

	t6 = ((x45<<(x46==x47))*x48);

	if (t6 != -2031616) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x53 = 16708358177405LL;
	int64_t x54 = -31393LL;
	uint8_t x55 = 86U;
	static int32_t x56 = -7;
	int64_t t7 = 9060848LL;

	t7 = ((x53<<(x54==x55))*x56);

	if (t7 != -116958507241835LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MAX;
	uint16_t x58 = UINT16_MAX;
	int16_t x60 = -1;

	t8 = ((x57<<(x58==x59))*x60);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	uint64_t t9 = 12036104419758312LLU;

	t9 = ((x65<<(x66==x67))*x68);

	if (t9 != 2147483648LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x78 = 258752072903LLU;
	static volatile uint32_t x80 = 17607235U;
	volatile uint64_t t10 = 395LLU;

	t10 = ((x77<<(x78==x79))*x80);

	if (t10 != 239476003235LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x81 = 7U;
	volatile uint16_t x82 = 9U;
	static int64_t x83 = -349LL;
	static int64_t x84 = 6LL;

	t11 = ((x81<<(x82==x83))*x84);

	if (t11 != 42LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x93 = UINT16_MAX;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	volatile int64_t x96 = 3LL;

	t12 = ((x93<<(x94==x95))*x96);

	if (t12 != 196605LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile uint32_t x110 = 1592116617U;
	volatile uint16_t x112 = 17747U;
	static volatile uint64_t t13 = 6788LLU;

	t13 = ((x109<<(x110==x111))*x112);

	if (t13 != 18446744073709533869LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = INT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint32_t t14 = 6689295U;

	t14 = ((x113<<(x114==x115))*x116);

	if (t14 != 4294901761U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x117 = UINT8_MAX;
	static uint64_t x120 = UINT64_MAX;
	volatile uint64_t t15 = 34016559504187LLU;

	t15 = ((x117<<(x118==x119))*x120);

	if (t15 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = 7;
	uint16_t x122 = 43U;
	volatile int32_t x123 = -1;
	static volatile int64_t t16 = -39518525614829LL;

	t16 = ((x121<<(x122==x123))*x124);

	if (t16 != -13163804402LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x129 = INT16_MAX;
	volatile int64_t x130 = -24242375120193LL;
	volatile uint16_t x131 = 184U;
	int64_t x132 = 792LL;

	t17 = ((x129<<(x130==x131))*x132);

	if (t17 != 25951464LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x133 = 406U;
	volatile int64_t x134 = INT64_MIN;
	volatile uint8_t x135 = 6U;
	static uint8_t x136 = 12U;
	volatile int32_t t18 = -5570629;

	t18 = ((x133<<(x134==x135))*x136);

	if (t18 != 4872) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x145 = 227;
	int64_t x147 = INT64_MIN;
	static int8_t x148 = -1;
	volatile int32_t t19 = 64;

	t19 = ((x145<<(x146==x147))*x148);

	if (t19 != -227) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x149 = 84472016U;
	volatile int64_t x150 = -117LL;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MIN;
	uint32_t t20 = 153U;

	t20 = ((x149<<(x150==x151))*x152);

	if (t20 != 2072483840U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x153 = 1;
	int8_t x154 = INT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t21 = INT32_MIN;

	t21 = ((x153<<(x154==x155))*x156);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x169 = INT8_MAX;
	int16_t x170 = -1;
	volatile int16_t x171 = 3251;
	int64_t x172 = -1LL;
	static volatile int64_t t22 = -485268123047LL;

	t22 = ((x169<<(x170==x171))*x172);

	if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x177 = 1180397LLU;
	static uint8_t x179 = UINT8_MAX;
	int32_t x180 = 1789395;
	volatile uint64_t t23 = 5310968320702624LLU;

	t23 = ((x177<<(x178==x179))*x180);

	if (t23 != 2112196489815LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x182 = -11197;
	uint8_t x183 = 67U;
	uint32_t t24 = 21546439U;

	t24 = ((x181<<(x182==x183))*x184);

	if (t24 != 4283843820U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x189 = 468029577916LL;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = 22890384U;
	static uint16_t x192 = UINT16_MAX;
	int64_t t25 = -8186509682LL;

	t25 = ((x189<<(x190==x191))*x192);

	if (t25 != 30672318388725060LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x197 = 1521;
	uint16_t x198 = 1413U;
	int8_t x200 = 5;

	t26 = ((x197<<(x198==x199))*x200);

	if (t26 != 7605) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x213 = UINT64_MAX;
	static int8_t x214 = INT8_MIN;
	static uint32_t x215 = 813549672U;
	static int64_t x216 = -380374LL;
	uint64_t t27 = 47LLU;

	t27 = ((x213<<(x214==x215))*x216);

	if (t27 != 380374LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MAX;
	uint32_t x232 = 10724U;
	uint32_t t28 = 7018766U;

	t28 = ((x229<<(x230==x231))*x232);

	if (t28 != 2734620U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x234 = 3472U;
	int8_t x236 = 16;
	uint32_t t29 = 457273570U;

	t29 = ((x233<<(x234==x235))*x236);

	if (t29 != 912U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x245 = INT16_MAX;
	uint32_t x246 = 120772849U;
	volatile int64_t x247 = 1083350893086053163LL;
	static uint64_t x248 = 952412032LLU;
	uint64_t t30 = 3996243858595180354LLU;

	t30 = ((x245<<(x246==x247))*x248);

	if (t30 != 31207685052544LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	int16_t x252 = 21;
	static volatile int32_t t31 = 478;

	t31 = ((x249<<(x250==x251))*x252);

	if (t31 != 688107) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x265 = UINT32_MAX;
	int32_t x267 = INT32_MAX;
	int64_t x268 = -1398312824LL;
	int64_t t32 = -13LL;

	t32 = ((x265<<(x266==x267))*x268);

	if (t32 != -6005707847259091080LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x270 = -1;
	int32_t t33 = 18;

	t33 = ((x269<<(x270==x271))*x272);

	if (t33 != 841862610) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x273 = 257U;
	int16_t x274 = INT16_MIN;
	static uint32_t x275 = 1U;
	int64_t x276 = -1LL;
	int64_t t34 = -156LL;

	t34 = ((x273<<(x274==x275))*x276);

	if (t34 != -257LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	static volatile int32_t x284 = -570334;
	volatile int32_t t35 = -20809091;

	t35 = ((x281<<(x282==x283))*x284);

	if (t35 != -145435170) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x294 = -1;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1;

	t36 = ((x293<<(x294==x295))*x296);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x301 = 276085879687742922LLU;
	volatile int32_t x302 = 14298;
	volatile int16_t x303 = 50;
	int8_t x304 = INT8_MAX;
	uint64_t t37 = 879755714372LLU;

	t37 = ((x301<<(x302==x303))*x304);

	if (t37 != 16616162646633799478LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;
	volatile int32_t t38 = -3495;

	t38 = ((x305<<(x306==x307))*x308);

	if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x317 = UINT16_MAX;
	uint16_t x318 = 896U;
	uint16_t x319 = 3U;
	volatile uint64_t x320 = UINT64_MAX;
	uint64_t t39 = 69064609923626754LLU;

	t39 = ((x317<<(x318==x319))*x320);

	if (t39 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x333 = INT16_MAX;
	static int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 225LLU;
	static volatile uint64_t t40 = 1542LLU;

	t40 = ((x333<<(x334==x335))*x336);

	if (t40 != 7372575LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	volatile int32_t t41 = 425143;

	t41 = ((x345<<(x346==x347))*x348);

	if (t41 != 459621) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x354 = 1;
	static int16_t x355 = 0;
	static int64_t t42 = 173252190471LL;

	t42 = ((x353<<(x354==x355))*x356);

	if (t42 != -8284619418155866240LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x377 = 3U;
	int16_t x378 = INT16_MIN;
	volatile int8_t x379 = INT8_MAX;
	int64_t x380 = 9656694440197LL;
	int64_t t43 = 272750204LL;

	t43 = ((x377<<(x378==x379))*x380);

	if (t43 != 28970083320591LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x381 = INT8_MAX;
	volatile int16_t x383 = INT16_MIN;
	static volatile int32_t t44 = 3;

	t44 = ((x381<<(x382==x383))*x384);

	if (t44 != -4161536) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x393 = 18U;
	int8_t x394 = -21;
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t45 = -379420;

	t45 = ((x393<<(x394==x395))*x396);

	if (t45 != -2304) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x397 = 41014657LLU;
	uint8_t x398 = UINT8_MAX;
	static uint64_t t46 = 12097862LLU;

	t46 = ((x397<<(x398==x399))*x400);

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x401 = 163186327U;
	static uint32_t x402 = 671U;
	int64_t x403 = INT64_MIN;
	int8_t x404 = 1;
	volatile uint32_t t47 = 9U;

	t47 = ((x401<<(x402==x403))*x404);

	if (t47 != 163186327U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x413 = UINT64_MAX;
	static uint64_t x415 = 5710208LLU;
	uint64_t t48 = 549480146732860LLU;

	t48 = ((x413<<(x414==x415))*x416);

	if (t48 != 18446744073705520721LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x421 = 4433U;
	uint16_t x422 = 5U;
	uint64_t x423 = 3746719936635419073LLU;
	int64_t x424 = -8186396896719LL;
	int64_t t49 = 2152498906729401380LL;

	t49 = ((x421<<(x422==x423))*x424);

	if (t49 != -36290297443155327LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x425 = 7;
	volatile int8_t x426 = -6;
	int8_t x427 = INT8_MIN;
	int8_t x428 = 0;
	volatile int32_t t50 = -7;

	t50 = ((x425<<(x426==x427))*x428);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x441 = 4LLU;
	uint64_t x442 = UINT64_MAX;
	static volatile int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;

	t51 = ((x441<<(x442==x443))*x444);

	if (t51 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x445 = UINT16_MAX;
	uint16_t x446 = 4U;
	static uint32_t x448 = UINT32_MAX;
	uint32_t t52 = 10U;

	t52 = ((x445<<(x446==x447))*x448);

	if (t52 != 4294901761U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x449 = INT32_MAX;
	int32_t x451 = 338648;
	static int32_t t53 = -62079675;

	t53 = ((x449<<(x450==x451))*x452);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x462 = 1U;
	static int32_t x463 = INT32_MIN;
	int8_t x464 = -25;
	volatile uint64_t t54 = 528468312440210LLU;

	t54 = ((x461<<(x462==x463))*x464);

	if (t54 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int32_t x484 = INT32_MIN;
	static uint64_t t55 = 3240465705LLU;

	t55 = ((x481<<(x482==x483))*x484);

	if (t55 != 2147483648LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x493 = 2;
	static uint32_t x494 = UINT32_MAX;
	uint32_t x495 = 7270U;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t56 = 5605545U;

	t56 = ((x493<<(x494==x495))*x496);

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x497 = UINT8_MAX;
	int64_t x498 = -1745LL;
	uint16_t x499 = UINT16_MAX;
	uint64_t x500 = 3218481029014722LLU;
	volatile uint64_t t57 = 18LLU;

	t57 = ((x497<<(x498==x499))*x500);

	if (t57 != 820712662398754110LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x505 = UINT64_MAX;
	volatile int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;

	t58 = ((x505<<(x506==x507))*x508);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x513 = 44402U;
	uint8_t x514 = 0U;
	volatile int8_t x515 = INT8_MIN;
	uint32_t t59 = 19429875U;

	t59 = ((x513<<(x514==x515))*x516);

	if (t59 != 11322510U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x517 = UINT8_MAX;
	volatile int64_t x518 = INT64_MAX;
	int32_t x519 = 946388999;
	uint8_t x520 = 7U;

	t60 = ((x517<<(x518==x519))*x520);

	if (t60 != 1785) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x521 = UINT32_MAX;
	int16_t x523 = 1;
	volatile uint32_t t61 = 371552U;

	t61 = ((x521<<(x522==x523))*x524);

	if (t61 != 2147483649U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x537 = 0U;
	int16_t x538 = -5338;
	int8_t x540 = INT8_MAX;
	static int32_t t62 = -6318;

	t62 = ((x537<<(x538==x539))*x540);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x541 = UINT64_MAX;
	volatile int64_t x542 = INT64_MAX;
	int32_t x544 = INT32_MAX;
	volatile uint64_t t63 = 171549876LLU;

	t63 = ((x541<<(x542==x543))*x544);

	if (t63 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x569 = 1U;
	int32_t x570 = -1;
	volatile uint32_t x571 = 160U;
	int16_t x572 = -1;
	static volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x569<<(x570==x571))*x572);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x573 = 77U;
	uint8_t x574 = 24U;
	int8_t x575 = 4;
	int8_t x576 = -41;
	static int32_t t65 = -8;

	t65 = ((x573<<(x574==x575))*x576);

	if (t65 != -3157) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x578 = INT64_MIN;
	int16_t x579 = 0;
	static int8_t x580 = INT8_MIN;

	t66 = ((x577<<(x578==x579))*x580);

	if (t66 != -754176) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x581 = 18234437U;
	static int32_t x582 = INT32_MIN;
	int32_t x583 = INT32_MAX;
	int8_t x584 = INT8_MIN;
	volatile uint32_t t67 = 6U;

	t67 = ((x581<<(x582==x583))*x584);

	if (t67 != 1960959360U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x585 = 485613619LL;
	int8_t x586 = 1;
	volatile int64_t t68 = 17865539713562214LL;

	t68 = ((x585<<(x586==x587))*x588);

	if (t68 != 6994310436547284LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x589 = 506U;
	uint16_t x590 = UINT16_MAX;
	int8_t x591 = 24;
	int8_t x592 = INT8_MIN;
	volatile uint32_t t69 = 3385U;

	t69 = ((x589<<(x590==x591))*x592);

	if (t69 != 4294902528U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x597 = 43507702222LLU;
	static volatile int32_t x599 = 450477616;
	uint8_t x600 = 3U;
	uint64_t t70 = 2073557LLU;

	t70 = ((x597<<(x598==x599))*x600);

	if (t70 != 130523106666LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x605 = 338086484U;
	uint64_t x606 = 1297197119958993LLU;
	volatile int16_t x607 = INT16_MIN;
	uint32_t t71 = 3U;

	t71 = ((x605<<(x606==x607))*x608);

	if (t71 != 3956880812U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x614 = 1306;
	int8_t x616 = 2;
	uint32_t t72 = 3952329U;

	t72 = ((x613<<(x614==x615))*x616);

	if (t72 != 8383566U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x617 = 613638U;
	int32_t x618 = INT32_MIN;
	int16_t x619 = -882;
	uint16_t x620 = 4U;
	volatile uint32_t t73 = 206799U;

	t73 = ((x617<<(x618==x619))*x620);

	if (t73 != 2454552U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x629 = 1027329U;
	static volatile uint32_t x630 = 71U;
	int32_t x631 = INT32_MAX;
	int16_t x632 = 1656;
	uint32_t t74 = 1019271707U;

	t74 = ((x629<<(x630==x631))*x632);

	if (t74 != 1701256824U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x633 = 20U;
	int32_t x635 = INT32_MAX;
	static int32_t t75 = -356637;

	t75 = ((x633<<(x634==x635))*x636);

	if (t75 != 540) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x641 = 81U;
	uint64_t x642 = UINT64_MAX;
	volatile int8_t x643 = -9;
	int8_t x644 = -12;
	volatile int32_t t76 = -2326;

	t76 = ((x641<<(x642==x643))*x644);

	if (t76 != -972) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x662 = 11117;
	uint64_t x664 = 171136233646922785LLU;
	uint64_t t77 = 23LLU;

	t77 = ((x661<<(x662==x663))*x664);

	if (t77 != 7807302909276120031LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x673 = 14531557135LL;
	int8_t x674 = INT8_MAX;
	int64_t x675 = INT64_MAX;
	int16_t x676 = INT16_MIN;

	t78 = ((x673<<(x674==x675))*x676);

	if (t78 != -476170064199680LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x697 = INT16_MAX;
	static int16_t x698 = -1;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t79 = -18380;

	t79 = ((x697<<(x698==x699))*x700);

	if (t79 != -4194176) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x701 = INT16_MAX;
	int64_t x702 = INT64_MAX;
	int16_t x704 = INT16_MIN;
	volatile int32_t t80 = 0;

	t80 = ((x701<<(x702==x703))*x704);

	if (t80 != -1073709056) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x709 = UINT64_MAX;
	uint32_t x710 = UINT32_MAX;
	volatile int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MAX;
	uint64_t t81 = 119541LLU;

	t81 = ((x709<<(x710==x711))*x712);

	if (t81 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x721 = 50485320240LLU;
	uint64_t x722 = 331132LLU;
	static int8_t x723 = 0;
	int32_t x724 = 0;
	uint64_t t82 = 1382LLU;

	t82 = ((x721<<(x722==x723))*x724);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x725 = UINT8_MAX;
	uint16_t x726 = 32U;
	static volatile int16_t x727 = INT16_MIN;
	static int8_t x728 = INT8_MIN;
	int32_t t83 = -48979;

	t83 = ((x725<<(x726==x727))*x728);

	if (t83 != -32640) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x729 = UINT64_MAX;
	uint64_t x732 = UINT64_MAX;
	uint64_t t84 = 48672221LLU;

	t84 = ((x729<<(x730==x731))*x732);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x734 = 0LLU;
	volatile int8_t x735 = 5;
	volatile uint16_t x736 = 76U;
	static volatile uint64_t t85 = 0LLU;

	t85 = ((x733<<(x734==x735))*x736);

	if (t85 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x737 = 423U;
	static uint64_t x738 = 907229809295783494LLU;
	static int8_t x739 = INT8_MIN;
	uint32_t t86 = 0U;

	t86 = ((x737<<(x738==x739))*x740);

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x741 = 1628U;
	int8_t x742 = 1;
	static int64_t x744 = -6913700LL;
	volatile int64_t t87 = 168847340206LL;

	t87 = ((x741<<(x742==x743))*x744);

	if (t87 != -11255503600LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x745 = INT8_MAX;
	int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;
	volatile int32_t t88 = -11864;

	t88 = ((x745<<(x746==x747))*x748);

	if (t88 != -4161536) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x749 = 82394717U;
	static int64_t x750 = 197591165230021921LL;
	uint16_t x751 = 1307U;
	int32_t x752 = 148021;
	volatile uint32_t t89 = 271U;

	t89 = ((x749<<(x750==x751))*x752);

	if (t89 != 2736251713U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x753 = UINT32_MAX;
	int16_t x754 = -1;
	uint32_t x755 = 3875214U;
	uint32_t x756 = 2940U;

	t90 = ((x753<<(x754==x755))*x756);

	if (t90 != 4294964356U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x761 = INT16_MAX;
	int16_t x763 = 4;
	int8_t x764 = -1;
	int32_t t91 = 30839;

	t91 = ((x761<<(x762==x763))*x764);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x769 = 1542LLU;
	volatile int64_t x770 = INT64_MIN;
	int32_t x772 = INT32_MIN;
	static volatile uint64_t t92 = 35100968LLU;

	t92 = ((x769<<(x770==x771))*x772);

	if (t92 != 18446740762289766400LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x774 = UINT32_MAX;
	uint32_t x775 = UINT32_MAX;
	int64_t x776 = 99LL;
	int64_t t93 = -23030250LL;

	t93 = ((x773<<(x774==x775))*x776);

	if (t93 != 425201762106LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x778 = 1U;
	uint8_t x779 = 47U;
	int16_t x780 = -1;

	t94 = ((x777<<(x778==x779))*x780);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x781 = UINT16_MAX;
	int64_t x782 = INT64_MIN;
	uint16_t x783 = 7U;
	volatile int8_t x784 = INT8_MIN;
	volatile int32_t t95 = 79;

	t95 = ((x781<<(x782==x783))*x784);

	if (t95 != -8388480) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x789 = 7U;
	uint8_t x790 = 1U;
	uint16_t x791 = 29U;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t96 = -102587017;

	t96 = ((x789<<(x790==x791))*x792);

	if (t96 != 1785) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x797 = 63742LLU;
	static int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MIN;

	t97 = ((x797<<(x798==x799))*x800);

	if (t97 != 2088634114LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x815 = UINT64_MAX;
	volatile int8_t x816 = -1;

	t98 = ((x813<<(x814==x815))*x816);

	if (t98 != -129543LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x821 = 10U;
	uint8_t x823 = 13U;
	uint32_t t99 = 924027U;

	t99 = ((x821<<(x822==x823))*x824);

	if (t99 != 4294967286U) { NG(); } else { ; }
	
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

